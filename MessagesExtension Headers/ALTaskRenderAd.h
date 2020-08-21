/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/ALTask.h>

@protocol ALAdLoadDelegate;
@class NSDictionary;

@interface ALTaskRenderAd : ALTask {

	NSDictionary* _adObject;
	NSDictionary* _fullAdResponse;
	unsigned long long _source;
	id<ALAdLoadDelegate> _adLoadDelegate;

}

@property (nonatomic,retain) NSDictionary * adObject;                          //@synthesize adObject=_adObject - In the implementation block
@property (nonatomic,retain) NSDictionary * fullAdResponse;                    //@synthesize fullAdResponse=_fullAdResponse - In the implementation block
@property (assign,nonatomic) unsigned long long source;                        //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) id<ALAdLoadDelegate> adLoadDelegate;              //@synthesize adLoadDelegate=_adLoadDelegate - In the implementation block
-(id<ALAdLoadDelegate>)adLoadDelegate;
-(void)setAdLoadDelegate:(id<ALAdLoadDelegate>)arg1 ;
-(void)setAdObject:(NSDictionary *)arg1 ;
-(NSDictionary *)adObject;
-(NSDictionary *)fullAdResponse;
-(id)initWithAdObject:(id)arg1 fullAdResponse:(id)arg2 source:(unsigned long long)arg3 adLoadDelegate:(id)arg4 sdk:(id)arg5 ;
-(void)setFullAdResponse:(NSDictionary *)arg1 ;
-(void)processAd:(id)arg1 ;
-(void)run;
-(void)setSource:(unsigned long long)arg1 ;
-(unsigned long long)source;
@end
