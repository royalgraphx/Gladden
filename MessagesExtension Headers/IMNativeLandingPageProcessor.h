/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/IMSafariViewControllerDelegate.h>
#import <MessagesExtension/IMSKStoreManagerDelegate.h>

@protocol IMNativeLandingPageProcessorDelegate;
@class NSMutableDictionary, IMVideoAsset, IMSKStoreManager, NSString;

@interface IMNativeLandingPageProcessor : NSObject <IMSafariViewControllerDelegate, IMSKStoreManagerDelegate> {

	unsigned long long _loadTimeStamp;
	id<IMNativeLandingPageProcessorDelegate> _delegate;
	NSMutableDictionary* _assetIDRefs;
	IMVideoAsset* _videoAsset;
	IMSKStoreManager* _SKStore;
	IMSKStoreManager* _cachedSKStore;

}

@property (assign,nonatomic) unsigned long long loadTimeStamp;                                      //@synthesize loadTimeStamp=_loadTimeStamp - In the implementation block
@property (assign,nonatomic,__weak) id<IMNativeLandingPageProcessorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetIDRefs;                                     //@synthesize assetIDRefs=_assetIDRefs - In the implementation block
@property (nonatomic,retain) IMVideoAsset * videoAsset;                                             //@synthesize videoAsset=_videoAsset - In the implementation block
@property (setter=KStore,nonatomic,retain) IMSKStoreManager * SKStore;                              //@synthesize SKStore=_SKStore - In the implementation block
@property (nonatomic,retain) IMSKStoreManager * cachedSKStore;                                      //@synthesize cachedSKStore=_cachedSKStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)loadTimeStamp;
-(void)setLoadTimeStamp:(unsigned long long)arg1 ;
-(void)imSkStoreViewControllerLoadSuccessful:(id)arg1 ;
-(void)imSkStoreViewControllerLoadFailed:(id)arg1 error:(id)arg2 ;
-(void)imSkStoreViewControllerWillPresentScreen:(id)arg1 ;
-(void)imSkStoreViewControllerDidPresentScreen:(id)arg1 ;
-(void)imSkStoreViewControllerWillDismissScreen:(id)arg1 ;
-(void)imSkStoreViewControllerDidDismissScreen:(id)arg1 ;
-(void)openURLWithClickParams:(id)arg1 showTimeStamp:(unsigned long long)arg2 withRoot:(id)arg3 shouldOpen:(BOOL)arg4 ;
-(id)getAssetWithID:(id)arg1 ;
-(BOOL)shouldOpenExternallyForOpenMode:(id)arg1 ;
-(void)openExternalURL:(id)arg1 withFallback:(id)arg2 ;
-(void)openEmbeddedURL:(id)arg1 withFallbackUrl:(id)arg2 ;
-(void)showSKStoreWithID:(id)arg1 withFallbackUrl:(id)arg2 ;
-(BOOL)isLoadCalledOnSKStore;
-(id)iTunesIdFromString:(id)arg1 ;
-(id)createAndLoadStoreProductViewControllerWithProductID:(id)arg1 ;
-(void)setSKStore:(IMSKStoreManager *)arg1 ;
-(IMSKStoreManager *)cachedSKStore;
-(void)setCachedSKStore:(IMSKStoreManager *)arg1 ;
-(IMSKStoreManager *)SKStore;
-(id)createIMSKStoreManagerwithProductID:(id)arg1 ;
-(NSMutableDictionary *)assetIDRefs;
-(id)searchAssetWithID:(id)arg1 inContainer:(id)arg2 ;
-(void)setAssetIDRefs:(NSMutableDictionary *)arg1 ;
-(void)checkAndUpdatePrimaryStoreController;
-(void)imSafariViewControllerWillDismissScreen:(id)arg1 ;
-(void)imSafariViewControllerDidDismissScreen:(id)arg1 ;
-(id)initWithAdLoadTime:(unsigned long long)arg1 andDelegate:(id)arg2 ;
-(void)fireTrackersForAsset:(id)arg1 andOpenLandingPage:(BOOL)arg2 ;
-(void)fireTrackersForClickParams:(id)arg1 withShowTimeStamp:(double)arg2 ;
-(void)loadSKStoreWithID:(id)arg1 ;
-(id<IMNativeLandingPageProcessorDelegate>)delegate;
-(void)setDelegate:(id<IMNativeLandingPageProcessorDelegate>)arg1 ;
-(IMVideoAsset *)videoAsset;
-(void)setVideoAsset:(IMVideoAsset *)arg1 ;
@end
