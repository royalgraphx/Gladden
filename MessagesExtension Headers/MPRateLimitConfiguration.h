/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, MPRealTimeTimer;

@interface MPRateLimitConfiguration : NSObject {

	unsigned long long _lastRateLimitMilliseconds;
	NSString* _lastRateLimitReason;
	MPRealTimeTimer* _timer;

}

@property (nonatomic,retain) MPRealTimeTimer * timer;                                     //@synthesize timer=_timer - In the implementation block
@property (nonatomic,readonly) unsigned long long lastRateLimitMilliseconds;              //@synthesize lastRateLimitMilliseconds=_lastRateLimitMilliseconds - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastRateLimitReason;                       //@synthesize lastRateLimitReason=_lastRateLimitReason - In the implementation block
@property (nonatomic,readonly) BOOL isRateLimited; 
-(void)setRateLimitTimerWithMilliseconds:(long long)arg1 reason:(id)arg2 ;
-(unsigned long long)lastRateLimitMilliseconds;
-(NSString *)lastRateLimitReason;
-(MPRealTimeTimer *)timer;
-(void)setTimer:(MPRealTimeTimer *)arg1 ;
-(BOOL)isRateLimited;
@end

