/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMNativeLandingPageProcessorDelegate
@optional
-(void)imNativeLandingPageProcessorWillPresentEmbeddedBrowser:(id)arg1;
-(void)imNativeLandingPageProcessorDidPresentEmbeddedBrowser:(id)arg1;
-(void)imNativeLandingPageProcessorWillDismissEmbeddedBrowser:(id)arg1;
-(void)imNativeLandingPageProcessorDidDismissEmbeddedBrowser:(id)arg1;

@required
-(void)imNativeLandingPageProcessorfireEvents:(id)arg1 withEvent:(id)arg2 trackerType:(id)arg3 showTime:(unsigned long long)arg4;
-(id)imNativeLandingPageProcessorGetRootAsset:(id)arg1;
-(void)imNativeLandingPageProcessorDidLeaveApplication:(id)arg1;
-(void)imNativeLandingPageProcessorWillPresentScreen:(id)arg1;
-(void)imNativeLandingPageProcessorDidPresentScreen:(id)arg1;
-(void)imNativeLandingPageProcessorWillDismissScreen:(id)arg1;
-(void)imNativeLandingPageProcessorDidDismissScreen:(id)arg1;

@end
