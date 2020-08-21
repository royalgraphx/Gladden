/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ALDelegateCallbackInvoker : NSObject
+(void)invokeAdDisplayDelegate:(id)arg1 ad:(id)arg2 wasDisplayedIn:(id)arg3 withSDK:(id)arg4 ;
+(void)invokeAdDisplayDelegate:(id)arg1 ad:(id)arg2 wasHiddenIn:(id)arg3 withSDK:(id)arg4 ;
+(void)invokeAdDisplayDelegate:(id)arg1 ad:(id)arg2 wasClickedIn:(id)arg3 withSDK:(id)arg4 ;
+(void)invokeAdVideoPlaybackDelegate:(id)arg1 videoPlaybackBeganInAd:(id)arg2 withSDK:(id)arg3 ;
+(void)invokeAdVideoPlaybackDelegate:(id)arg1 videoPlaybackEndedInAd:(id)arg2 atPlaybackPercent:(id)arg3 fullyWatched:(BOOL)arg4 withSDK:(id)arg5 ;
+(void)invokeAdRewardDelegate:(id)arg1 userDeclinedToViewAd:(id)arg2 sdk:(id)arg3 ;
+(void)invokeAdRewardDelegate:(id)arg1 rewardValidationRequestForAd:(id)arg2 didFailWithError:(long long)arg3 sdk:(id)arg4 ;
+(void)invokeAdRewardDelegate:(id)arg1 rewardValidationRequestForAd:(id)arg2 didSucceedWithResponse:(id)arg3 sdk:(id)arg4 ;
+(void)invokeAdRewardDelegate:(id)arg1 rewardValidationRequestForAd:(id)arg2 didExceedQuotaWithResponse:(id)arg3 sdk:(id)arg4 ;
+(void)invokeAdRewardDelegate:(id)arg1 rewardValidationRequestForAd:(id)arg2 wasRejectedWithResponse:(id)arg3 sdk:(id)arg4 ;
+(void)invokeAdViewEventDelegate:(id)arg1 ad:(id)arg2 willLeaveApplicationForAdView:(id)arg3 withSDK:(id)arg4 ;
+(void)invokeAdViewEventDelegate:(id)arg1 ad:(id)arg2 didReturnToApplicationForAdView:(id)arg3 withSDK:(id)arg4 ;
+(void)invokeAdViewEventDelegate:(id)arg1 ad:(id)arg2 didPresentFullscreenForAdView:(id)arg3 withSDK:(id)arg4 ;
+(void)invokeAdViewEventDelegate:(id)arg1 ad:(id)arg2 willDismissFullscreenForAdView:(id)arg3 withSDK:(id)arg4 ;
+(void)invokeAdViewEventDelegate:(id)arg1 ad:(id)arg2 didDismissFullscreenForAdView:(id)arg3 withSDK:(id)arg4 ;
+(void)invokeAdViewEventDelegate:(id)arg1 ad:(id)arg2 didFailToDisplayInAdView:(id)arg3 withError:(long long)arg4 sdk:(id)arg5 ;
@end
