/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MPInterstitialCustomEvent.h>
#import <MessagesExtension/MPInterstitialViewControllerDelegate.h>

@protocol MPPrivateInterstitialCustomEventDelegate;
@class MPHTMLInterstitialViewController, NSString;

@interface MPHTMLInterstitialCustomEvent : MPInterstitialCustomEvent <MPInterstitialViewControllerDelegate> {

	BOOL _trackedImpression;
	id<MPPrivateInterstitialCustomEventDelegate> delegate;
	MPHTMLInterstitialViewController* _interstitial;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) MPHTMLInterstitialViewController * interstitial;                           //@synthesize interstitial=_interstitial - In the implementation block
@property (assign,nonatomic) BOOL trackedImpression;                                                    //@synthesize trackedImpression=_trackedImpression - In the implementation block
@property (assign,nonatomic,__weak) id<MPPrivateInterstitialCustomEventDelegate> delegate; 
-(void)showInterstitialFromRootViewController:(id)arg1 ;
-(void)requestInterstitialWithCustomEventInfo:(id)arg1 adMarkup:(id)arg2 ;
-(BOOL)enableAutomaticImpressionAndClickTracking;
-(id)adUnitId;
-(void)interstitialWillAppear:(id)arg1 ;
-(void)interstitialDidAppear:(id)arg1 ;
-(void)interstitialWillDisappear:(id)arg1 ;
-(void)interstitialDidDisappear:(id)arg1 ;
-(void)interstitialDidLoadAd:(id)arg1 ;
-(void)interstitialDidFailToLoadAd:(id)arg1 ;
-(void)interstitialDidReceiveTapEvent:(id)arg1 ;
-(void)interstitialWillLeaveApplication:(id)arg1 ;
-(BOOL)trackedImpression;
-(void)setTrackedImpression:(BOOL)arg1 ;
-(id<MPPrivateInterstitialCustomEventDelegate>)delegate;
-(void)setDelegate:(id<MPPrivateInterstitialCustomEventDelegate>)arg1 ;
-(MPHTMLInterstitialViewController *)interstitial;
-(void)setInterstitial:(MPHTMLInterstitialViewController *)arg1 ;
@end

