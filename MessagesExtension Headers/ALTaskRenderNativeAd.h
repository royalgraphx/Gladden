/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/ALTask.h>

@protocol ALNativeAdLoadDelegate;
@class NSDictionary;

@interface ALTaskRenderNativeAd : ALTask {

	id<ALNativeAdLoadDelegate> _nativeAdLoadDelegate;
	NSDictionary* _adResponse;

}

@property (nonatomic,retain) id<ALNativeAdLoadDelegate> nativeAdLoadDelegate;              //@synthesize nativeAdLoadDelegate=_nativeAdLoadDelegate - In the implementation block
@property (nonatomic,retain) NSDictionary * adResponse;                                    //@synthesize adResponse=_adResponse - In the implementation block
-(void)setAdResponse:(NSDictionary *)arg1 ;
-(void)setNativeAdLoadDelegate:(id<ALNativeAdLoadDelegate>)arg1 ;
-(NSDictionary *)adResponse;
-(void)performRender:(id)arg1 ;
-(id<ALNativeAdLoadDelegate>)nativeAdLoadDelegate;
-(id)simpURLWithSettings:(id)arg1 clCode:(id)arg2 ;
-(id)clickURLWithSettings:(id)arg1 clCode:(id)arg2 eventID:(id)arg3 ;
-(id)videoStartURLWithSettings:(id)arg1 clCode:(id)arg2 ;
-(id)videoEndURLWithSettings:(id)arg1 clCode:(id)arg2 ;
-(id)initWithSdk:(id)arg1 adResponse:(id)arg2 nativeAdLoadDelegate:(id)arg3 ;
-(void)run;
@end
