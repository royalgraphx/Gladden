/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/ProtobufMessage.h>

@class NSMutableArray, NSString;

@interface SaveObjectChangesArgs : NSObject <ProtobufMessage> {

	int cachedSize;
	int cachedSizeId;
	BOOL createIfMissing;
	int lockType;
	NSMutableArray* changesets;

}

@property (assign) int lockType; 
@property (retain) NSMutableArray * changesets; 
@property (assign) BOOL createIfMissing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)saveObjectChangesArgsWithLockType:(int)arg1 changesets:(id)arg2 createIfMissing:(BOOL)arg3 ;
-(void)serializeToWriter:(id)arg1 sizeCacheId:(int)arg2 ;
-(void)deserializeFromReader:(id)arg1 ;
-(int)sizeWithCacheId:(int)arg1 ;
-(id)initWithLockType:(int)arg1 changesets:(id)arg2 createIfMissing:(BOOL)arg3 ;
-(NSMutableArray *)changesets;
-(void)setChangesets:(NSMutableArray *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setLockType:(int)arg1 ;
-(int)lockType;
-(void)setCreateIfMissing:(BOOL)arg1 ;
-(BOOL)createIfMissing;
@end

