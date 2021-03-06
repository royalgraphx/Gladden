/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <MessagesExtension/FBAdVideoAdView.h>
#import <MessagesExtension/FBAdVideoRendererViewDelegate.h>
#import <MessagesExtension/FBInterstitialAdToolbarViewDelegate.h>
#import <MessagesExtension/FBAdSystemVolumeObserver.h>

@class FBAdTimer, UIButton, FBNativeAdDataModel, UIViewController, FBAdBlurredOverlayView, FBAdCTAButton, UIStackView, FBAdLabel, FBAdAudioMuteButton, FBGradientView, FBAdVideoPlayPauseButton, FBAdVideoProgressBar, NSLayoutConstraint, UIView, NSString;

@interface FBAdAdaptiveVideoAdView : FBAdVideoAdView <FBAdVideoRendererViewDelegate, FBInterstitialAdToolbarViewDelegate, FBAdSystemVolumeObserver> {

	BOOL _animating;
	BOOL _paused;
	BOOL _endVideoDetailsAnimated;
	BOOL _useNewToolbar;
	BOOL _showCta;
	BOOL _isExpanded;
	BOOL _videoWasPlayingWhenAppActive;
	BOOL _isRewardedAd;
	id _videoProgressTimingObserver;
	FBAdTimer* _toggleViewsTimer;
	UIButton* _replayButton;
	FBNativeAdDataModel* _adDataModel;
	UIViewController* _rootViewController;
	FBAdBlurredOverlayView* _blurredBackgroundView;
	FBAdCTAButton* _ctaButton;
	UIStackView* _metadataContainer;
	UIStackView* _advertiserStackView;
	UIStackView* _adverstiserSubStackView;
	FBAdLabel* _advertiserTitleLabel;
	FBAdAudioMuteButton* _audioMuteButton;
	FBGradientView* _toolbarGradientView;
	FBAdVideoPlayPauseButton* _playPauseButton;
	FBAdVideoProgressBar* _progressBar;
	FBAdLabel* _bodyLabel;
	FBAdLabel* _socialLabel;
	NSLayoutConstraint* _iconSizeConstraint;
	UIView* _portraitSpacer;
	UIView* _landscapeSpacer;
	SCD_Struct_IM9 _forcedViewTime;

}

