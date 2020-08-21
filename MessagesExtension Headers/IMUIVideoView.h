/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <MessagesExtension/IMUIView.h>
#import <MessagesExtension/IMTimerDelegate.h>
#import <MessagesExtension/IMUIInflator.h>

@protocol IMUIVideoViewDelegate;
@class AVPlayerItem, NSArray, NSNumber, IMUIVideoProperties, UITapGestureRecognizer, UIButton, IMTimerManager, AVPlayer, AVPlayerLayer, NSString;

@interface IMUIVideoView : IMUIView <IMTimerDelegate, IMUIInflator> {

	BOOL _isVideoPaused;
	BOOL _isFullScreen;
	BOOL _isVideoEnded;
	BOOL _touchToFullScreen;
	BOOL _autoplay;
	BOOL _playMuted;
	BOOL _autoReplay;
	BOOL _fallbackTimersRegistered;
	BOOL _rateObserverAdded;
	BOOL _fallbackTimerAdded;
	BOOL _pauseTimerAdded;
	BOOL _fgBgKvoRegistered;
	BOOL _audioRerouteKvoRegistered;
	float _pauseAfter;
	id<IMUIVideoViewDelegate> _delegate;
	AVPlayerItem* _playerItem;
	NSArray* _viewabilityTimes;
	NSNumber* _isVideoMuted;
	double _playerRate;
	double _minViewablePercentage;
	double _currentViewedPercentage;
	NSNumber* _completeAfter;
	IMUIVideoProperties* _properties;
	UITapGestureRecognizer* _gestureRecognizer;
	id _boundaryObserver;
	id _viewabilityBoundaryObserver;
	id _completionBoundaryObserver;
	UIButton* _volumeCtrlButton;
	IMTimerManager* _fallbackTimer;
	IMTimerManager* _pauseTimer;

}

