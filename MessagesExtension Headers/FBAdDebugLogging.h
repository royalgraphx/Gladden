/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/FBAdDebugFunnelLogging.h>

@class NSMutableDictionary, NSString;

@interface FBAdDebugLogging : NSObject <FBAdDebugFunnelLogging> {

	BOOL _shouldLogDebugFunnel;
	NSMutableDictionary* _funnels;

}

@property (assign,nonatomic) BOOL shouldLogDebugFunnel;                  //@synthesize shouldLogDebugFunnel=_shouldLogDebugFunnel - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * funnels;              //@synthesize funnels=_funnels - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned)randomPercentage;
+(void)logDebugEventWithType:(id)arg1 code:(unsigned long long)arg2 info:(id)arg3 ;
+(void)logDebugEventWithType:(id)arg1 code:(unsigned long long)arg2 description:(id)arg3 ;
+(void)logDebugEventWithType:(id)arg1 code:(unsigned long long)arg2 description:(id)arg3 function:(id)arg4 line:(long long)arg5 ;
+(void)logDebugEventWithType:(id)arg1 code:(unsigned long long)arg2 exception:(id)arg3 ;
+(void)logDebugEventWithType:(id)arg1 code:(unsigned long long)arg2 data:(id)arg3 info:(id)arg4 ;
+(void)recalculateSamplingRates;
+(BOOL)shouldLogDebugEventWithSubtype:(id)arg1 code:(long long)arg2 ;
+(BOOL)shouldLogLocalCountersDebugEventsForCurrentSession;
+(BOOL)shouldLogDebugEventsInSessionWithRate:(long long)arg1 ;
+(BOOL)shouldLogNetworkDebugEventsForCurrentSession;
+(BOOL)shouldLogCacheDebugEventsForCurrentSession;
+(BOOL)recalculateNetworkDebugEventsSamplingRate;
+(BOOL)recalculateCacheDebugEventsSamplingRate;
+(void)logDSLErrorForRequestId:(id)arg1 adFormat:(id)arg2 creativeType:(id)arg3 stacktrace:(id)arg4 extraData:(id)arg5 ;
+(id)mutableDictionaryWithAdFormat:(id)arg1 creative:(id)arg2 cacheContext:(id)arg3 requestId:(id)arg4 ;
+(void)logCacheOnDiskWipeEventWithSize:(unsigned long long)arg1 reason:(id)arg2 success:(BOOL)arg3 ;
+(void)logCacheHitForAdFormat:(id)arg1 creative:(id)arg2 cacheContext:(id)arg3 requestId:(id)arg4 ;
+(void)logCacheMissForAdFormat:(id)arg1 creative:(id)arg2 cacheContext:(id)arg3 requestId:(id)arg4 ;
+(void)logCacheWriteToDiskSuccessForAdFormat:(id)arg1 creative:(id)arg2 cacheContext:(id)arg3 requestId:(id)arg4 ;
+(void)logCacheWriteToDiskFailureForAdFormat:(id)arg1 creative:(id)arg2 cacheContext:(id)arg3 requestId:(id)arg4 reason:(id)arg5 ;
+(void)logCacheOnDiskWipeFailure:(unsigned long long)arg1 reason:(id)arg2 ;
+(void)logCacheOnDiskWipeSuccess:(unsigned long long)arg1 ;
+(void)logVideoWrapperCachedWithVideoMissingForAdFormat:(id)arg1 requestId:(id)arg2 ;
+(void)logInMemoryCacheFailedForAdFormat:(id)arg1 creative:(id)arg2 requestId:(id)arg3 ;
+(void)logCreativeDownloadFailure:(id)arg1 creative:(id)arg2 requestId:(id)arg3 ;
+(void)logAdLoadedForAdFormat:(id)arg1 requestId:(id)arg2 ;
+(void)logAdapterFailedForAdFormat:(id)arg1 requestId:(id)arg2 reason:(id)arg3 ;
+(void)logEventCounterSignal:(id)arg1 ;
+(void)processLocalCountersAndStartNewSession:(id)arg1 ;
+(void)initialize;
+(id)mainBundle;
+(id)context;
+(id)logger;
-(void)registerFunnel:(id)arg1 forKey:(id)arg2 ;
-(id)funnelForKey:(id)arg1 ;
-(void)recalculateDebugFunnelSamplingWithRate:(long long)arg1 ;
-(void)logFunnelEventWithCode:(unsigned long long)arg1 info:(id)arg2 ;
-(BOOL)shouldLogDebugFunnel;
-(unsigned)randomPercentage;
-(BOOL)shouldLogDebugEventWithRate:(long long)arg1 ;
-(void)setShouldLogDebugFunnel:(BOOL)arg1 ;
-(NSMutableDictionary *)funnels;
-(void)setFunnels:(NSMutableDictionary *)arg1 ;
-(id)init;
@end

