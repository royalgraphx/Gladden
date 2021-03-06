/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MPRewardedVideoCustomEvent.h>
#import <MessagesExtension/ALAdLoadDelegate.h>
#import <MessagesExtension/ALAdDisplayDelegate.h>
#import <MessagesExtension/ALAdVideoPlaybackDelegate.h>
#import <MessagesExtension/ALAdRewardDelegate.h>

@class ALSdk, ALIncentivizedInterstitialAd, MPRewardedVideoReward, ALAd, NSString;

@interface AppLovinRewardedVideoCustomEvent : MPRewardedVideoCustomEvent <ALAdLoadDelegate, ALAdDisplayDelegate, ALAdVideoPlaybackDelegate, ALAdRewardDelegate> {

	BOOL _fullyWatched;
	BOOL _tokenEvent;
	ALSdk* _sdk;
	ALIncentivizedInterstitialAd* _incent;
	MPRewardedVideoReward* _reward;
	ALAd* _tokenAd;
	NSString* _zoneIdentifier;

}

@property (nonatomic,retain) ALSdk * sdk;                                        //@synthesize sdk=_sdk - In the implementation block
@property (nonatomic,retain) ALIncentivizedInterstitialAd * incent;              //@synthesize incent=_incent - In the implementation block
@property (assign,nonatomic) BOOL fullyWatched;                                  //@synthesize fullyWatched=_fullyWatched - In the implementation block
@property (nonatomic,retain) MPRewardedVideoReward * reward;                     //@synthesize reward=_reward - In the implementation block
@property (assign,getter=isTokenEvent,nonatomic) BOOL tokenEvent;                //@synthesize tokenEvent=_tokenEvent - In the implementation block
@property (nonatomic,retain) ALAd * tokenAd;                                     //@synthesize tokenAd=_tokenAd - In the implementation block
@property (nonatomic,copy) NSString * zoneIdentifier;                            //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)incentivizedInterstitialAdForZoneIdentifier:(id)arg1 customEvent:(id)arg2 sdk:(id)arg3 ;
+(void)initialize;
-(void)setSdk:(ALSdk *)arg1 ;
-(ALSdk *)sdk;
-(void)ad:(id)arg1 wasDisplayedIn:(id)arg2 ;
-(void)ad:(id)arg1 wasHiddenIn:(id)arg2 ;
-(void)ad:(id)arg1 wasClickedIn:(id)arg2 ;
-(void)adService:(id)arg1 didLoadAd:(id)arg2 ;
-(void)adService:(id)arg1 didFailToLoadAdWithError:(int)arg2 ;
-(void)videoPlaybackBeganInAd:(id)arg1 ;
-(void)videoPlaybackEndedInAd:(id)arg1 atPlaybackPercent:(id)arg2 fullyWatched:(BOOL)arg3 ;
-(void)rewardValidationRequestForAd:(id)arg1 didSucceedWithResponse:(id)arg2 ;
-(void)rewardValidationRequestForAd:(id)arg1 didExceedQuotaWithResponse:(id)arg2 ;
-(void)rewardValidationRequestForAd:(id)arg1 wasRejectedWithResponse:(id)arg2 ;
-(void)rewardValidationRequestForAd:(id)arg1 didFailWithError:(long long)arg2 ;
-(MPRewardedVideoReward *)reward;
-(void)setReward:(MPRewardedVideoReward *)arg1 ;
-(BOOL)hasAdAvailable;
-(void)handleAdPlayedForCustomEventNetwork;
-(void)handleCustomEventInvalidated;
-(void)presentRewardedVideoFromViewController:(id)arg1 ;
-(void)requestRewardedVideoWithCustomEventInfo:(id)arg1 adMarkup:(id)arg2 ;
-(id)getAdNetworkId;
-(id)SDKFromCustomEventInfo:(id)arg1 ;
-(void)setIncent:(ALIncentivizedInterstitialAd *)arg1 ;
-(void)setTokenEvent:(BOOL)arg1 ;
-(ALIncentivizedInterstitialAd *)incent;
-(BOOL)isTokenEvent;
-(ALAd *)tokenAd;
-(void)setFullyWatched:(BOOL)arg1 ;
-(void)setTokenAd:(ALAd *)arg1 ;
-(int)toMoPubErrorCode:(int)arg1 ;
-(BOOL)fullyWatched;
-(void)requestRewardedVideoWithCustomEventInfo:(id)arg1 ;
-(void)setZoneIdentifier:(NSString *)arg1 ;
-(NSString *)zoneIdentifier;
@end