@property (nonatomic,retain) IMUIVideoProperties * properties;                        //@synthesize properties=_properties - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (nonatomic,retain) id boundaryObserver;                                     //@synthesize boundaryObserver=_boundaryObserver - In the implementation block
@property (nonatomic,retain) id viewabilityBoundaryObserver;                          //@synthesize viewabilityBoundaryObserver=_viewabilityBoundaryObserver - In the implementation block
@property (nonatomic,retain) id completionBoundaryObserver;                           //@synthesize completionBoundaryObserver=_completionBoundaryObserver - In the implementation block
@property (assign,nonatomic) BOOL touchToFullScreen;                                  //@synthesize touchToFullScreen=_touchToFullScreen - In the implementation block
@property (assign,nonatomic) BOOL autoplay;                                           //@synthesize autoplay=_autoplay - In the implementation block
@property (assign,nonatomic) BOOL playMuted;                                          //@synthesize playMuted=_playMuted - In the implementation block
@property (assign,nonatomic) BOOL autoReplay;                                         //@synthesize autoReplay=_autoReplay - In the implementation block
@property (assign,nonatomic) BOOL isVideoPaused;                                      //@synthesize isVideoPaused=_isVideoPaused - In the implementation block
@property (assign,nonatomic) BOOL fallbackTimersRegistered;                           //@synthesize fallbackTimersRegistered=_fallbackTimersRegistered - In the implementation block
@property (nonatomic,retain) UIButton * volumeCtrlButton;                             //@synthesize volumeCtrlButton=_volumeCtrlButton - In the implementation block
@property (nonatomic,retain) IMTimerManager * fallbackTimer;                          //@synthesize fallbackTimer=_fallbackTimer - In the implementation block
@property (nonatomic,retain) IMTimerManager * pauseTimer;                             //@synthesize pauseTimer=_pauseTimer - In the implementation block
@property (assign,nonatomic) BOOL rateObserverAdded;                                  //@synthesize rateObserverAdded=_rateObserverAdded - In the implementation block
@property (assign,nonatomic) BOOL fallbackTimerAdded;                                 //@synthesize fallbackTimerAdded=_fallbackTimerAdded - In the implementation block
@property (assign,nonatomic) BOOL pauseTimerAdded;                                    //@synthesize pauseTimerAdded=_pauseTimerAdded - In the implementation block
@property (assign,nonatomic) BOOL fgBgKvoRegistered;                                  //@synthesize fgBgKvoRegistered=_fgBgKvoRegistered - In the implementation block
@property (assign,nonatomic) BOOL audioRerouteKvoRegistered;                          //@synthesize audioRerouteKvoRegistered=_audioRerouteKvoRegistered - In the implementation block
@property (retain) AVPlayer * player; 
@property (readonly) AVPlayerLayer * playerLayer; 
@property (assign,nonatomic,__weak) id<IMUIVideoViewDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AVPlayerItem * playerItem;                               //@synthesize playerItem=_playerItem - In the implementation block
@property (nonatomic,retain) NSArray * viewabilityTimes;                              //@synthesize viewabilityTimes=_viewabilityTimes - In the implementation block
@property (nonatomic,retain) NSNumber * isVideoMuted;                                 //@synthesize isVideoMuted=_isVideoMuted - In the implementation block
@property (assign,nonatomic) double playerRate;                                       //@synthesize playerRate=_playerRate - In the implementation block
@property (assign,nonatomic) BOOL isFullScreen;                                       //@synthesize isFullScreen=_isFullScreen - In the implementation block
@property (assign,nonatomic) BOOL isVideoEnded;                                       //@synthesize isVideoEnded=_isVideoEnded - In the implementation block
@property (assign,nonatomic) double minViewablePercentage;                            //@synthesize minViewablePercentage=_minViewablePercentage - In the implementation block
@property (readonly) double currentViewedPercentage;                                  //@synthesize currentViewedPercentage=_currentViewedPercentage - In the implementation block
@property (assign,nonatomic) float pauseAfter;                                        //@synthesize pauseAfter=_pauseAfter - In the implementation block
@property (nonatomic,retain) NSNumber * completeAfter;                                //@synthesize completeAfter=_completeAfter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
-(NSNumber *)isVideoMuted;
-(void)timerHitForManager:(id)arg1 ;
-(void)deregisterNotifications;
-(void)appEnteredBackground:(id)arg1 ;
-(void)appEnteredForeground:(id)arg1 ;
-(NSNumber *)completeAfter;
-(BOOL)playMuted;
-(void)setPlayMuted:(BOOL)arg1 ;
-(BOOL)touchToFullScreen;
-(void)setTouchToFullScreen:(BOOL)arg1 ;
-(BOOL)autoReplay;
-(void)setAutoReplay:(BOOL)arg1 ;
-(void)setCompleteAfter:(NSNumber *)arg1 ;
-(void)initializeRecycledView;
-(void)setViewabilityTimes:(NSArray *)arg1 ;
-(void)replacePlayer:(id)arg1 ;
-(void)setIsVideoMuted:(NSNumber *)arg1 ;
-(void)setMinViewablePercentage:(double)arg1 ;
-(void)prepareForRecycle;
-(void)reloadVideo;
-(void)setCurrentViewablePercentageAndAutoplay:(double)arg1 ;
-(double)currentViewedPercentage;
-(double)minViewablePercentage;
-(NSArray *)viewabilityTimes;
-(id)boundaryObserver;
-(void)setBoundaryObserver:(id)arg1 ;
-(void)checkAndRemovePlayerRateObserver;
-(void)checkAndRemoveFallbackTimer;
-(id)viewabilityBoundaryObserver;
-(void)setViewabilityBoundaryObserver:(id)arg1 ;
-(id)completionBoundaryObserver;
-(void)setCompletionBoundaryObserver:(id)arg1 ;
-(void)checkAndRemovePauseTimer;
-(void)checkAndAddPlayerRateObserver;
-(BOOL)isVideoEnded;
-(void)muteAndFireEvents:(BOOL)arg1 ;
-(void)checkAndStartFallbackTimerWithCurrentTime:(SCD_Struct_IM9)arg1 ;
-(void)checkAndStartPauseTimerWithDelayTime:(float)arg1 ;
-(void)setIsVideoEnded:(BOOL)arg1 ;
-(void)seekVideoToTime:(SCD_Struct_IM9)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)unmuteAndFireEvents:(BOOL)arg1 ;
-(UIButton *)volumeCtrlButton;
-(void)setVolumeCtrlButton:(UIButton *)arg1 ;
-(void)toggleMuteState;
-(BOOL)fgBgKvoRegistered;
-(void)setFgBgKvoRegistered:(BOOL)arg1 ;
-(void)checkAndRegisterAudioRerouteKvo;
-(void)setAudioRerouteKvoRegistered:(BOOL)arg1 ;
-(BOOL)audioRerouteKvoRegistered;
-(void)audioRouteChanged:(id)arg1 ;
-(BOOL)rateObserverAdded;
-(void)setRateObserverAdded:(BOOL)arg1 ;
-(BOOL)fallbackTimerAdded;
-(void)setFallbackTimerAdded:(BOOL)arg1 ;
-(BOOL)pauseTimerAdded;
-(void)setPauseTimerAdded:(BOOL)arg1 ;
-(void)didPlayToEnd;
-(void)checkAndFireVideoEnd;
-(void)videoStallDetected;
-(void)deregisterAudioRerouteKvo;
-(void)checkAndAutoplayIfRequired;
-(BOOL)fallbackTimersRegistered;
-(void)setFallbackTimersRegistered:(BOOL)arg1 ;
-(void)dealloc;
-(id<IMUIVideoViewDelegate>)delegate;
-(void)setDelegate:(id<IMUIVideoViewDelegate>)arg1 ;
-(void)pause;
-(void)resume;
-(void)stop;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(IMUIVideoProperties *)properties;
-(void)setProperties:(IMUIVideoProperties *)arg1 ;
-(id)initWithProperties:(id)arg1 ;
-(void)clearProperties;
-(IMTimerManager *)pauseTimer;
-(void)play;
-(void)setGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)gestureRecognizer;
-(BOOL)isFullScreen;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(AVPlayerLayer *)playerLayer;
-(AVPlayerItem *)playerItem;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(void)tapGesture:(id)arg1 ;
-(float)pauseAfter;
-(void)setPauseAfter:(float)arg1 ;
-(BOOL)autoplay;
-(void)setAutoplay:(BOOL)arg1 ;
-(id)addPeriodicTimeObserverForInterval:(SCD_Struct_IM9)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)isVideoPaused;
-(void)showMuteButton;
-(void)registerNotifications;
-(void)unmute;
-(void)playVideo;
-(void)setIsFullScreen:(BOOL)arg1 ;
-(void)mute;
-(void)pauseVideo;
-(void)setPauseTimer:(IMTimerManager *)arg1 ;
-(void)setIsVideoPaused:(BOOL)arg1 ;
-(IMTimerManager *)fallbackTimer;
-(void)setFallbackTimer:(IMTimerManager *)arg1 ;
-(void)setPlayerRate:(double)arg1 ;
-(double)playerRate;
-(void)updateMuteButton;
@end
