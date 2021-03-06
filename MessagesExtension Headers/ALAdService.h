/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/ALStoreKitProductViewControllerDelegate.h>

@class NSMutableDictionary, ALStoreKitWindow, ALAdView, ALSdk, ALLogManager, NSObject, ALPreloadedAdManager;

@interface ALAdService : NSObject <ALStoreKitProductViewControllerDelegate> {

	NSMutableDictionary* _storeKitViewControllers;
	ALStoreKitWindow* _storeKitWindow;
	ALAdView* _currentPausedAdView;
	ALSdk* _sdk;
	ALLogManager* _logger;
	NSMutableDictionary* _adLoadStates;
	NSObject* _adLoadStatesLock;

}

@property (nonatomic,readonly) ALPreloadedAdManager * preloadManager; 
@property (nonatomic,retain) NSMutableDictionary * storeKitViewControllers;              //@synthesize storeKitViewControllers=_storeKitViewControllers - In the implementation block
@property (nonatomic,retain) ALStoreKitWindow * storeKitWindow;                          //@synthesize storeKitWindow=_storeKitWindow - In the implementation block
@property (assign,nonatomic,__weak) ALAdView * currentPausedAdView;                      //@synthesize currentPausedAdView=_currentPausedAdView - In the implementation block
@property (nonatomic,retain) ALSdk * sdk;                                                //@synthesize sdk=_sdk - In the implementation block
@property (nonatomic,retain) ALLogManager * logger;                                      //@synthesize logger=_logger - In the implementation block
@property (retain) NSMutableDictionary * adLoadStates;                                   //@synthesize adLoadStates=_adLoadStates - In the implementation block
@property (retain) NSObject * adLoadStatesLock;                                          //@synthesize adLoadStatesLock=_adLoadStatesLock - In the implementation block
+(id)accepts;
-(void)setSdk:(ALSdk *)arg1 ;
-(ALSdk *)sdk;
-(id)initWithSdk:(id)arg1 ;
-(void)preloadStoreKitIfNeededForAd:(id)arg1 adView:(id)arg2 interstitialViewController:(id)arg3 ;
-(void)dispatchPersistentPostbackForAd:(id)arg1 withPlacement:(id)arg2 ;
-(void)trackVideoClickOn:(id)arg1 withPlacement:(id)arg2 videoView:(id)arg3 andLaunchURL:(id)arg4 fromViewController:(id)arg5 ;
-(void)showStoreKitControllerForAd:(id)arg1 fromViewController:(id)arg2 asPoststitial:(BOOL)arg3 ;
-(void)loadNextAdForZoneIdentifier:(id)arg1 andNotify:(id)arg2 ;
-(void)loadNextIncentivizedAdAndNotify:(id)arg1 ;
-(void)loadNextAdOfZone:(id)arg1 andNotify:(id)arg2 ;
-(void)loadNextAdUsingTask:(id)arg1 andNotify:(id)arg2 ;
-(id)retrieveLoadStateForZone:(id)arg1 ;
-(ALPreloadedAdManager *)preloadManager;
-(void)doLoadAdForZone:(id)arg1 delegateProxy:(id)arg2 ;
-(void)dispatchVideoPostbackForAd:(id)arg1 placement:(id)arg2 videoView:(id)arg3 inViewController:(id)arg4 ;
-(void)dispatchPostbackForAd:(id)arg1 withPlacement:(id)arg2 andNotify:(id)arg3 ;
-(void)launchURL:(id)arg1 forAd:(id)arg2 fromViewController:(id)arg3 ;
-(void)launchURL:(id)arg1 forAd:(id)arg2 inAdView:(id)arg3 ;
-(void)showStoreKitControllerForAd:(id)arg1 inAdView:(id)arg2 ;
-(void)expireLoadStateForAd:(id)arg1 ;
-(void)openClickDestinationIfNeededForAd:(id)arg1 webViewURL:(id)arg2 fromAdView:(id)arg3 ;
-(NSMutableDictionary *)adLoadStates;
-(NSObject *)adLoadStatesLock;
-(void)scheduleAdUpdateForZone:(id)arg1 ;
-(NSMutableDictionary *)storeKitViewControllers;
-(ALStoreKitWindow *)storeKitWindow;
-(void)setStoreKitWindow:(ALStoreKitWindow *)arg1 ;
-(void)presentStoreKitForAd:(id)arg1 onViewController:(id)arg2 ;
-(void)setCurrentPausedAdView:(ALAdView *)arg1 ;
-(void)didReturnFromAppStore:(id)arg1 ;
-(ALAdView *)currentPausedAdView;
-(void)setAdLoadStates:(NSMutableDictionary *)arg1 ;
-(void)setStoreKitViewControllers:(NSMutableDictionary *)arg1 ;
-(void)loadNextAd:(id)arg1 andNotify:(id)arg2 ;
-(void)loadNextMediatedAd:(id)arg1 andNotify:(id)arg2 ;
-(id)bidToken;
-(void)loadNextAdForAdToken:(id)arg1 andNotify:(id)arg2 ;
-(void)loadNextAdForZoneIdentifiers:(id)arg1 andNotify:(id)arg2 ;
-(void)loadNextMediatedIncentivizedAdAndNotify:(id)arg1 ;
-(id)dequeueAdForZone:(id)arg1 ;
-(void)trackClickOn:(id)arg1 withPlacement:(id)arg2 inAdView:(id)arg3 andLaunchURL:(id)arg4 ;
-(void)trackForegroundClickOn:(id)arg1 withPlacement:(id)arg2 inAdView:(id)arg3 andLaunchURL:(id)arg4 ;
-(void)removeAdUpdateObserver:(id)arg1 ofSize:(id)arg2 ;
-(void)addAdUpdateObserver:(id)arg1 ofSize:(id)arg2 ;
-(void)updateAdIfNecessaryForZone:(id)arg1 ;
-(void)preloadAdOfSize:(id)arg1 ;
-(BOOL)hasPreloadedAdOfSize:(id)arg1 ;
-(BOOL)hasPreloadedAdForZoneIdentifier:(id)arg1 ;
-(void)preloadAdForZoneIdentifier:(id)arg1 ;
-(void)preloadAdsForZone:(id)arg1 ;
-(void)setAdLoadStatesLock:(NSObject *)arg1 ;
-(ALLogManager *)logger;
-(void)setLogger:(ALLogManager *)arg1 ;
-(void)productViewControllerDidFinish:(id)arg1 ;
@end

