/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/ProtobufMessage.h>

@class NSString;

@interface PayVaultRefreshArgs : NSObject <ProtobufMessage> {

	int cachedSize;
	int cachedSizeId;
	NSString* lastVersion;
	NSString* targetUserId;

}

@property (retain) NSString * lastVersion; 
@property (retain) NSString * targetUserId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)payVaultRefreshArgsWithLastVersion:(id)arg1 targetUserId:(id)arg2 ;
-(void)serializeToWriter:(id)arg1 sizeCacheId:(int)arg2 ;
-(void)deserializeFromReader:(id)arg1 ;
-(int)sizeWithCacheId:(int)arg1 ;
-(NSString *)targetUserId;
-(void)setTargetUserId:(NSString *)arg1 ;
-(id)initWithLastVersion:(id)arg1 targetUserId:(id)arg2 ;
-(NSString *)lastVersion;
-(void)setLastVersion:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
@end

