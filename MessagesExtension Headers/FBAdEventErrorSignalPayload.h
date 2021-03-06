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

@class NSString;

@interface FBAdEventErrorSignalPayload : NSObject <NSCopying, NSMutableCopying> {

	unsigned long long _type;
	NSString* _errorDescription;

}

@property (nonatomic,readonly) unsigned long long type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * errorDescription;              //@synthesize errorDescription=_errorDescription - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(id)initWithPayload:(id)arg1 ;
-(NSString *)errorDescription;
@end

