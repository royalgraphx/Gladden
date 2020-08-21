/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessagesExtension/MessagesExtension-Structs.h>
@class DatabaseCore, NSString, NSDate;

@interface PIOVaultItem : NSObject {

	DatabaseCore* _core;
	NSString* _id;
	NSString* _itemKey;
	NSDate* _purchaseDate;

}
-(id)toStringWithIndention:(id)arg1 ;
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
-(id)initWithId:(id)arg1 itemKey:(id)arg2 purchaseDate:(long long)arg3 core:(id)arg4 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(unsigned long long)count;
-(id)objectEnumerator;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PI36*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)keyEnumerator;
-(id)allValues;
-(id)valueForProperty:(id)arg1 ;
-(id)objectForProperty:(id)arg1 ;
-(BOOL)boolForProperty:(id)arg1 ;
-(int)intForProperty:(id)arg1 ;
-(id)stringForProperty:(id)arg1 ;
-(id)allProperties;
-(id)purchaseDate;
-(id)id;
-(id)itemKey;
-(BOOL)containsProperty:(id)arg1 ;
-(id)dateForProperty:(id)arg1 ;
@end

