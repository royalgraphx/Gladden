/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MPInterstitialCustomEvent.h>
#import <MessagesExtension/ALAdLoadDelegate.h>
#import <MessagesExtension/ALAdDisplayDelegate.h>
#import <MessagesExtension/ALAdVideoPlaybackDelegate.h>

@class ALSdk, ALInterstitialAd, NSString, ALAd;

@interface AppLovinInterstitialCustomEvent : MPInterstitialCustomEvent <ALAdLoadDelegate, ALAdDisplayDelegate, ALAdVideoPlaybackDelegate> {

	BOOL _tokenEvent;
	ALSdk* _sdk;
	ALInterstitialAd* _interstitialAd;
	NSString* _zoneIdentifier;
	ALAd* _tokenAd;

}

@property (nonatomic,retain) ALSdk * sdk;                                      //@synthesize sdk=_sdk - In the implementation block
@property (nonatomic,retain) ALInterstitialAd * interstitialAd;                //@synthesize interstitialAd=_interstitialAd - In the implementation block
@property (nonatomic,copy) NSString * zoneIdentifier;                          //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
@property (assign,getter=isTokenEvent,nonatomic) BOOL tokenEvent;              //@synthesize tokenEvent=_tokenEvent - In the implementation block
@property (nonatomic,retain) ALAd * tokenAd;                                   //@synthesize tokenAd=_tokenAd - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dequeueAdForZoneIdentifier:(id)arg1 ;
+(void)enqueueAd:(id)arg1 forZoneIdentifier:(id)arg2 ;
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
-(void)showInterstitialFromRootViewController:(id)arg1 ;
-(void)requestInterstitialWithCustomEventInfo:(id)arg1 adMarkup:(id)arg2 ;
-(BOOL)enableAutomaticImpressionAndClickTracking;
-(id)getAdNetworkId;
-(void)requestInterstitialWithCustomEventInfo:(id)arg1 ;
-(id)SDKFromCustomEventInfo:(id)arg1 ;
-(void)setTokenEvent:(BOOL)arg1 ;
-(BOOL)isTokenEvent;
-(ALAd *)tokenAd;
-(void)setTokenAd:(ALAd *)arg1 ;
-(int)toMoPubErrorCode:(int)arg1 ;
-(void)setZoneIdentifier:(NSString *)arg1 ;
-(NSString *)zoneIdentifier;
-(void)setInterstitialAd:(ALInterstitialAd *)arg1 ;
-(ALInterstitialAd *)interstitialAd;
@end

