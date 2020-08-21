/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPRewardedVideoAdManagerDelegate <NSObject>
@required
-(void)rewardedVideoDidLoadForAdManager:(id)arg1;
-(void)rewardedVideoDidFailToPlayForAdManager:(id)arg1 error:(id)arg2;
-(void)rewardedVideoDidFailToLoadForAdManager:(id)arg1 error:(id)arg2;
-(void)rewardedVideoDidExpireForAdManager:(id)arg1;
-(void)rewardedVideoWillAppearForAdManager:(id)arg1;
-(void)rewardedVideoDidAppearForAdManager:(id)arg1;
-(void)rewardedVideoWillDisappearForAdManager:(id)arg1;
-(void)rewardedVideoDidDisappearForAdManager:(id)arg1;
-(void)rewardedVideoDidReceiveTapEventForAdManager:(id)arg1;
-(void)rewardedVideoAdManager:(id)arg1 didReceiveImpressionEventWithImpressionData:(id)arg2;
-(void)rewardedVideoWillLeaveApplicationForAdManager:(id)arg1;
-(void)rewardedVideoShouldRewardUserForAdManager:(id)arg1 reward:(id)arg2;

@end

