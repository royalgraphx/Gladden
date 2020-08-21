/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessagesExtension/MessagesExtension-Structs.h>
@class DatabaseCore;

@interface PIODatabaseArray : NSObject {

	DatabaseCore* _core;
	unsigned long long _count;

}
+(id)array;
-(id)toStringWithIndention:(id)arg1 ;
-(id)core;
-(id)get:(unsigned long long)arg1 throwOnMissing:(BOOL)arg2 ;
-(id)set:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)insert:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)containsObjectAtIndex:(unsigned long long)arg1 ;
-(id)stringAtIndex:(unsigned long long)arg1 defaultValue:(id)arg2 ;
-(unsigned)uintAtIndex:(unsigned long long)arg1 ;
-(unsigned)uintAtIndex:(unsigned long long)arg1 defaultValue:(unsigned)arg2 ;
-(long long)longAtIndex:(unsigned long long)arg1 defaultValue:(long long)arg2 ;
-(id)dataAtIndex:(unsigned long long)arg1 defaultValue:(id)arg2 ;
-(id)dateAtIndex:(unsigned long long)arg1 defaultValue:(id)arg2 ;
-(id)arrayAtIndex:(unsigned long long)arg1 ;
-(id)setInt:(int)arg1 atIndex:(unsigned long long)arg2 ;
-(id)setUInt:(unsigned)arg1 atIndex:(unsigned long long)arg2 ;
-(id)setLong:(long long)arg1 atIndex:(unsigned long long)arg2 ;
-(id)setBool:(BOOL)arg1 atIndex:(unsigned long long)arg2 ;
-(id)setFloat:(float)arg1 atIndex:(unsigned long long)arg2 ;
-(id)setDouble:(double)arg1 atIndex:(unsigned long long)arg2 ;
-(id)setData:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)setDate:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)setArray:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)addDate:(id)arg1 ;
-(id)insertInt:(int)arg1 atIndex:(unsigned long long)arg2 ;
-(id)insertUInt:(unsigned)arg1 atIndex:(unsigned long long)arg2 ;
-(id)insertLong:(long long)arg1 atIndex:(unsigned long long)arg2 ;
-(id)insertBool:(BOOL)arg1 atIndex:(unsigned long long)arg2 ;
-(id)insertFloat:(float)arg1 atIndex:(unsigned long long)arg2 ;
-(id)insertDouble:(double)arg1 atIndex:(unsigned long long)arg2 ;
-(id)insertData:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)insertDate:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)insertArray:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)stringForProperty:(id)arg1 defaultValue:(id)arg2 ;
-(int)intForProperty:(id)arg1 defaultValue:(int)arg2 ;
-(unsigned)uintForProperty:(id)arg1 ;
-(unsigned)uintForProperty:(id)arg1 defaultValue:(unsigned)arg2 ;
-(long long)longForProperty:(id)arg1 ;
-(long long)longForProperty:(id)arg1 defaultValue:(long long)arg2 ;
-(BOOL)boolForProperty:(id)arg1 defaultValue:(BOOL)arg2 ;
-(float)floatForProperty:(id)arg1 ;
-(float)floatForProperty:(id)arg1 defaultValue:(float)arg2 ;
-(double)doubleForProperty:(id)arg1 ;
-(double)doubleForProperty:(id)arg1 defaultValue:(double)arg2 ;
-(id)dataForProperty:(id)arg1 ;
-(id)dataForProperty:(id)arg1 defaultValue:(id)arg2 ;
-(id)dateForProperty:(id)arg1 defaultValue:(id)arg2 ;
-(id)arrayForProperty:(id)arg1 ;
-(id)setString:(id)arg1 forProperty:(id)arg2 ;
-(id)setInt:(int)arg1 forProperty:(id)arg2 ;
-(id)setUInt:(unsigned)arg1 forProperty:(id)arg2 ;
-(id)setLong:(long long)arg1 forProperty:(id)arg2 ;
-(id)setBool:(BOOL)arg1 forProperty:(id)arg2 ;
-(id)setFloat:(float)arg1 forProperty:(id)arg2 ;
-(id)setDouble:(double)arg1 forProperty:(id)arg2 ;
-(id)setData:(id)arg1 forProperty:(id)arg2 ;
-(id)setDate:(id)arg1 forProperty:(id)arg2 ;
-(id)setArray:(id)arg1 forProperty:(id)arg2 ;
-(id)addUInt:(unsigned)arg1 ;
-(id)addLong:(long long)arg1 ;
-(id)addFloat:(float)arg1 ;
-(id)addDouble:(double)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(unsigned long long)count;
-(id)objectEnumerator;
-(id)addObject:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PI36*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)setObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)removeAllObjects;
-(id)keyEnumerator;
-(id)insertString:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)allValues;
-(int)intAtIndex:(unsigned long long)arg1 ;
-(double)doubleAtIndex:(unsigned long long)arg1 ;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(id)initWithProperties:(id)arg1 ;
-(id)stringAtIndex:(unsigned long long)arg1 ;
-(id)dataAtIndex:(unsigned long long)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(id)allIndexes;
-(id)setObject:(id)arg1 forProperty:(id)arg2 ;
-(id)objectForProperty:(id)arg1 ;
-(BOOL)boolForProperty:(id)arg1 ;
-(int)intForProperty:(id)arg1 ;
-(id)stringForProperty:(id)arg1 ;
-(id)addData:(id)arg1 ;
-(id)add:(id)arg1 ;
-(BOOL)boolAtIndex:(unsigned long long)arg1 ;
-(long long)longAtIndex:(unsigned long long)arg1 ;
-(float)floatAtIndex:(unsigned long long)arg1 ;
-(id)dateAtIndex:(unsigned long long)arg1 ;
-(BOOL)containsProperty:(id)arg1 ;
-(id)addString:(id)arg1 ;
-(id)addArray:(id)arg1 ;
-(id)setString:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)boolAtIndex:(unsigned long long)arg1 defaultValue:(BOOL)arg2 ;
-(int)intAtIndex:(unsigned long long)arg1 defaultValue:(int)arg2 ;
-(float)floatAtIndex:(unsigned long long)arg1 defaultValue:(float)arg2 ;
-(double)doubleAtIndex:(unsigned long long)arg1 defaultValue:(double)arg2 ;
-(id)addInt:(int)arg1 ;
-(id)addBool:(BOOL)arg1 ;
-(id)dateForProperty:(id)arg1 ;
@end

