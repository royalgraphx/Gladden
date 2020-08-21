/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface PIOYahooProfile : NSObject {

	NSString* _userId;
	NSString* _displayName;
	NSString* _avatarUrl;
	NSDate* _lastOnline;
	NSString* _countryCode;

}

@property (readonly) NSString * userId;                   //@synthesize userId=_userId - In the implementation block
@property (readonly) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (readonly) NSString * avatarUrl;                //@synthesize avatarUrl=_avatarUrl - In the implementation block
@property (readonly) NSDate * lastOnline;                 //@synthesize lastOnline=_lastOnline - In the implementation block
@property (readonly) NSString * countryCode;              //@synthesize countryCode=_countryCode - In the implementation block
-(id)initWithUserId:(id)arg1 displayName:(id)arg2 avatarUrl:(id)arg3 lastOnline:(long long)arg4 countryCode:(id)arg5 ;
-(NSString *)avatarUrl;
-(NSDate *)lastOnline;
-(void)dealloc;
-(NSString *)countryCode;
-(NSString *)displayName;
-(NSString *)userId;
@end

