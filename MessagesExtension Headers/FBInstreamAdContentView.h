/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <MessagesExtension/FBVideoAdContentView.h>
#import <MessagesExtension/FBInstreamAdVideoViewDelegate.h>
#import <MessagesExtension/FBAdChoicesViewDelegate.h>
#import <MessagesExtension/FBAdCommandProcessorDelegate.h>

@class FBAdChoicesView, FBInstreamCallToActionView, FBAdCommandProcessor, FBAdLabel, UIViewController, FBInstreamSkipButtonView, FBInstreamAdVideoView, NSString;

@interface FBInstreamAdContentView : FBVideoAdContentView <FBInstreamAdVideoViewDelegate, FBAdChoicesViewDelegate, FBAdCommandProcessorDelegate> {

	BOOL _imagesLoaded;
	BOOL _paused;
	BOOL _rootViewControllerPresenting;
	BOOL _videoLoaded;
	FBAdChoicesView* _adChoicesView;
	FBInstreamCallToActionView* _callToActionView;
	FBAdCommandProcessor* _commandProcessor;
	FBAdLabel* _countdownView;
	unsigned long long _lastRemainingTimeSeconds;
	UIViewController* _rootViewController;
	FBInstreamSkipButtonView* _skipButtonView;
	FBInstreamAdVideoView* _videoView;
	SCD_Struct_IM9 _skippableTime;

}

@property (nonatomic,retain) FBAdChoicesView * adChoicesView;                                        //@synthesize adChoicesView=_adChoicesView - In the implementation block
@property (nonatomic,retain) FBInstreamCallToActionView * callToActionView;                          //@synthesize callToActionView=_callToActionView - In the implementation block
@property (nonatomic,retain) FBAdCommandProcessor * commandProcessor;                                //@synthesize commandProcessor=_commandProcessor - In the implementation block
@property (nonatomic,retain) FBAdLabel * countdownView;                                              //@synthesize countdownView=_countdownView - In the implementation block
@property (assign,nonatomic) BOOL imagesLoaded;                                                      //@synthesize imagesLoaded=_imagesLoaded - In the implementation block
@property (assign,nonatomic) unsigned long long lastRemainingTimeSeconds;                            //@synthesize lastRemainingTimeSeconds=_lastRemainingTimeSeconds - In the implementation block
@property (assign,nonatomic) BOOL paused;                                                            //@synthesize paused=_paused - In the implementation block
@property (nonatomic,retain) UIViewController * rootViewController;                                  //@synthesize rootViewController=_rootViewController - In the implementation block
@property (assign,nonatomic) BOOL rootViewControllerPresenting;                                      //@synthesize rootViewControllerPresenting=_rootViewControllerPresenting - In the implementation block
@property (assign,nonatomic) SCD_Struct_IM9 skippableTime;                                           //@synthesize skippableTime=_skippableTime - In the implementation block
@property (nonatomic,retain) FBInstreamSkipButtonView * skipButtonView;                              //@synthesize skipButtonView=_skipButtonView - In the implementation block
@property (assign,nonatomic) BOOL videoLoaded;                                                       //@synthesize videoLoaded=_videoLoaded - In the implementation block
@property (nonatomic,retain) FBInstreamAdVideoView * videoView;                                      //@synthesize videoView=_videoView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController * viewControllerForPresentingModalView; 
-(BOOL)skippable;
-(UIViewController *)viewControllerForPresentingModalView;
-(void)viewControllerDismissed:(id)arg1 ;
-(id)commandProcessorTouchInformation:(id)arg1 ;
-(void)videoViewDidEnd:(id)arg1 ;
-(void)videoView:(id)arg1 didFailWithError:(id)arg2 ;
-(void)videoViewDidLoad:(id)arg1 ;
-(void)cleanLayout;
-(void)loadAdFromDataModel:(id)arg1 placementDefinition:(id)arg2 ;
-(void)adChoicesView:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)adChoicesView:(id)arg1 viewControllerDismissed:(id)arg2 ;
-(void)videoViewTapped:(id)arg1 ;
-(void)videoViewDidProgress:(id)arg1 ;
-(BOOL)isAutoplay;
-(void)registerLoaded;
-(void)startFromRootViewController:(id)arg1 ;
-(void)pauseAndTellDelegate;
-(void)playAndTellDelegate;
-(SCD_Struct_IM9)skipRemainingTime;
-(void)addAdChoicesView;
-(void)addCountdownView;
-(void)addCallToActionView;
-(void)addSkipButton;
-(void)callToActionViewTapped:(id)arg1 ;
-(void)skipButtonViewTapped:(id)arg1 ;
-(unsigned long long)skipRemainingSeconds;
-(void)updateCountdownText;
-(void)updateSkipButtonRemainingTime;
-(FBAdChoicesView *)adChoicesView;
-(void)setAdChoicesView:(FBAdChoicesView *)arg1 ;
-(FBInstreamCallToActionView *)callToActionView;
-(void)setCallToActionView:(FBInstreamCallToActionView *)arg1 ;
-(BOOL)imagesLoaded;
-(void)setImagesLoaded:(BOOL)arg1 ;
-(unsigned long long)lastRemainingTimeSeconds;
-(void)setLastRemainingTimeSeconds:(unsigned long long)arg1 ;
-(BOOL)rootViewControllerPresenting;
-(void)setRootViewControllerPresenting:(BOOL)arg1 ;
-(SCD_Struct_IM9)skippableTime;
-(void)setSkippableTime:(SCD_Struct_IM9)arg1 ;
-(FBInstreamSkipButtonView *)skipButtonView;
-(void)setSkipButtonView:(FBInstreamSkipButtonView *)arg1 ;
-(BOOL)videoLoaded;
-(void)setVideoLoaded:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)pause;
-(SCD_Struct_IM9)duration;
-(BOOL)paused;
-(void)setPaused:(BOOL)arg1 ;
-(void)play;
-(void)layoutSubviews;
-(void)setRootViewController:(UIViewController *)arg1 ;
-(UIViewController *)rootViewController;
-(SCD_Struct_IM9)currentTime;
-(float)volume;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)setVideoView:(FBInstreamAdVideoView *)arg1 ;
-(FBInstreamAdVideoView *)videoView;
-(void)willPresentViewController:(id)arg1 ;
-(void)removeObservers;
-(void)addObservers;
-(FBAdLabel *)countdownView;
-(void)setCountdownView:(FBAdLabel *)arg1 ;
-(void)processCommand:(id)arg1 ;
-(FBAdCommandProcessor *)commandProcessor;
-(void)setCommandProcessor:(FBAdCommandProcessor *)arg1 ;
@end