@property (assign,nonatomic) BOOL animating;                                              //@synthesize animating=_animating - In the implementation block
@property (nonatomic,retain) id videoProgressTimingObserver;                              //@synthesize videoProgressTimingObserver=_videoProgressTimingObserver - In the implementation block
@property (nonatomic,retain) FBAdTimer * toggleViewsTimer;                                //@synthesize toggleViewsTimer=_toggleViewsTimer - In the implementation block
@property (assign,nonatomic) SCD_Struct_IM9 forcedViewTime;                               //@synthesize forcedViewTime=_forcedViewTime - In the implementation block
@property (assign,nonatomic) BOOL paused;                                                 //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic) BOOL endVideoDetailsAnimated;                                //@synthesize endVideoDetailsAnimated=_endVideoDetailsAnimated - In the implementation block
@property (assign,nonatomic) BOOL useNewToolbar;                                          //@synthesize useNewToolbar=_useNewToolbar - In the implementation block
@property (assign,nonatomic) BOOL showCta;                                                //@synthesize showCta=_showCta - In the implementation block
@property (assign,nonatomic) BOOL isExpanded;                                             //@synthesize isExpanded=_isExpanded - In the implementation block
@property (assign,nonatomic) BOOL videoWasPlayingWhenAppActive;                           //@synthesize videoWasPlayingWhenAppActive=_videoWasPlayingWhenAppActive - In the implementation block
@property (assign,nonatomic) BOOL isRewardedAd;                                           //@synthesize isRewardedAd=_isRewardedAd - In the implementation block
@property (nonatomic,retain) UIButton * replayButton;                                     //@synthesize replayButton=_replayButton - In the implementation block
@property (nonatomic,retain) FBNativeAdDataModel * adDataModel;                           //@synthesize adDataModel=_adDataModel - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * rootViewController;                //@synthesize rootViewController=_rootViewController - In the implementation block
@property (nonatomic,retain) FBAdBlurredOverlayView * blurredBackgroundView;              //@synthesize blurredBackgroundView=_blurredBackgroundView - In the implementation block
@property (nonatomic,retain) FBAdCTAButton * ctaButton;                                   //@synthesize ctaButton=_ctaButton - In the implementation block
@property (nonatomic,retain) UIStackView * metadataContainer;                             //@synthesize metadataContainer=_metadataContainer - In the implementation block
@property (nonatomic,retain) UIStackView * advertiserStackView;                           //@synthesize advertiserStackView=_advertiserStackView - In the implementation block
@property (nonatomic,retain) UIStackView * adverstiserSubStackView;                       //@synthesize adverstiserSubStackView=_adverstiserSubStackView - In the implementation block
@property (nonatomic,retain) FBAdLabel * advertiserTitleLabel;                            //@synthesize advertiserTitleLabel=_advertiserTitleLabel - In the implementation block
@property (nonatomic,retain) FBAdAudioMuteButton * audioMuteButton;                       //@synthesize audioMuteButton=_audioMuteButton - In the implementation block
@property (assign,nonatomic,__weak) FBGradientView * toolbarGradientView;                 //@synthesize toolbarGradientView=_toolbarGradientView - In the implementation block
@property (nonatomic,retain) FBAdVideoPlayPauseButton * playPauseButton;                  //@synthesize playPauseButton=_playPauseButton - In the implementation block
@property (nonatomic,retain) FBAdVideoProgressBar * progressBar;                          //@synthesize progressBar=_progressBar - In the implementation block
@property (nonatomic,retain) FBAdLabel * bodyLabel;                                       //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (nonatomic,retain) FBAdLabel * socialLabel;                                     //@synthesize socialLabel=_socialLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * iconSizeConstraint;                     //@synthesize iconSizeConstraint=_iconSizeConstraint - In the implementation block
@property (nonatomic,retain) UIView * portraitSpacer;                                     //@synthesize portraitSpacer=_portraitSpacer - In the implementation block
@property (nonatomic,retain) UIView * landscapeSpacer;                                    //@synthesize landscapeSpacer=_landscapeSpacer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)skipVideo;
-(void)resumeVideo;
-(id)viewControllerForPresentingModalView;
-(UIButton *)replayButton;
-(void)setReplayButton:(UIButton *)arg1 ;
-(void)setCtaButton:(FBAdCTAButton *)arg1 ;
-(FBAdCTAButton *)ctaButton;
-(FBNativeAdDataModel *)adDataModel;
-(id)funnel;
-(void)handleSystemVolumeChanged:(float)arg1 ;
-(void)interstitialAdToolbarDidTapAdInfo:(id)arg1 ;
-(void)interstitialAdToolbarDidClose:(id)arg1 withTouchData:(id)arg2 ;
-(void)interstitialAdToolbarDidTapAdChoices:(id)arg1 ;
-(void)interstitialAdToolbarDidCloseAdChoices:(id)arg1 ;
-(void)videoViewDidEnd:(id)arg1 ;
-(void)videoView:(id)arg1 didFailWithError:(id)arg2 ;
-(void)videoViewDidLoad:(id)arg1 ;
-(id)initWithAdDataModel:(id)arg1 placementDefinition:(id)arg2 videoReadyToDisplayBlock:(/*^block*/id)arg3 useNewToolbar:(BOOL)arg4 showCta:(BOOL)arg5 isRewardedAd:(BOOL)arg6 forcedViewTime:(SCD_Struct_IM9)arg7 rootViewController:(id)arg8 ;
-(id)videoRendererView;
-(FBGradientView *)toolbarGradientView;
-(FBAdAudioMuteButton *)audioMuteButton;
-(UIStackView *)advertiserStackView;
-(FBAdLabel *)socialLabel;
-(void)addVideoRendererProgressTimingObserver;
-(void)setupViewAndStartVideo:(BOOL)arg1 ;
-(void)startVideo:(BOOL)arg1 ;
-(void)removeVideoRendererProgressTimingObserver;
-(void)handleAudioMuteButtonTouch:(id)arg1 ;
-(void)cleanLayout;
-(void)didTouchCTA:(id)arg1 withEvent:(id)arg2 ;
-(void)didTouchCTAArea:(id)arg1 ;
-(void)didTouchReplayButton:(id)arg1 withEvent:(id)arg2 ;
-(void)prepareViewToBecomeInactive;
-(void)prepareViewToBecomeActive;
-(void)dispatchVideoEndedWithError:(id)arg1 ;
-(void)animateAdDetailsOnVideoEnd:(SCD_Struct_IM9)arg1 ;
-(void)cancelAnimateViews;
-(void)scheduleHideViewsAfter:(double)arg1 ;
-(void)animateHideViews;
-(void)animateShowViews;
-(void)toggleAllViews;
-(void)pauseVideoIfNeeded;
-(id)videoDataForFunnelLogging;
-(void)funnelLogPlayPauseButtonTapped;
-(void)funnelLogMuteButtonTapped;
-(void)funnelLogMute;
-(void)funnelLogUnMute;
-(void)funnelLogLeaveApp;
-(void)funnelLogBackToApp;
-(void)funnelLogReplayButtonClicked;
-(id)videoProgressTimingObserver;
-(void)setVideoProgressTimingObserver:(id)arg1 ;
-(FBAdTimer *)toggleViewsTimer;
-(void)setToggleViewsTimer:(FBAdTimer *)arg1 ;
-(SCD_Struct_IM9)forcedViewTime;
-(void)setForcedViewTime:(SCD_Struct_IM9)arg1 ;
-(BOOL)endVideoDetailsAnimated;
-(void)setEndVideoDetailsAnimated:(BOOL)arg1 ;
-(BOOL)useNewToolbar;
-(void)setUseNewToolbar:(BOOL)arg1 ;
-(BOOL)showCta;
-(void)setShowCta:(BOOL)arg1 ;
-(BOOL)videoWasPlayingWhenAppActive;
-(void)setVideoWasPlayingWhenAppActive:(BOOL)arg1 ;
-(BOOL)isRewardedAd;
-(void)setIsRewardedAd:(BOOL)arg1 ;
-(void)setAdDataModel:(FBNativeAdDataModel *)arg1 ;
-(void)setMetadataContainer:(UIStackView *)arg1 ;
-(void)setAdvertiserStackView:(UIStackView *)arg1 ;
-(UIStackView *)adverstiserSubStackView;
-(void)setAdverstiserSubStackView:(UIStackView *)arg1 ;
-(FBAdLabel *)advertiserTitleLabel;
-(void)setAdvertiserTitleLabel:(FBAdLabel *)arg1 ;
-(void)setAudioMuteButton:(FBAdAudioMuteButton *)arg1 ;
-(void)setToolbarGradientView:(FBGradientView *)arg1 ;
-(void)setSocialLabel:(FBAdLabel *)arg1 ;
-(UIView *)portraitSpacer;
-(void)setPortraitSpacer:(UIView *)arg1 ;
-(UIView *)landscapeSpacer;
-(void)setLandscapeSpacer:(UIView *)arg1 ;
-(void)dealloc;
-(SCD_Struct_IM9)duration;
-(id)logger;
-(BOOL)paused;
-(void)setPaused:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setRootViewController:(UIViewController *)arg1 ;
-(UIViewController *)rootViewController;
-(BOOL)isExpanded;
-(void)setIsExpanded:(BOOL)arg1 ;
-(void)setAnimating:(BOOL)arg1 ;
-(SCD_Struct_IM9)currentTime;
-(BOOL)animating;
-(FBAdLabel *)bodyLabel;
-(void)setBodyLabel:(FBAdLabel *)arg1 ;
-(UIStackView *)metadataContainer;
-(void)setProgressBar:(FBAdVideoProgressBar *)arg1 ;
-(FBAdVideoProgressBar *)progressBar;
-(void)setupUI;
-(id)toolbarView;
-(void)setPlayPauseButton:(FBAdVideoPlayPauseButton *)arg1 ;
-(FBAdVideoPlayPauseButton *)playPauseButton;
-(FBAdBlurredOverlayView *)blurredBackgroundView;
-(void)setBlurredBackgroundView:(FBAdBlurredOverlayView *)arg1 ;
-(void)setupNotifications;
-(NSLayoutConstraint *)iconSizeConstraint;
-(void)setIconSizeConstraint:(NSLayoutConstraint *)arg1 ;
-(void)replayVideo;
-(void)playPauseButtonTapped:(id)arg1 ;
-(void)backgroundTapped:(id)arg1 ;
@end

