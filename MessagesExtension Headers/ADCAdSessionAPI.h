/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessagesExtension/MessagesExtension-Structs.h>
@class NSString, NSDictionary, ADCMessage, ADCFullscreenPresenter;

@interface ADCAdSessionAPI : NSObject {

	NSString* _currentCategory;
	unsigned long long _currentOptions;
	NSDictionary* _delayedFinishFullscreenAdDict;
	ADCMessage* _messageContextForBackgrounding;
	ADCFullscreenPresenter* _presenter;

}

@property (nonatomic,retain) ADCFullscreenPresenter * presenter;              //@synthesize presenter=_presenter - In the implementation block
-(void)adSession:(id)arg1 onViewabilityChange:(ADCViewability)arg2 isFullscreen:(BOOL)arg3 ;
-(void)onSessionError:(id)arg1 ;
-(void)registerHandlers;
-(void)adRequestFailedForSession:(id)arg1 ;
-(void)onRequestClose:(id)arg1 ;
-(void)adRequestFailedForSession:(id)arg1 withError:(id)arg2 ;
-(void)presentFullScreenView:(id)arg1 withSession:(id)arg2 module:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)finishFullscreenAd:(SCD_Struct_AD13)arg1 ;
-(void)stopRingerSwitchDetection;
-(void)dismissFullscreenController:(id)arg1 withSession:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)onRequestClose:(id)arg1 unload:(BOOL)arg2 ;
-(void)startFullscreenAd:(SCD_Struct_AD13)arg1 ;
-(void)interstitialAvailable:(SCD_Struct_AD13)arg1 ;
-(void)interstitialUnavailable:(SCD_Struct_AD13)arg1 ;
-(void)adViewAvailable:(SCD_Struct_AD13)arg1 ;
-(void)adViewUnavailable:(SCD_Struct_AD13)arg1 ;
-(void)nativeAdViewAvailable:(SCD_Struct_AD13)arg1 ;
-(void)nativeAdViewUnavailable:(SCD_Struct_AD13)arg1 ;
-(void)destroy:(SCD_Struct_AD13)arg1 ;
-(void)expiring:(SCD_Struct_AD13)arg1 ;
-(void)iapEvent:(SCD_Struct_AD13)arg1 ;
-(void)audioStarted:(SCD_Struct_AD13)arg1 ;
-(void)audioStopped:(SCD_Struct_AD13)arg1 ;
-(void)hasAudio:(SCD_Struct_AD13)arg1 ;
-(void)nativeAdMuted:(SCD_Struct_AD13)arg1 ;
-(void)destroyNativeAdView:(SCD_Struct_AD13)arg1 ;
-(void)nativeAdStarted:(SCD_Struct_AD13)arg1 ;
-(void)nativeAdFinished:(SCD_Struct_AD13)arg1 ;
-(void)nativeAdEngagement:(SCD_Struct_AD13)arg1 ;
-(void)expanded:(SCD_Struct_AD13)arg1 ;
-(void)leftApplication:(SCD_Struct_AD13)arg1 ;
-(void)click:(SCD_Struct_AD13)arg1 ;
-(void)setFullscreenModuleID:(SCD_Struct_AD13)arg1 ;
-(void)onSilentSwitchChanged:(id)arg1 silent:(BOOL)arg2 ;
-(void)onRequestExpand:(SCD_Struct_AD13)arg1 ;
-(void)launchInterstitialForSession:(id)arg1 ;
-(void)finishFullscreenAdDelayed;
-(void)onSessionRequest:(id)arg1 ;
-(void)onFullscreenAdStarted:(id)arg1 size:(CGSize)arg2 ;
-(void)startRingerSwitchDetection:(id)arg1 ;
-(id)init;
-(ADCFullscreenPresenter *)presenter;
-(void)setSupportedOrientations:(SCD_Struct_AD13)arg1 ;
-(void)setPresenter:(ADCFullscreenPresenter *)arg1 ;
@end

