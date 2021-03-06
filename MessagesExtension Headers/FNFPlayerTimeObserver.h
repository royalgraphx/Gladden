/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
#import <MessagesExtension/MessagesExtension-Structs.h>
@class NSObject;

@interface FNFPlayerTimeObserver : NSObject {

	BOOL _fireOnceAtExactTime;
	BOOL _followMasterClock;
	BOOL _suspended;
	/*^block*/id _block;
	NSObject*<OS_dispatch_source> _timer;
	SCD_Struct_IM9 _interval;

}

@property (assign,nonatomic) SCD_Struct_IM9 interval;                          //@synthesize interval=_interval - In the implementation block
@property (nonatomic,copy) id block;                                           //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;              //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) BOOL fireOnceAtExactTime;                         //@synthesize fireOnceAtExactTime=_fireOnceAtExactTime - In the implementation block
@property (assign,nonatomic) BOOL followMasterClock;                           //@synthesize followMasterClock=_followMasterClock - In the implementation block
@property (assign,nonatomic) BOOL suspended;                                   //@synthesize suspended=_suspended - In the implementation block
-(BOOL)fireOnceAtExactTime;
-(void)setFireOnceAtExactTime:(BOOL)arg1 ;
-(BOOL)followMasterClock;
-(void)setFollowMasterClock:(BOOL)arg1 ;
-(SCD_Struct_IM9)interval;
-(void)setInterval:(SCD_Struct_IM9)arg1 ;
-(id)block;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)suspended;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setBlock:(id)arg1 ;
@end

