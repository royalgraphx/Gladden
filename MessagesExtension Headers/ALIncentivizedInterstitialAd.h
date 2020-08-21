/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/ALAdLoadDelegate.h>

@protocol ALAdDisplayDelegate, ALAdVideoPlaybackDelegate, ALAdLoadDelegate;
@class NSString, ALSdk, ALLogManager, ALInterstitialAd, ALAd, ALTaskValidateReward, ALIncentivizedPromptManager, ALIncentivizedConfirmationManager;

@interface ALIncentivizedInterstitialAd : NSObject <ALAdLoadDelegate> {

	BOOL _wasFullyEngaged;
	id<ALAdDisplayDelegate> _adDisplayDelegate;
	id<ALAdVideoPlaybackDelegate> _adVideoPlaybackDelegate;
	NSString* _zoneIdentifier;
	ALSdk* _sdk;
	ALLogManager* _logger;
	ALInterstitialAd* _interstitialAd;
	ALAd* _lastAd;
	id<ALAdLoadDelegate> _lastLoadDelegate;
	ALTaskValidateReward* _rewardTask;
	NSString* _rewardTaskResult;
	ALIncentivizedPromptManager* _promptManager;
	ALIncentivizedConfirmationManager* _confirmationManager;

}

@property (nonatomic,copy) NSString * zoneIdentifier;                                            //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
@property (nonatomic,retain) ALSdk * sdk;                                                        //@synthesize sdk=_sdk - In the implementation block
@property (assign,nonatomic,__weak) ALLogManager * logger;                                       //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) ALInterstitialAd * interstitialAd;                                  //@synthesize interstitialAd=_interstitialAd - In the implementation block
@property (retain) ALAd * lastAd;                                                                //@synthesize lastAd=_lastAd - In the implementation block
@property (__weak) id<ALAdLoadDelegate> lastLoadDelegate;                                        //@synthesize lastLoadDelegate=_lastLoadDelegate - In the implementation block
@property (nonatomic,retain) ALTaskValidateReward * rewardTask;                                  //@synthesize rewardTask=_rewardTask - In the implementation block
@property (assign) NSString * rewardTaskResult;                                                  //@synthesize rewardTaskResult=_rewardTaskResult - In the implementation block
@property (assign) BOOL wasFullyEngaged;                                                         //@synthesize wasFullyEngaged=_wasFullyEngaged - In the implementation block
@property (retain) ALIncentivizedPromptManager * promptManager;                                  //@synthesize promptManager=_promptManager - In the implementation block
@property (retain) ALIncentivizedConfirmationManager * confirmationManager;                      //@synthesize confirmationManager=_confirmationManager - In the implementation block
@property (nonatomic,retain) id<ALAdDisplayDelegate> adDisplayDelegate;                          //@synthesize adDisplayDelegate=_adDisplayDelegate - In the implementation block
@property (nonatomic,retain) id<ALAdVideoPlaybackDelegate> adVideoPlaybackDelegate;              //@synthesize adVideoPlaybackDelegate=_adVideoPlaybackDelegate - In the implementation block
@property (getter=isReadyForDisplay,readonly) BOOL readyForDisplay; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)preloadAndNotify:(id)arg1 ;
+(void)showAndNotify:(id)arg1 ;
+(void)showOver:(id)arg1 andNotify:(id)arg2 ;
+(void)showOver:(id)arg1 placement:(id)arg2 andNotify:(id)arg3 ;
+(void)showOverPlacement:(id)arg1 ;
+(void)showOverPlacement:(id)arg1 andNotify:(id)arg2 ;
+(void)setUserIdentifier:(id)arg1 ;
+(id)userIdentifier;
+(void)show;
+(id)shared;
+(BOOL)isReadyForDisplay;
-(void)setSdk:(ALSdk *)arg1 ;
-(id<ALAdDisplayDelegate>)adDisplayDelegate;
-(ALSdk *)sdk;
-(id<ALAdVideoPlaybackDelegate>)adVideoPlaybackDelegate;
-(id)initWithSdk:(id)arg1 ;
-(void)setAdDisplayDelegate:(id<ALAdDisplayDelegate>)arg1 ;
-(void)setAdVideoPlaybackDelegate:(id<ALAdVideoPlaybackDelegate>)arg1 ;
-(id)initWithZoneIdentifier:(id)arg1 sdk:(id)arg2 ;
-(void)preloadAndNotify:(id)arg1 ;
-(void)showAndNotify:(id)arg1 ;
-(void)showOver:(id)arg1 andNotify:(id)arg2 ;
-(void)showOver:(id)arg1 placement:(id)arg2 andNotify:(id)arg3 ;
-(ALAd *)lastAd;
-(void)adService:(id)arg1 didLoadAd:(id)arg2 ;
-(void)setLastLoadDelegate:(id<ALAdLoadDelegate>)arg1 ;
-(void)showOver:(id)arg1 placement:(id)arg2 renderAd:(id)arg3 andNotify:(id)arg4 ;
-(id<ALAdLoadDelegate>)lastLoadDelegate;
-(void)adService:(id)arg1 didFailToLoadAdWithError:(int)arg2 ;
-(void)failDisplay:(id)arg1 inWindow:(id)arg2 ;
-(void)setPromptManager:(ALIncentivizedPromptManager *)arg1 ;
-(ALIncentivizedPromptManager *)promptManager;
-(void)attemptShowOver:(id)arg1 placement:(id)arg2 renderAd:(id)arg3 andNotify:(id)arg4 ;
-(void)clearRewardState;
-(void)launchRewardTaskForAd:(id)arg1 delegate:(id)arg2 ;
-(void)setRewardTask:(ALTaskValidateReward *)arg1 ;
-(ALTaskValidateReward *)rewardTask;
-(void)setRewardTaskResult:(NSString *)arg1 ;
-(void)setWasFullyEngaged:(BOOL)arg1 ;
-(void)setLastAd:(ALAd *)arg1 ;
-(id)initWithZoneIdentifier:(id)arg1 ;
-(id)initIncentivizedInterstitialWithSdk:(id)arg1 ;
-(void)showOver:(id)arg1 renderAd:(id)arg2 andNotify:(id)arg3 ;
-(NSString *)rewardTaskResult;
-(BOOL)wasFullyEngaged;
-(ALIncentivizedConfirmationManager *)confirmationManager;
-(void)setConfirmationManager:(ALIncentivizedConfirmationManager *)arg1 ;
-(ALLogManager *)logger;
-(void)show;
-(void)dismiss;
-(void)setZoneIdentifier:(NSString *)arg1 ;
-(NSString *)zoneIdentifier;
-(void)setLogger:(ALLogManager *)arg1 ;
-(BOOL)isReadyForDisplay;
-(void)setInterstitialAd:(ALInterstitialAd *)arg1 ;
-(ALInterstitialAd *)interstitialAd;
@end

