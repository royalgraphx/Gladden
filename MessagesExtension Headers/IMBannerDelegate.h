/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMBannerDelegate <NSObject>
@optional
-(void)banner:(id)arg1 didFailToLoadWithError:(id)arg2;
-(void)bannerDidFinishLoading:(id)arg1;
-(void)banner:(id)arg1 didInteractWithParams:(id)arg2;
-(void)userWillLeaveApplicationFromBanner:(id)arg1;
-(void)bannerWillPresentScreen:(id)arg1;
-(void)bannerDidPresentScreen:(id)arg1;
-(void)bannerWillDismissScreen:(id)arg1;
-(void)bannerDidDismissScreen:(id)arg1;
-(void)banner:(id)arg1 rewardActionCompletedWithRewards:(id)arg2;

@end

