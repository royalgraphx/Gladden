/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSDictionary;

@interface PIOGameRequest : NSObject {

	NSString* _type;
	NSString* _sendUserId;
	NSDate* _created;
	NSDictionary* _data;
	NSString* _identifier;

}

@property (assign) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSString * type;                    //@synthesize type=_type - In the implementation block
@property (readonly) NSString * sendUserId;              //@synthesize sendUserId=_sendUserId - In the implementation block
@property (readonly) NSDate * created;                   //@synthesize created=_created - In the implementation block
@property (readonly) NSDictionary * data;                //@synthesize data=_data - In the implementation block
-(id)initWithWaitingGameRequest:(id)arg1 ;
-(NSString *)sendUserId;
-(void)dealloc;
-(NSString *)type;
-(NSDictionary *)data;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDate *)created;
@end

