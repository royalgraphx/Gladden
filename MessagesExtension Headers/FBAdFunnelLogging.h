/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary;

@interface FBAdFunnelLogging : NSObject {

	NSMutableDictionary* _funnelLoggersForToken;
	NSDictionary* _eventMatching;

}

@property (nonatomic,retain) NSMutableDictionary * funnelLoggersForToken;              //@synthesize funnelLoggersForToken=_funnelLoggersForToken - In the implementation block
@property (nonatomic,copy) NSDictionary * eventMatching;                               //@synthesize eventMatching=_eventMatching - In the implementation block
+(id)sharedFunnelLogger;
-(id)funnelLoggingDataForAdEvent:(id)arg1 withToken:(id)arg2 withExtraData:(id)arg3 ;
-(id)funnelLoggingDataForEvent:(id)arg1 withToken:(id)arg2 withExtraData:(id)arg3 ;
-(id)funnelLoggerForToken:(id)arg1 ;
-(id)createFunnelLoggerForToken:(id)arg1 andEventList:(id)arg2 ;
-(void)logFunnelEventOfType:(id)arg1 withSubtype:(id)arg2 withToken:(id)arg3 withExtraData:(id)arg4 ;
-(void)logUXFunnelEventOfSubtype:(id)arg1 withToken:(id)arg2 withExtraData:(id)arg3 ;
-(id)uxFunnelDataWithEventType:(id)arg1 forToken:(id)arg2 ;
-(void)createLoggerAndLogAdRequestSuccessForAdCandidate:(id)arg1 withTime:(double)arg2 ;
-(id)funnelEventSubtypeForAdEvent:(id)arg1 ;
-(NSDictionary *)eventMatching;
-(NSMutableDictionary *)funnelLoggersForToken;
-(void)setFunnelLoggersForToken:(NSMutableDictionary *)arg1 ;
-(void)setEventMatching:(NSDictionary *)arg1 ;
-(id)init;
-(id)logger;
@end

