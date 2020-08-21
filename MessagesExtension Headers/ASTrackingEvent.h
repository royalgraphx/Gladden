/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface ASTrackingEvent : NSObject <NSCopying> {

	BOOL _oneTime;
	BOOL _canBeSent;
	long long _type;
	NSMutableArray* _urls;

}

@property (assign,nonatomic) BOOL oneTime;                       //@synthesize oneTime=_oneTime - In the implementation block
@property (assign,nonatomic) BOOL canBeSent;                     //@synthesize canBeSent=_canBeSent - In the implementation block
@property (assign,nonatomic) long long type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSMutableArray * urls;              //@synthesize urls=_urls - In the implementation block
+(id)eventWithEventType:(long long)arg1 andSentOnce:(BOOL)arg2 ;
+(id)createEventUrlWithBase:(id)arg1 plc:(id)arg2 rid:(id)arg3 ev:(long long)arg4 andBuyer:(id)arg5 ;
+(id)generateFailShowWith:(id)arg1 adSettings:(id)arg2 andBuyer:(id)arg3 ;
-(BOOL)canBeSent;
-(BOOL)oneTime;
-(void)setCanBeSent:(BOOL)arg1 ;
-(void)setOneTime:(BOOL)arg1 ;
-(id)initWithEventType:(long long)arg1 andSentOnce:(BOOL)arg2 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSMutableArray *)urls;
-(void)setUrls:(NSMutableArray *)arg1 ;
-(void)addURL:(id)arg1 ;
-(void)addURLs:(id)arg1 ;
-(void)addURLString:(id)arg1 ;
@end

