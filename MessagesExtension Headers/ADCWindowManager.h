/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessagesExtension/MessagesExtension-Structs.h>
@class NSMutableArray, UIWindow, NSSet;

@interface ADCWindowManager : NSObject {

	BOOL _running;
	BOOL _killed;
	/*^block*/id _cleanupNotification;
	NSMutableArray* _stack;
	UIWindow* _initialWindow;
	NSMutableArray* _tasks;
	/*^block*/id _currentTask;
	unsigned long long _winIdents;
	id _scene;
	NSSet* _sessionIds;

}

@property (nonatomic,retain) NSMutableArray * stack;                    //@synthesize stack=_stack - In the implementation block
@property (nonatomic,retain) UIWindow * initialWindow;                  //@synthesize initialWindow=_initialWindow - In the implementation block
@property (nonatomic,retain) NSMutableArray * tasks;                    //@synthesize tasks=_tasks - In the implementation block
@property (nonatomic,copy) id currentTask;                              //@synthesize currentTask=_currentTask - In the implementation block
@property (assign,nonatomic) BOOL running;                              //@synthesize running=_running - In the implementation block
@property (assign,nonatomic) unsigned long long winIdents;              //@synthesize winIdents=_winIdents - In the implementation block
@property (assign,nonatomic,__weak) id scene;                           //@synthesize scene=_scene - In the implementation block
@property (nonatomic,retain) NSSet * sessionIds;                        //@synthesize sessionIds=_sessionIds - In the implementation block
@property (assign,nonatomic) BOOL killed;                               //@synthesize killed=_killed - In the implementation block
@property (nonatomic,copy) id cleanupNotification;                      //@synthesize cleanupNotification=_cleanupNotification - In the implementation block
@property (nonatomic,readonly) BOOL isIdle; 
-(BOOL)containsSession:(id)arg1 ;
-(void)setCleanupNotification:(id)arg1 ;
-(void)closeAll:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentController:(id)arg1 withSessionId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setSessionIds:(NSSet *)arg1 ;
-(void)sessionDestroyed:(id)arg1 ;
-(NSSet *)sessionIds;
-(void)setInitialWindow:(UIWindow *)arg1 ;
-(id)cleanupNotification;
-(void)presentController:(id)arg1 withSessionId:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)present:(id)arg1 withSessionId:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)killed;
-(void)finishCurrentTask;
-(void)nextTask;
-(void)updateSessionIds;
-(void)startNextTask;
-(unsigned long long)winIdents;
-(void)setWinIdents:(unsigned long long)arg1 ;
-(BOOL)isDisplayingForSession:(id)arg1 ;
-(id)retrieveInitialWindow;
-(void)prepareNewWindow:(id)arg1 ;
-(void)removeWindow:(id)arg1 ;
-(void)addTask:(/*^block*/id)arg1 withName:(id)arg2 ;
-(UIWindow *)initialWindow;
-(void)removeWindowInternal:(id)arg1 ;
-(void)closeWindowsWithSession:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)closeNextWindowWithSession:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)countWindowsDisplayedForSession:(id)arg1 ;
-(void)closeAllForSession:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setKilled:(BOOL)arg1 ;
-(id)init;
-(void)cleanup;
-(BOOL)running;
-(id)currentTask;
-(void)setCurrentTask:(id)arg1 ;
-(NSMutableArray *)tasks;
-(void)setTasks:(NSMutableArray *)arg1 ;
-(id)scene;
-(id)initWithScene:(id)arg1 ;
-(void)setStack:(NSMutableArray *)arg1 ;
-(NSMutableArray *)stack;
-(void)setScene:(id)arg1 ;
-(CGRect)screenBounds;
-(BOOL)isDisplaying;
-(void)setRunning:(BOOL)arg1 ;
-(BOOL)isIdle;
@end

