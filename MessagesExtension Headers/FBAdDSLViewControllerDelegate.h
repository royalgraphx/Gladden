/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAdDSLViewControllerDelegate
@required
-(void)dynamicAdViewControllerDidLoad:(id)arg1;
-(void)dynamicAdViewController:(id)arg1 didFailWithError:(id)arg2;
-(void)dynamicAdViewController:(id)arg1 rewardCompletedWithTouch:(id)arg2;
-(void)dynamicAdViewController:(id)arg1 CTATappedWithTouch:(id)arg2 extraData:(id)arg3;
-(void)dynamicAdViewController:(id)arg1 reportImpressionWithAdView:(id)arg2;
-(void)dynamicAdViewController:(id)arg1 reportFlowStartedWithTouch:(id)arg2;
-(void)dynamicAdViewController:(id)arg1 closeButtonTappedWithTouch:(id)arg2;
-(void)dynamicAdViewController:(id)arg1 logEventWithData:(id)arg2;
-(void)dynamicAdViewController:(id)arg1 logErrorWithData:(id)arg2;
-(void)dynamicAdViewController:(id)arg1 debugEventWithData:(id)arg2;
-(void)dynamicAdViewController:(id)arg1 logFunnelEvent:(unsigned long long)arg2 extraData:(id)arg3;
-(void)dynamicAdViewController:(id)arg1 logFunnelEventWithName:(id)arg2;
-(void)assetForURL:(id)arg1 type:(unsigned long long)arg2 completion:(/*^block*/id)arg3;
-(id)sdkVersion;

@end

