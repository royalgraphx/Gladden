/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ADCMuteSwitchDetectorJob : NSObject {

	BOOL _cancelled;
	unsigned _soundId;
	double _startTimeInterval;
	/*^block*/id _completion;

}

@property (assign) BOOL cancelled;                                  //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic) unsigned soundId;                      //@synthesize soundId=_soundId - In the implementation block
@property (assign,nonatomic) double startTimeInterval;              //@synthesize startTimeInterval=_startTimeInterval - In the implementation block
@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
-(void)setSoundId:(unsigned)arg1 ;
-(void)runCheck;
-(void)setStartTimeInterval:(double)arg1 ;
-(unsigned)soundId;
-(double)startTimeInterval;
-(id)initWithSoundId:(unsigned)arg1 andDelay:(float)arg2 completion:(/*^block*/id)arg3 ;
-(void)completedWithTimeIntervalSinceReferenceDate:(double)arg1 ;
-(void)cancel;
-(BOOL)cancelled;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)setCancelled:(BOOL)arg1 ;
@end
