/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/ALPostbackDelegate.h>

@protocol ALAdViewForegroundClickTrackingProtocol;
@class ALAdService, ALAdServerAd, ALBaseVideoViewController, NSString;

@interface ALAdServiceVideoPostbackProxy : NSObject <ALPostbackDelegate> {

	ALAdService* _adService;
	ALAdServerAd* _ad;
	id<ALAdViewForegroundClickTrackingProtocol> _videoView;
	ALBaseVideoViewController* _viewController;

}

@property (assign,nonatomic,__weak) ALAdService * adService;                                     //@synthesize adService=_adService - In the implementation block
@property (nonatomic,retain) ALAdServerAd * ad;                                                  //@synthesize ad=_ad - In the implementation block
@property (nonatomic,retain) id<ALAdViewForegroundClickTrackingProtocol> videoView;              //@synthesize videoView=_videoView - In the implementation block
@property (assign,nonatomic,__weak) ALBaseVideoViewController * viewController;                  //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)postbackProxyWithAdService:(id)arg1 videoView:(id)arg2 ad:(id)arg3 viewController:(id)arg4 ;
-(void)postbackService:(id)arg1 didFailToExecutePostback:(id)arg2 errorCode:(long long)arg3 ;
-(ALAdService *)adService;
-(void)setAdService:(ALAdService *)arg1 ;
-(void)clickThrough;
-(void)postbackService:(id)arg1 didExecutePostback:(id)arg2 ;
-(void)setViewController:(ALBaseVideoViewController *)arg1 ;
-(ALBaseVideoViewController *)viewController;
-(void)setVideoView:(id<ALAdViewForegroundClickTrackingProtocol>)arg1 ;
-(id<ALAdViewForegroundClickTrackingProtocol>)videoView;
-(ALAdServerAd *)ad;
-(void)setAd:(ALAdServerAd *)arg1 ;
@end
