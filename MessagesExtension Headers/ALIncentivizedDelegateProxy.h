/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/ALAdDisplayDelegate.h>
#import <MessagesExtension/ALAdVideoPlaybackDelegate.h>
#import <MessagesExtension/ALAdRewardDelegate.h>

@protocol ALAdDisplayDelegate, ALAdVideoPlaybackDelegate, ALAdRewardDelegate;
@class ALSdk, ALIncentivizedInterstitialAd, NSString;

@interface ALIncentivizedDelegateProxy : NSObject <ALAdDisplayDelegate, ALAdVideoPlaybackDelegate, ALAdRewardDelegate> {

	ALSdk* _sdk;
	ALIncentivizedInterstitialAd* _incentController;
	id<ALAdDisplayDelegate> _displayDelegate;
	id<ALAdVideoPlaybackDelegate> _videoDelegate;
	id<ALAdRewardDelegate> _rewardDelegate;

}

@property (nonatomic,retain) ALSdk * sdk;                                                         //@synthesize sdk=_sdk - In the implementation block
@property (assign,nonatomic,__weak) ALIncentivizedInterstitialAd * incentController;              //@synthesize incentController=_incentController - In the implementation block
@property (nonatomic,retain) id<ALAdDisplayDelegate> displayDelegate;                             //@synthesize displayDelegate=_displayDelegate - In the implementation block
@property (nonatomic,retain) id<ALAdVideoPlaybackDelegate> videoDelegate;                         //@synthesize videoDelegate=_videoDelegate - In the implementation block
@property (nonatomic,retain) id<ALAdRewardDelegate> rewardDelegate;                               //@synthesize rewardDelegate=_rewardDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSdk:(ALSdk *)arg1 ;
-(ALSdk *)sdk;
-(void)ad:(id)arg1 wasDisplayedIn:(id)arg2 ;
-(void)ad:(id)arg1 wasHiddenIn:(id)arg2 ;
-(void)ad:(id)arg1 wasClickedIn:(id)arg2 ;
-(id)initWithIncentivizedInterstitialAd:(id)arg1 displayDelegate:(id)arg2 videoPlaybackDelegate:(id)arg3 rewardDelegate:(id)arg4 sdk:(id)arg5 ;
-(void)setIncentController:(ALIncentivizedInterstitialAd *)arg1 ;
-(void)setRewardDelegate:(id<ALAdRewardDelegate>)arg1 ;
-(ALIncentivizedInterstitialAd *)incentController;
-(void)handleAdHiddenForDirectAd:(id)arg1 inView:(id)arg2 ;
-(void)handleAdHiddenForMediatedAd:(id)arg1 inView:(id)arg2 ;
-(void)showPostPopupIfNeededWithResult:(id)arg1 ;
-(id<ALAdRewardDelegate>)rewardDelegate;
-(void)videoPlaybackBeganInAd:(id)arg1 ;
-(void)videoPlaybackEndedInAd:(id)arg1 atPlaybackPercent:(id)arg2 fullyWatched:(BOOL)arg3 ;
-(void)rewardValidationRequestForAd:(id)arg1 didSucceedWithResponse:(id)arg2 ;
-(void)rewardValidationRequestForAd:(id)arg1 didExceedQuotaWithResponse:(id)arg2 ;
-(void)rewardValidationRequestForAd:(id)arg1 wasRejectedWithResponse:(id)arg2 ;
-(void)rewardValidationRequestForAd:(id)arg1 didFailWithError:(long long)arg2 ;
-(void)userDeclinedToViewAd:(id)arg1 ;
-(void)setDisplayDelegate:(id<ALAdDisplayDelegate>)arg1 ;
-(id<ALAdDisplayDelegate>)displayDelegate;
-(id<ALAdVideoPlaybackDelegate>)videoDelegate;
-(void)setVideoDelegate:(id<ALAdVideoPlaybackDelegate>)arg1 ;
@end

