/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <MessagesExtension/MPStreamAdPlacerDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <MessagesExtension/MPMoPubAdPlacer.h>

@protocol MPCollectionViewAdPlacerDelegate, UICollectionViewDataSource, UICollectionViewDelegate;
@class MPStreamAdPlacer, UICollectionView, MPTimer, NSString;

@interface MPCollectionViewAdPlacer : NSObject <UICollectionViewDataSource, UICollectionViewDelegate, MPStreamAdPlacerDelegate, UICollectionViewDelegateFlowLayout, MPMoPubAdPlacer> {

	id<MPCollectionViewAdPlacerDelegate> _delegate;
	MPStreamAdPlacer* _streamAdPlacer;
	UICollectionView* _collectionView;
	id<UICollectionViewDataSource> _originalDataSource;
	id<UICollectionViewDelegate> _originalDelegate;
	MPTimer* _insertionTimer;

}

@property (nonatomic,retain) MPStreamAdPlacer * streamAdPlacer;                                     //@synthesize streamAdPlacer=_streamAdPlacer - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                     //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic,__weak) id<UICollectionViewDataSource> originalDataSource;              //@synthesize originalDataSource=_originalDataSource - In the implementation block
@property (assign,nonatomic,__weak) id<UICollectionViewDelegate> originalDelegate;                  //@synthesize originalDelegate=_originalDelegate - In the implementation block
@property (nonatomic,retain) MPTimer * insertionTimer;                                              //@synthesize insertionTimer=_insertionTimer - In the implementation block
@property (assign,nonatomic,__weak) id<MPCollectionViewAdPlacerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)placerWithCollectionView:(id)arg1 viewController:(id)arg2 adPositioning:(id)arg3 rendererConfigurations:(id)arg4 ;
+(id)placerWithCollectionView:(id)arg1 viewController:(id)arg2 rendererConfigurations:(id)arg3 ;
-(id)initWithCollectionView:(id)arg1 viewController:(id)arg2 adPositioning:(id)arg3 rendererConfigurations:(id)arg4 ;
-(void)updateVisibleCells;
-(MPStreamAdPlacer *)streamAdPlacer;
-(void)loadAdsForAdUnitID:(id)arg1 ;
-(void)loadAdsForAdUnitID:(id)arg1 targeting:(id)arg2 ;
-(void)mopubAdPlacer:(id)arg1 didTrackImpressionForAd:(id)arg2 withImpressionData:(id)arg3 ;
-(void)adPlacer:(id)arg1 didLoadAdAtIndexPath:(id)arg2 ;
-(void)adPlacer:(id)arg1 didRemoveAdsAtIndexPaths:(id)arg2 ;
-(void)nativeAdWillPresentModalForStreamAdPlacer:(id)arg1 ;
-(void)nativeAdDidDismissModalForStreamAdPlacer:(id)arg1 ;
-(void)nativeAdWillLeaveApplicationFromStreamAdPlacer:(id)arg1 ;
-(void)setStreamAdPlacer:(MPStreamAdPlacer *)arg1 ;
-(void)setOriginalDataSource:(id<UICollectionViewDataSource>)arg1 ;
-(MPTimer *)insertionTimer;
-(void)setInsertionTimer:(MPTimer *)arg1 ;
-(void)dealloc;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id<MPCollectionViewAdPlacerDelegate>)delegate;
-(void)setDelegate:(id<MPCollectionViewAdPlacerDelegate>)arg1 ;
-(UICollectionView *)collectionView;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)collectionView:(id)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(id<UICollectionViewDataSource>)originalDataSource;
-(id<UICollectionViewDelegate>)originalDelegate;
-(void)setOriginalDelegate:(id<UICollectionViewDelegate>)arg1 ;
@end

