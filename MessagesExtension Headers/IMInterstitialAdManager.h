/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/IMAdManager.h>
#import <MessagesExtension/ASInterstitialAdProviderDelegate.h>
#import <MessagesExtension/ASUnifiedAuctionDelegate.h>
#import <MessagesExtension/ASInterstitialMediationCallbackHandler.h>

@protocol ASInterstitialAdManagerDelegate;
@class IMAdSetModel, UIViewController, ASCloseButton, NSTimer, NSString;

@interface IMInterstitialAdManager : IMAdManager <ASInterstitialAdProviderDelegate, ASUnifiedAuctionDelegate, ASInterstitialMediationCallbackHandler> {

	BOOL _allowDismissCallbacks;
	id<ASInterstitialAdManagerDelegate> _delegate;
	IMAdSetModel* _dynamicSet;
	UIViewController* _baseVC;
	ASCloseButton* _closeBtn;
	NSTimer* _unifiedAuctionTimer;

}

@property (nonatomic,retain) IMAdSetModel * dynamicSet;                                        //@synthesize dynamicSet=_dynamicSet - In the implementation block
@property (nonatomic,retain) UIViewController * baseVC;                                        //@synthesize baseVC=_baseVC - In the implementation block
@property (nonatomic,retain) ASCloseButton * closeBtn;                                         //@synthesize closeBtn=_closeBtn - In the implementation block
@property (assign,nonatomic) BOOL allowDismissCallbacks;                                       //@synthesize allowDismissCallbacks=_allowDismissCallbacks - In the implementation block
@property (nonatomic,retain) NSTimer * unifiedAuctionTimer;                                    //@synthesize unifiedAuctionTimer=_unifiedAuctionTimer - In the implementation block
@property (assign,nonatomic,__weak) id<ASInterstitialAdManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reportErrorToDelegate:(id)arg1 ;
-(void)notifyOfLoadMetaWith:(id)arg1 ;
-(void)notifyAdReceived;
-(void)handleDynamicCaseWithSet:(id)arg1 ;
-(void)processAds:(id)arg1 ;
-(id)createProviderForAdUnitWithPackage:(id)arg1 ;
-(Class)getRequiredProviderClass;
-(void)startRequestWithProvider:(id)arg1 ;
-(void)onShowTimeout:(id)arg1 ;
-(void)onRenderTimeout:(id)arg1 ;
-(void)preloadAd;
-(void)loadAd;
-(void)handleImpressionFiredForProvider:(id)arg1 ;
-(void)notifyOfPreload;
-(void)notifyOfLoad;
-(void)adProvider:(id)arg1 didFailWithError:(id)arg2 ;
-(void)adProvider:(id)arg1 didLoadAd:(id)arg2 ;
-(void)adProviderDidFireAdImpression:(id)arg1 ;
-(void)adProvider:(id)arg1 hasInteractionWithParams:(id)arg2 ;
-(void)adProviderWasSkipped:(id)arg1 ;
-(void)adProviderMediaDidComplete:(id)arg1 ;
-(void)adProviderWillLeaveApplication:(id)arg1 ;
-(void)adProviderDidReturnToApplication:(id)arg1 ;
-(void)adProvider:(id)arg1 didRewardWithVirtualCurrency:(id)arg2 ;
-(void)mediatedAd:(id)arg1 didFailWithError:(id)arg2 ;
-(void)mediatedAd:(id)arg1 didLoad:(id)arg2 ;
-(void)mediatedAdDidFireImpression:(id)arg1 ;
-(void)mediatedAd:(id)arg1 interactedWithParams:(id)arg2 ;
-(void)mediatedAdWasSkipped:(id)arg1 ;
-(void)mediatedAdMediaDidComplete:(id)arg1 ;
-(void)mediatedAdWillLeaveApplication:(id)arg1 ;
-(void)mediatedAd:(id)arg1 didRewardWithVirtualCurrency:(id)arg2 ;
-(void)mediatedAdDidReturnToApplication:(id)arg1 ;
-(id)initWithAdSettings:(id)arg1 andDelegate:(id)arg2 ;
-(void)setDynamicSet:(IMAdSetModel *)arg1 ;
-(void)scheduleUnifiedAuctionTimer;
-(void)presentInterstitial;
-(void)dismissBaseVC;
-(void)setAllowDismissCallbacks:(BOOL)arg1 ;
-(NSTimer *)unifiedAuctionTimer;
-(void)setUnifiedAuctionTimer:(NSTimer *)arg1 ;
-(void)killUnifiedAuctionTimeout;
-(void)onUnifiedAuctionTimeout:(id)arg1 ;
-(IMAdSetModel *)dynamicSet;
-(ASCloseButton *)closeBtn;
-(void)setCloseBtn:(ASCloseButton *)arg1 ;
-(UIViewController *)baseVC;
-(void)setBaseVC:(UIViewController *)arg1 ;
-(void)addCloseButton;
-(void)removeCloseButton;
-(void)presentInterstitialFromViewController:(id)arg1 ;
-(void)presentBaseVCWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)processUnifiedResponse:(id)arg1 ;
-(void)cancelProviderAndAttemptFailOverWithError:(id)arg1 ;
-(void)handleProviderDidLoadForProvider:(id)arg1 ;
-(BOOL)allowDismissCallbacks;
-(void)interstitialAdProviderWillFireFailShow:(id)arg1 ;
-(void)interstitialAdProviderWillAppear:(id)arg1 ;
-(void)interstitialAdProviderDidAppear:(id)arg1 ;
-(void)interstitialAdProviderWillDisappear:(id)arg1 ;
-(void)interstitialAdProviderDidDisappear:(id)arg1 ;
-(void)interstitialAdProvider:(id)arg1 didFailToPresentWithStatus:(id)arg2 ;
-(void)interstitialAdProviderDidPassBitmapCheck:(id)arg1 ;
-(void)interstitialAdProviderDidFailBitmapCheck:(id)arg1 ;
-(void)interstitialAdProviderWasClosed:(id)arg1 ;
-(void)auctionDidCompleteWithResponse:(id)arg1 andError:(id)arg2 ;
-(void)mediatedInterstitialAdWillFireFailShow:(id)arg1 ;
-(void)mediatedInterstitialAdWillAppear:(id)arg1 ;
-(void)mediatedInterstitialAdDidAppear:(id)arg1 ;
-(void)mediatedInterstitialAdWillDisappear:(id)arg1 ;
-(void)mediatedInterstitialAdDidDisappear:(id)arg1 ;
-(void)mediatedInterstitialAdDidFailToPresentWithStatus:(id)arg1 ;
-(id)viewControllerForMediatedInterstitialAd;
-(void)mediatedInterstitialAdWasClosed:(id)arg1 ;
-(void)interstitialAdProvider:(id)arg1 didPreloadAd:(id)arg2 ;
-(void)dealloc;
-(id<ASInterstitialAdManagerDelegate>)delegate;
-(void)setDelegate:(id<ASInterstitialAdManagerDelegate>)arg1 ;
-(void)cancel;
-(void)show;
-(void)onClose;
@end

