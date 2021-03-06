/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <MessagesExtension/ADCVideoView.h>

@protocol ADCVideoViewDelegate;
@class ADCMPViewContext, ADCVideoTimer, NSTimer;

@interface ADCMPVideoView : ADCVideoView {

	BOOL _observing;
	BOOL _playing;
	BOOL _reportedReady;
	id _timeObserver;
	ADCMPViewContext* _context;
	ADCVideoTimer* _timer;
	id<ADCVideoViewDelegate> _delegate;
	unsigned long long _watchdogTrigger;
	NSTimer* _videoProgressTimer;

}
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 originNumber:(unsigned long long)arg2 context:(id)arg3 player:(id)arg4 timer:(BOOL)arg5 videoDelegate:(id)arg6 ;
-(id)createTimerInRect:(CGRect)arg1 withDuration:(double)arg2 ;
-(void)checkProgress;
-(void)dealloc;
-(void)pause;
-(void)finished;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)setVolume:(float)arg1 ;
-(id)player;
-(void)play:(BOOL)arg1 ;
-(void)seekToTime:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeObservers;
@end

