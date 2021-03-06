/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSDictionary, NSString;

@interface FBAdEventCounterSignal : NSObject <NSCopying, NSMutableCopying> {

	NSDictionary* _eventCounts;
	NSString* _measuredSessionId;

}

@property (nonatomic,copy,readonly) NSDictionary * eventCounts;                //@synthesize eventCounts=_eventCounts - In the implementation block
@property (nonatomic,copy,readonly) NSString * measuredSessionId;              //@synthesize measuredSessionId=_measuredSessionId - In the implementation block
-(id)initWithCounterSignal:(id)arg1 ;
-(NSString *)measuredSessionId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)eventCounts;
@end

