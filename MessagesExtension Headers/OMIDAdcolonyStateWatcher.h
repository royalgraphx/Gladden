/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OMIDAdcolonyStateWatcherDelegate;
@interface OMIDAdcolonyStateWatcher : NSObject {

	unsigned long long _appState;
	id<OMIDAdcolonyStateWatcherDelegate> _delegate;

}

@property (nonatomic,readonly) BOOL appIsActive; 
@property (nonatomic,readonly) unsigned long long appState;                                     //@synthesize appState=_appState - In the implementation block
@property (assign,nonatomic,__weak) id<OMIDAdcolonyStateWatcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)getInstance;
-(double)deviceVolume;
-(unsigned long long)appStateFromUIApplicationState:(long long)arg1 ;
-(void)onAppDidBecomeActive;
-(void)onAppWillResignActive;
-(void)onAppDidEnterBackground;
-(id)appStateString;
-(void)updateAppStateWithUIApplicationState:(long long)arg1 ;
-(void)adSessionDidBecomeActive:(id)arg1 ;
-(id<OMIDAdcolonyStateWatcherDelegate>)delegate;
-(void)setDelegate:(id<OMIDAdcolonyStateWatcherDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(unsigned long long)appState;
-(BOOL)appIsActive;
@end
