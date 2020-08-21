/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <MessagesExtension/FNFSynchronousPlayerDelegate.h>
#import <MessagesExtension/FNFAVPlayer.h>

@protocol FNFPlayerAudioDecoder, FNFAVPlayerItem, FNFPlayerStateUpdateListener;
@class NSError, FNFSynchronousPlayer, FNFAudioQueue, NSString;

@interface FNFPlayer : NSObject <FNFSynchronousPlayerDelegate, FNFAVPlayer> {

	FNFSynchronousPlayer* _synchronousPlayer;
	FNFAudioQueue* _defaultAudioEngine;
	id<FNFPlayerAudioDecoder> _defaultAudioDecoder;
	long long _status;
	id<FNFAVPlayerItem> _currentItem;
	float _rate;
	id<FNFPlayerStateUpdateListener> _stateUpdateListener;
	BOOL _shouldHandleHDMIConnectionAndScreenCapture;
	double _lastSeekTimeInterval;
	id _seekThrottlingTimer;
	BOOL _hasRegisteredNotificationsForProtectedContent;
	BOOL _shouldFlushTrailingSeek;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) float rate; 
@property (assign,getter=isMuted,nonatomic) BOOL muted; 
@property (assign,nonatomic) float volume; 
@property (assign,nonatomic) BOOL allowsExternalPlayback; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
-(void)setUserSelectedQuality:(id)arg1 ;
-(void)setVolume:(float)arg1 rampTime:(float)arg2 ;
-(id)addPeriodicTimeObserverForInterval:(SCD_Struct_IM9)arg1 queue:(id)arg2 followMasterClock:(BOOL)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)synchronousPlayer:(id)arg1 stateUpdated:(unsigned long long)arg2 playerState:(FNFPlayerInternalState)arg3 loggingContext:(id)arg4 ;
-(id)initWithDisplayEngine:(id)arg1 ;
-(id)initWithDisplayEngine:(id)arg1 config:(SCD_Struct_FN46)arg2 asyncTimebase:(BOOL)arg3 enableOpus:(BOOL)arg4 ;
-(id)initWithDisplayEngine:(id)arg1 clock:(id)arg2 config:(SCD_Struct_FN46)arg3 asyncTimebase:(BOOL)arg4 enableOpus:(BOOL)arg5 ;
-(void)pauseWithPauseReason:(int)arg1 ;
-(void)setCaptionParser:(id)arg1 ;
-(void)setAudioDecoder:(id)arg1 ;
-(void)replaceCurrentItemWithPlayerItem:(id)arg1 loggingContext:(id)arg2 ;
-(void)setShowCaptions:(BOOL)arg1 ;
-(void)setLiveTraceManager:(id)arg1 ;
-(BOOL)showCaptions;
-(SCD_Struct_IM9)lastStartingTime;
-(SCD_Struct_IM9)lastRequestedStartTime;
-(void)_flushTrailingSeekAsApplicable;
-(void)_removeSeekThrottlingTimer;
-(BOOL)_hasNotPerformedPreviousSeek;
-(void)_resetLastSeekTimeInterval;
-(void)addLevelMeterCallback:(/*^block*/id)arg1 timeInterval:(SCD_Struct_IM9)arg2 ;
-(void)removeLevelMeterCallback;
-(void)addRepresentationChangedCallback:(/*^block*/id)arg1 ;
-(void)protectedContentDetected:(BOOL)arg1 ;
-(void)_didConnectWithExternalScreen;
-(void)_didDisconnectWithExternalScreen;
-(void)_didChangeScreenCaptured;
-(void)seekToTime:(SCD_Struct_IM9)arg1 seekReason:(int)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)seekToTime:(SCD_Struct_IM9)arg1 toleranceBefore:(SCD_Struct_IM9)arg2 toleranceAfter:(SCD_Struct_IM9)arg3 seekReason:(int)arg4 ;
-(void)seekToTime:(SCD_Struct_IM9)arg1 toleranceBefore:(SCD_Struct_IM9)arg2 toleranceAfter:(SCD_Struct_IM9)arg3 seekReason:(int)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)seekToTime:(SCD_Struct_IM9)arg1 throttleRate:(double)arg2 toleranceBefore:(SCD_Struct_IM9)arg3 toleranceAfter:(SCD_Struct_IM9)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_addSeekThrottlingTimeObserverForInterval:(SCD_Struct_IM9)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)prepareToSeekWithTime:(SCD_Struct_IM9)arg1 callbackQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_dispatchWithPlayer:(id)arg1 playerInternalState:(FNFPlayerInternalState)arg2 loggingContext:(id)arg3 dispatchBlock:(/*^block*/id)arg4 ;
-(void)setPlayerStateUpdateListener:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(NSError *)error;
-(void)pause;
-(long long)status;
-(id)currentItem;
-(void)play;
-(SCD_Struct_IM9)currentTime;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(void)_applicationWillResignActive;
-(void)setMuted:(BOOL)arg1 ;
-(BOOL)isMuted;
-(void)removeTimeObserver:(id)arg1 ;
-(void)replaceCurrentItemWithPlayerItem:(id)arg1 ;
-(void)setAllowsExternalPlayback:(BOOL)arg1 ;
-(void)seekToTime:(SCD_Struct_IM9)arg1 toleranceBefore:(SCD_Struct_IM9)arg2 toleranceAfter:(SCD_Struct_IM9)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)allowsExternalPlayback;
-(id)addPeriodicTimeObserverForInterval:(SCD_Struct_IM9)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)seekToTime:(SCD_Struct_IM9)arg1 toleranceBefore:(SCD_Struct_IM9)arg2 toleranceAfter:(SCD_Struct_IM9)arg3 ;
-(void)seekToTime:(SCD_Struct_IM9)arg1 ;
-(void)seekToTime:(SCD_Struct_IM9)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_applicationDidBecomeActive;
-(void)setAudioEngine:(id)arg1 ;
@end

