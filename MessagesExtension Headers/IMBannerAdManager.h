/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <MessagesExtension/IMAdManager.h>
#import <MessagesExtension/ASBannerAdProviderDelegate.h>
#import <MessagesExtension/ASBannerMediationCallbackHandler.h>

@protocol ASBannerAdManagerDelegate;
@class NSTimer, NSString;

@interface IMBannerAdManager : IMAdManager <ASBannerAdProviderDelegate, ASBannerMediationCallbackHandler> {

	id<ASBannerAdManagerDelegate> _delegate;
	NSTimer* _refreshTimer;
	id _ad;

}

@property (assign,nonatomic,__weak) id<ASBannerAdManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSTimer * refreshTimer;                                     //@synthesize refreshTimer=_refreshTimer - In the implementation block
@property (nonatomic,retain) id ad;                                                      //@synthesize ad=_ad - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)getAdReqParams;
-(void)reportErrorToDelegate:(id)arg1 ;
-(void)notifyOfLoadMetaWith:(id)arg1 ;
-(void)checkToProcessWaterfallAds;
-(void)notifyAdReceived;
-(void)processAds:(id)arg1 ;
-(id)createProviderForAdUnitWithPackage:(id)arg1 ;
-(Class)getRequiredProviderClass;
-(void)startRequestWithProvider:(id)arg1 ;
-(void)handleMuttTimeout;
-(void)onShowTimeout:(id)arg1 ;
-(id)getAdSizeString;
-(void)handleImpressionFiredForProvider:(id)arg1 ;
-(void)brodcastWillShowCallbackForAd:(id)arg1 ;
-(void)killRefreshTimer;
-(void)notifyOfPreload;
-(void)notifyOfLoad;
-(void)adSuccessfulCleanupForBannerProvider:(id)arg1 ;
-(double)determineRefreshInterval;
-(void)refreshTimerDidFire;
-(void)handleProviderDidLoadForProvider:(id)arg1 andAd:(id)arg2 ;
-(void)adProvider:(id)arg1 didFailWithError:(id)arg2 ;
-(void)adProvider:(id)arg1 didLoadAd:(id)arg2 ;
-(void)adProviderDidFireAdImpression:(id)arg1 ;
-(void)adProvider:(id)arg1 hasInteractionWithParams:(id)arg2 ;
-(void)adProviderWasSkipped:(id)arg1 ;
-(void)adProviderMediaDidComplete:(id)arg1 ;
-(void)adProviderWillLeaveApplication:(id)arg1 ;
-(void)adProviderDidReturnToApplication:(id)arg1 ;
-(void)adProvider:(id)arg1 didRewardWithVirtualCurrency:(id)arg2 ;
-(id)viewControllerForBannerProvider:(id)arg1 ;
-(id)viewForBannerProvider:(id)arg1 ;
-(void)bannerProviderWillPresentModal:(id)arg1 ;
-(void)bannerProviderDidPresentModal:(id)arg1 ;
-(void)bannerProviderWillDismissModal:(id)arg1 ;
-(void)bannerProviderDidDismissModal:(id)arg1 ;
-(void)bannerProviderWillScheduleRefresh:(id)arg1 ;
-(void)bannerProvider:(id)arg1 willShowAd:(id)arg2 ;
-(void)mediatedAd:(id)arg1 didFailWithError:(id)arg2 ;
-(void)mediatedAd:(id)arg1 didLoad:(id)arg2 ;
-(void)mediatedAdDidFireImpression:(id)arg1 ;
-(void)mediatedAd:(id)arg1 interactedWithParams:(id)arg2 ;
-(void)mediatedAdWasSkipped:(id)arg1 ;
-(void)mediatedAdMediaDidComplete:(id)arg1 ;
-(void)mediatedAdWillLeaveApplication:(id)arg1 ;
-(void)mediatedAd:(id)arg1 didRewardWithVirtualCurrency:(id)arg2 ;
-(void)mediatedAdDidReturnToApplication:(id)arg1 ;
-(void)mediatedBannerAdWillPresentModal;
-(void)mediatedBannerAdDidPresentModal;
-(void)mediatedBannerAdWillDismissModal;
-(void)mediatedBannerAdDidDismissModal;
-(void)mediatedBannerAdWillScheduleRefresh;
-(id)viewForMediatedBannerAd;
-(id)viewControllerForMediatedBannerAd;
-(void)mediatedBannerAdWillShowAd:(id)arg1 ;
-(CGSize)requestedSizeForMediatedBannerAd;
-(id)initWithAdSettings:(id)arg1 andDelegate:(id)arg2 ;
-(void)enableRefresh:(BOOL)arg1 ;
-(void)triggerRefresh;
-(void)dealloc;
-(id<ASBannerAdManagerDelegate>)delegate;
-(void)setDelegate:(id<ASBannerAdManagerDelegate>)arg1 ;
-(void)cancel;
-(void)show;
-(id)ad;
-(void)scheduleRefresh;
-(NSTimer *)refreshTimer;
-(void)setAd:(id)arg1 ;
-(void)setRefreshTimer:(NSTimer *)arg1 ;
@end
