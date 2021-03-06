/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessagesExtension/MessagesExtension-Structs.h>
@class NSMutableArray;

@interface FBBotDetectionCircularBuffer : NSObject {

	unsigned long long _capacity;
	NSMutableArray* _objects;
	long long _headIndex;
	long long _tailIndex;
	BOOL _isFull;
	mutex _indexMutex;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) unsigned long long validObjectsCount; 
-(unsigned long long)validObjectsCount;
-(id)removeLatestObject;
-(id)removeOldestObject;
-(id)readAllObjects;
-(id)readLatestObject;
-(id)readOldestObject;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(void)clearObjects;
@end

