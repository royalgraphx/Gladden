/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableDictionary, NSMutableArray, NSObject, NSArray;

@interface ALArrayDictionary : NSObject <NSCoding> {

	NSMutableDictionary* _dict;
	NSMutableArray* _keys;
	NSObject* _lock;

}

@property (nonatomic,retain) NSMutableDictionary * dict;              //@synthesize dict=_dict - In the implementation block
@property (nonatomic,retain) NSMutableArray * keys;                   //@synthesize keys=_keys - In the implementation block
@property (nonatomic,retain) NSObject * lock;                         //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,copy,readonly) NSArray * allKeys; 
@property (nonatomic,copy,readonly) NSArray * allValues; 
+(id)orderedDictionaryWithCapacity:(unsigned long long)arg1 ;
+(id)orderedDictionary;
-(BOOL)shouldRemoveEldestKey:(id)arg1 object:(id)arg2 ;
-(id)init;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(NSArray *)allKeys;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSObject *)lock;
-(NSArray *)allValues;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(void)removeObjectsForKeys:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSMutableArray *)keys;
-(void)setKeys:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)dict;
-(void)setLock:(NSObject *)arg1 ;
-(void)setDict:(NSMutableDictionary *)arg1 ;
@end

