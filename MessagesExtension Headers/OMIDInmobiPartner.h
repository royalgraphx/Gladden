/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface OMIDInmobiPartner : NSObject {

	NSString* _name;
	NSString* _versionString;

}

@property (nonatomic,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * versionString;              //@synthesize versionString=_versionString - In the implementation block
-(id)initWithName:(id)arg1 versionString:(id)arg2 ;
-(id)toJSON;
-(NSString *)name;
-(NSString *)versionString;
@end

