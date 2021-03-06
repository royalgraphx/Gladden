/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MPRewardedVideoCustomEvent.h>
#import <MessagesExtension/MPInterstitialViewControllerDelegate.h>

@class MPMRAIDInterstitialViewController, NSString;

@interface MPMoPubRewardedVideoCustomEvent : MPRewardedVideoCustomEvent <MPInterstitialViewControllerDelegate> {

	BOOL _adAvailable;
	MPMRAIDInterstitialViewController* _interstitial;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) MPMRAIDInterstitialViewController * interstitial;                           //@synthesize interstitial=_interstitial - In the implementation block
@property (assign,nonatomic) BOOL adAvailable;                                                           //@synthesize adAvailable=_adAvailable - In the implementation block
@property (assign,nonatomic,__weak) id<MPPrivateRewardedVideoCustomEventDelegate> delegate; 
-(BOOL)adAvailable;
-(BOOL)hasAdAvailable;
-(void)handleAdPlayedForCustomEventNetwork;
-(void)handleCustomEventInvalidated;
-(void)presentRewardedVideoFromViewController:(id)arg1 ;
-(void)requestRewardedVideoWithCustomEventInfo:(id)arg1 adMarkup:(id)arg2 ;
-(id)adUnitId;
-(void)interstitialWillAppear:(id)arg1 ;
-(void)interstitialDidAppear:(id)arg1 ;
-(void)interstitialWillDisappear:(id)arg1 ;
-(void)interstitialDidDisappear:(id)arg1 ;
-(void)interstitialDidLoadAd:(id)arg1 ;
-(void)interstitialDidFailToLoadAd:(id)arg1 ;
-(void)interstitialDidReceiveTapEvent:(id)arg1 ;
-(void)interstitialWillLeaveApplication:(id)arg1 ;
-(void)interstitialRewardedVideoEnded;
-(void)setAdAvailable:(BOOL)arg1 ;
-(MPMRAIDInterstitialViewController *)interstitial;
-(void)setInterstitial:(MPMRAIDInterstitialViewController *)arg1 ;
@end

