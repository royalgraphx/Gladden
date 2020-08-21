/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface MPEngineInfo : NSObject <NSCoding> {

	NSString* _name;
	NSString* _version;

}

@property (nonatomic,copy,readonly) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * version;              //@synthesize version=_version - In the implementation block
+(id)named:(id)arg1 version:(id)arg2 ;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)version;
-(id)initWithName:(id)arg1 version:(id)arg2 ;
@end
