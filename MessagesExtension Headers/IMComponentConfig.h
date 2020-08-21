/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/IMJSONModel.h>

@class NSString, NSNumber;

@interface IMComponentConfig : IMJSONModel {

	NSString* _type;
	NSNumber* _expiry;
	NSString* _url;

}

@property (nonatomic,retain) NSString * type;                //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSNumber * expiry;              //@synthesize expiry=_expiry - In the implementation block
@property (nonatomic,retain) NSString * url;                 //@synthesize url=_url - In the implementation block
-(id)init;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
-(BOOL)validate:(id*)arg1 ;
-(NSNumber *)expiry;
-(void)setExpiry:(NSNumber *)arg1 ;
@end

