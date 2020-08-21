/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableOrderedSet;

@interface MPAdPositioning : NSObject <NSCopying> {

	unsigned long long _repeatingInterval;
	NSMutableOrderedSet* _fixedPositions;

}

@property (nonatomic,retain) NSMutableOrderedSet * fixedPositions;              //@synthesize fixedPositions=_fixedPositions - In the implementation block
@property (assign,nonatomic) unsigned long long repeatingInterval;              //@synthesize repeatingInterval=_repeatingInterval - In the implementation block
-(NSMutableOrderedSet *)fixedPositions;
-(void)setFixedPositions:(NSMutableOrderedSet *)arg1 ;
-(unsigned long long)repeatingInterval;
-(void)setRepeatingInterval:(unsigned long long)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
