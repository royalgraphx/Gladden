/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessagesExtension/MessagesExtension-Structs.h>
@class NSUUID, NSString, NSDate, NSDictionary;

@interface FBAdEventPayload : NSObject {

	unsigned long long _attemptsCount;
	NSUUID* _eventId;
	NSUUID* _tokenId;
	NSString* _type;
	NSDate* _time;
	NSUUID* _sessionId;
	NSDate* _sessionStartTime;
	NSDictionary* _extraData;
	unsigned long long _priority;
	NSDate* _expiration;

}

@property (nonatomic,copy) NSUUID * eventId;                                //@synthesize eventId=_eventId - In the implementation block
@property (nonatomic,copy) NSString * type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSDate * time;                                   //@synthesize time=_time - In the implementation block
@property (nonatomic,copy) NSDate * expiration;                             //@synthesize expiration=_expiration - In the implementation block
@property (assign,nonatomic) unsigned long long priority;                   //@synthesize priority=_priority - In the implementation block
@property (nonatomic,copy) NSDictionary * extraData;                        //@synthesize extraData=_extraData - In the implementation block
@property (nonatomic,copy) NSUUID * tokenId;                                //@synthesize tokenId=_tokenId - In the implementation block
@property (nonatomic,copy) NSUUID * sessionId;                              //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,copy) NSDate * sessionStartTime;                       //@synthesize sessionStartTime=_sessionStartTime - In the implementation block
@property (assign,nonatomic) unsigned long long attemptsCount;              //@synthesize attemptsCount=_attemptsCount - In the implementation block
+(id)deserializeFromSqlite:(sqlite3_stmtRef)arg1 signalHandler:(id)arg2 ;
-(unsigned long long)attemptsCount;
-(id)initWithType:(id)arg1 withPriority:(unsigned long long)arg2 withTokenId:(id)arg3 withSessionId:(id)arg4 withSessionStartTime:(id)arg5 withExtraData:(id)arg6 ;
-(id)jsonExtraData;
-(void)setTokenId:(NSUUID *)arg1 ;
-(void)setAttemptsCount:(unsigned long long)arg1 ;
-(id)description;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(unsigned long long)priority;
-(NSDate *)time;
-(void)setPriority:(unsigned long long)arg1 ;
-(void)setTime:(NSDate *)arg1 ;
-(NSDate *)expiration;
-(NSUUID *)sessionId;
-(void)setSessionId:(NSUUID *)arg1 ;
-(NSUUID *)eventId;
-(void)setEventId:(NSUUID *)arg1 ;
-(void)setExtraData:(NSDictionary *)arg1 ;
-(NSDictionary *)extraData;
-(void)setExpiration:(NSDate *)arg1 ;
-(NSDate *)sessionStartTime;
-(void)setSessionStartTime:(NSDate *)arg1 ;
-(NSUUID *)tokenId;
@end

