/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <MessagesExtension/IMContainerAsset.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <MessagesExtension/IMUICollectionViewSliderLayoutDelegate.h>

@class NSMutableArray, NSString;

@interface IMCardScrollableAsset : IMContainerAsset <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IMUICollectionViewSliderLayoutDelegate> {

	NSMutableArray* _buildingAssets;
	long long _currentIndex;
	unsigned long long _transitionEffect;
	long long _noOfCellsInCollView;
	double _scale;

}

@property (nonatomic,retain) NSMutableArray * buildingAssets;                  //@synthesize buildingAssets=_buildingAssets - In the implementation block
@property (assign,nonatomic) long long currentIndex;                           //@synthesize currentIndex=_currentIndex - In the implementation block
@property (assign,nonatomic) unsigned long long transitionEffect;              //@synthesize transitionEffect=_transitionEffect - In the implementation block
@property (assign,nonatomic) long long noOfCellsInCollView;                    //@synthesize noOfCellsInCollView=_noOfCellsInCollView - In the implementation block
@property (assign,nonatomic) double scale;                                     //@synthesize scale=_scale - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)transitionEffect;
-(id)createViewWithProperties:(id)arg1 ;
-(void)updatePropertiesOnView;
-(void)setNoOfCellsInCollView:(long long)arg1 ;
-(void)recycleView;
-(void)setTransitionEffect:(unsigned long long)arg1 ;
-(void)fetchAssetResources;
-(void)setBuildingAssets:(NSMutableArray *)arg1 ;
-(NSMutableArray *)buildingAssets;
-(long long)noOfCellsInCollView;
-(void)handleViewableAsset:(id)arg1 ;
-(void)updateItemsInCollectionViewWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)imUICollectionViewSliderLayoutCurrentPage:(long long)arg1 ;
-(id)buildAssetViewWithScale:(double)arg1 ;
-(id)propertiesFromJson:(id)arg1 ;
-(void)prepareChildAsset:(id)arg1 ;
-(void)assetDidFinishBuilding:(id)arg1 ;
-(void)assetFailedToBuild:(id)arg1 ;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(long long)currentIndex;
-(void)setCurrentIndex:(long long)arg1 ;
@end

