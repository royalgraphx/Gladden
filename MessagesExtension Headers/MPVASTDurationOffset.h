/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MPVASTModel.h>

@class NSString;

@interface MPVASTDurationOffset : MPVASTModel {

	unsigned long long _type;
	NSString* _offset;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * offset;               //@synthesize offset=_offset - In the implementation block
-(double)timeIntervalForVideoWithDuration:(double)arg1 ;
-(unsigned long long)type;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)offset;
@end
