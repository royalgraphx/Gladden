/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAdViewabilityValidatorDelegate;
#import <MessagesExtension/MessagesExtension-Structs.h>
@class NSObject, FBAdTimer, UIView, NSMutableDictionary, NSString;

@interface FBAdViewabilityValidator : NSObject {

	recursive_mutex _historyLock;
	BOOL _viewOnScreenNotificationFinished;
	BOOL _observingNotifications;
	BOOL _started;
	NSObject*<FBAdViewabilityValidatorDelegate> _delegate;
	long long _currentStatus;
	double _lastViewabilityPercentage;
	FBAdTimer* _checkViewabilityTimer;
	UIView* _view;
	long long _minViewabilityPercentage;
	long long _tickDuration;
	long long _currentTickCount;
	double _initialDelay;
	double _checkInterval;
	NSMutableDictionary* _viewabilityHistory;
	NSString* _requestId;

}

@property (nonatomic,retain) FBAdTimer * checkViewabilityTimer;                                                            //@synthesize checkViewabilityTimer=_checkViewabilityTimer - In the implementation block
@property (assign,nonatomic,__weak) UIView * view;                                                                         //@synthesize view=_view - In the implementation block
@property (assign,getter=isviewOnScreenNotificationFinished,nonatomic) BOOL viewOnScreenNotificationFinished;              //@synthesize viewOnScreenNotificationFinished=_viewOnScreenNotificationFinished - In the implementation block
@property (assign,getter=isObservingNotifications,nonatomic) BOOL observingNotifications;                                  //@synthesize observingNotifications=_observingNotifications - In the implementation block
@property (assign,nonatomic) long long minViewabilityPercentage;                                                           //@synthesize minViewabilityPercentage=_minViewabilityPercentage - In the implementation block
@property (assign,nonatomic) long long tickDuration;                                                                       //@synthesize tickDuration=_tickDuration - In the implementation block
@property (assign) long long currentTickCount;                                                                             //@synthesize currentTickCount=_currentTickCount - In the implementation block
@property (assign,nonatomic) double initialDelay;                                                                          //@synthesize initialDelay=_initialDelay - In the implementation block
@property (assign,nonatomic) double checkInterval;                                                                         //@synthesize checkInterval=_checkInterval - In the implementation block
@property (assign) long long currentStatus;                                                                                //@synthesize currentStatus=_currentStatus - In the implementation block
@property (assign) double lastViewabilityPercentage;                                                                       //@synthesize lastViewabilityPercentage=_lastViewabilityPercentage - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * viewabilityHistory;                                                     //@synthesize viewabilityHistory=_viewabilityHistory - In the implementation block
@property (nonatomic,copy) NSString * requestId;                                                                           //@synthesize requestId=_requestId - In the implementation block
@property (assign,nonatomic) BOOL started;                                                                                 //@synthesize started=_started - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<FBAdViewabilityValidatorDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,copy,readonly) NSString * viewabilityHistoryJSON; 
+(void)initialize;
-(void)checkViewability;
-(id)funnel;
-(long long)minViewabilityPercentage;
-(void)setMinViewabilityPercentage:(long long)arg1 ;
-(id)initWithView:(id)arg1 withMinViewability:(long long)arg2 ;
-(id)initWithView:(id)arg1 withInterval:(double)arg2 withInitialDelay:(double)arg3 withMinViewability:(long long)arg4 withTickDuration:(long long)arg5 requestId:(id)arg6 ;
-(void)addHistoryEvent:(long long)arg1 ;
-(NSMutableDictionary *)viewabilityHistory;
-(NSString *)viewabilityHistoryJSON;
-(id)logSuccess:(BOOL)arg1 withStatus:(long long)arg2 withViewabilityPercentage:(double)arg3 ;
-(void)isViewOnScreenWithBlock:(/*^block*/id)arg1 ;
-(void)updateCurrentStatus:(long long)arg1 ;
-(void)sendViewNotification:(long long)arg1 ;
-(void)scheduleViewabilityCheck;
-(void)scheduleViewabilityCheckWithInterval:(double)arg1 withInitialDelay:(double)arg2 ;
-(void)stopViewabilityCheck;
-(void)stopViewabilityCheckAndStopObservingNotifications:(BOOL)arg1 ;
-(void)onApplicationBackgrounded;
-(void)onApplicationForegrounded;
-(void)stopObservingNotifications;
-(double)lastViewabilityPercentage;
-(void)setLastViewabilityPercentage:(double)arg1 ;
-(FBAdTimer *)checkViewabilityTimer;
-(void)setCheckViewabilityTimer:(FBAdTimer *)arg1 ;
-(BOOL)isviewOnScreenNotificationFinished;
-(void)setViewOnScreenNotificationFinished:(BOOL)arg1 ;
-(BOOL)isObservingNotifications;
-(void)setObservingNotifications:(BOOL)arg1 ;
-(long long)tickDuration;
-(void)setTickDuration:(long long)arg1 ;
-(long long)currentTickCount;
-(void)setCurrentTickCount:(long long)arg1 ;
-(double)checkInterval;
-(void)setCheckInterval:(double)arg1 ;
-(void)setViewabilityHistory:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(BOOL)isValid;
-(NSObject*<FBAdViewabilityValidatorDelegate>)delegate;
-(void)setDelegate:(NSObject*<FBAdViewabilityValidatorDelegate>)arg1 ;
-(BOOL)started;
-(NSString *)requestId;
-(void)resumeTimer;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(void)invalidateTimer;
-(void)setStarted:(BOOL)arg1 ;
-(void)setCurrentStatus:(long long)arg1 ;
-(long long)currentStatus;
-(double)initialDelay;
-(void)setInitialDelay:(double)arg1 ;
-(void)setRequestId:(NSString *)arg1 ;
-(void)startObservingNotifications;
@end

