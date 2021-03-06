/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/IMRequest.h>

@class NSMutableDictionary, NSString;

@interface IMConfigNetworkRequest : IMRequest {

	long long _maxRetries;
	NSMutableDictionary* _requestedConfig;
	NSString* _accountId;

}

@property (assign,nonatomic) long long maxRetries;                               //@synthesize maxRetries=_maxRetries - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * requestedConfig;              //@synthesize requestedConfig=_requestedConfig - In the implementation block
@property (nonatomic,retain) NSString * accountId;                               //@synthesize accountId=_accountId - In the implementation block
-(NSMutableDictionary *)requestedConfig;
-(void)removeConfigFromRequestedMap:(id)arg1 ;
-(void)setRequestedConfig:(NSMutableDictionary *)arg1 ;
-(id)configPayload;
-(id)initWithURL:(id)arg1 requestedConfig:(id)arg2 maxRetries:(long long)arg3 retryInterval:(long long)arg4 accountId:(id)arg5 ;
-(NSString *)accountId;
-(void)setAccountId:(NSString *)arg1 ;
-(void)setMaxRetries:(long long)arg1 ;
-(long long)maxRetries;
@end

