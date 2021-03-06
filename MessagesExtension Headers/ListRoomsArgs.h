/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/ProtobufMessage.h>

@class NSString, NSMutableArray;

@interface ListRoomsArgs : NSObject <ProtobufMessage> {

	int cachedSize;
	int cachedSizeId;
	BOOL onlyDevRooms;
	int resultLimit;
	int resultOffset;
	NSString* roomType;
	NSMutableArray* searchCriteria;

}

@property (retain) NSString * roomType; 
@property (retain) NSMutableArray * searchCriteria; 
@property (assign) int resultLimit; 
@property (assign) int resultOffset; 
@property (assign) BOOL onlyDevRooms; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)listRoomsArgsWithRoomType:(id)arg1 searchCriteria:(id)arg2 resultLimit:(int)arg3 resultOffset:(int)arg4 onlyDevRooms:(BOOL)arg5 ;
-(void)serializeToWriter:(id)arg1 sizeCacheId:(int)arg2 ;
-(void)deserializeFromReader:(id)arg1 ;
-(int)sizeWithCacheId:(int)arg1 ;
-(NSString *)roomType;
-(void)setRoomType:(NSString *)arg1 ;
-(id)initWithRoomType:(id)arg1 searchCriteria:(id)arg2 resultLimit:(int)arg3 resultOffset:(int)arg4 onlyDevRooms:(BOOL)arg5 ;
-(int)resultOffset;
-(void)setResultOffset:(int)arg1 ;
-(BOOL)onlyDevRooms;
-(void)setOnlyDevRooms:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(int)resultLimit;
-(void)setResultLimit:(int)arg1 ;
-(NSMutableArray *)searchCriteria;
-(void)setSearchCriteria:(NSMutableArray *)arg1 ;
@end

