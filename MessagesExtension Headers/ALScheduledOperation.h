/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ALTask;

@interface ALScheduledOperation : NSObject {

	ALTask* task;
	unsigned long long queue;
	double delay;
	long long _priority;

}

@property (nonatomic,retain) ALTask * task; 
@property (assign,nonatomic) unsigned long long queue; 
@property (assign,nonatomic) double delay; 
@property (assign,nonatomic) long long priority;                    //@synthesize priority=_priority - In the implementation block
-(void)setQueue:(unsigned long long)arg1 ;
-(unsigned long long)queue;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(ALTask *)task;
-(void)setTask:(ALTask *)arg1 ;
@end

