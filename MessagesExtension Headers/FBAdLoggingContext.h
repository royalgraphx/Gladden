/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessagesExtension/MessagesExtension-Structs.h>
@class NSMutableDictionary;

@interface FBAdLoggingContext : NSObject {

	NSMutableDictionary* _cacheDebugMap;

}

@property (nonatomic,retain) NSMutableDictionary * cacheDebugMap;              //@synthesize cacheDebugMap=_cacheDebugMap - In the implementation block
+(id)sharedContext;
-(id)cacheDebugDataForKey:(id)arg1 context:(id)arg2 ;
-(void)mapCacheDebugData:(id)arg1 forKey:(id)arg2 context:(id)arg3 ;
-(void)markCacheHitOrMissEventLoggedForKey:(id)arg1 requestId:(id)arg2 context:(id)arg3 ;
-(void)markInMemoryWriteFailureCacheEventLoggedForKey:(id)arg1 requestId:(id)arg2 context:(id)arg3 ;
-(void)markCacheEventLoggedForKey:(id)arg1 requestId:(id)arg2 cacheEventTypeCode:(long long)arg3 context:(id)arg4 ;
-(NSMutableDictionary *)cacheDebugMap;
-(id)cacheKeyForKey:(id)arg1 context:(id)arg2 ;
-(void)setCacheDebugMap:(NSMutableDictionary *)arg1 ;
-(void)clearContext;
@end

