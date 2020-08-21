/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface MoPub_AvidEvent : NSObject {

	NSString* _name;
	NSString* _type;
	NSDictionary* _data;

}

@property (nonatomic,retain) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSDictionary * data;              //@synthesize data=_data - In the implementation block
+(id)eventWithName:(id)arg1 type:(id)arg2 data:(id)arg3 ;
-(id)initWithName:(id)arg1 type:(id)arg2 data:(id)arg3 ;
-(NSString *)name;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSDictionary *)data;
-(void)setData:(NSDictionary *)arg1 ;
@end

