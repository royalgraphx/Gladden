/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <UIKitCore/UIView.h>
#import <MessagesExtension/FBAdVideoRendererViewDelegate.h>

@protocol FBInterstitialAdMediaViewDelegate;
@class FBNativeAdDataModel, UIImageView, FBAdTimer, FBAdVideoPlayPauseButton, FBAdVideoRendererView, NSNumber, NSString;

@interface FBInterstitialAdMediaView : UIView <FBAdVideoRendererViewDelegate> {

	float _volume;
	BOOL _animating;
	BOOL _videoLoaded;
	BOOL _videoEnded;
	BOOL _visible;
	FBNativeAdDataModel* _dataModel;
	id<FBInterstitialAdMediaViewDelegate> _delegate;
	UIImageView* _imageView;
	/*^block*/id _onTap;
	/*^block*/id _videoReadyToDisplay;
	FBAdTimer* _animationTimer;
	FBAdTimer* _viewOnScreenTimer;
	FBAdVideoPlayPauseButton* _playPauseButton;
	id _videoProgressTimingObserver;
	FBAdVideoRendererView* _videoRendererView;
	NSNumber* _cardIndex;
	NSNumber* _cardCount;
	SCD_Struct_IM9 _viewOnScreenTime;
	SCD_Struct_IM9 _unskippableTime;

}

@property (assign,nonatomic) BOOL animating;                                                     //@synthesize animating=_animating - In the implementation block
@property (nonatomic,retain) FBAdTimer * animationTimer;                                         //@synthesize animationTimer=_animationTimer - In the implementation block
@property (nonatomic,retain) FBAdTimer * viewOnScreenTimer;                                      //@synthesize viewOnScreenTimer=_viewOnScreenTimer - In the implementation block
@property (assign,nonatomic) SCD_Struct_IM9 viewOnScreenTime;                                    //@synthesize viewOnScreenTime=_viewOnScreenTime - In the implementation block
@property (assign,nonatomic,__weak) FBAdVideoPlayPauseButton * playPauseButton;                  //@synthesize playPauseButton=_playPauseButton - In the implementation block
@property (assign,nonatomic) BOOL videoLoaded;                                                   //@synthesize videoLoaded=_videoLoaded - In the implementation block
@property (nonatomic,retain) id videoProgressTimingObserver;                                     //@synthesize videoProgressTimingObserver=_videoProgressTimingObserver - In the implementation block
@property (assign,nonatomic,__weak) FBAdVideoRendererView * videoRendererView;                   //@synthesize videoRendererView=_videoRendererView - In the implementation block
@property (assign,nonatomic) SCD_Struct_IM9 unskippableTime;                                     //@synthesize unskippableTime=_unskippableTime - In the implementation block
@property (assign,nonatomic) BOOL videoEnded;                                                    //@synthesize videoEnded=_videoEnded - In the implementation block
@property (nonatomic,retain) NSNumber * cardIndex;                                               //@synthesize cardIndex=_cardIndex - In the implementation block
@property (nonatomic,retain) NSNumber * cardCount;                                               //@synthesize cardCount=_cardCount - In the implementation block
@property (assign,nonatomic) BOOL visible;                                                       //@synthesize visible=_visible - In the implementation block
@property (nonatomic,readonly) double aspectRatio; 
@property (nonatomic,readonly) SCD_Struct_IM9 currentTime; 
@property (nonatomic,__weak,readonly) FBNativeAdDataModel * dataModel;                           //@synthesize dataModel=_dataModel - In the implementation block
@property (assign,nonatomic,__weak) id<FBInterstitialAdMediaViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IM9 duration; 
@property (getter=isVideoStopped,nonatomic,readonly) BOOL videoStopped; 
@property (assign,nonatomic) float volume; 
@property (assign,nonatomic,__weak) UIImageView * imageView;                                     //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,copy) id onTap;                                                             //@synthesize onTap=_onTap - In the implementation block
@property (nonatomic,copy) id videoReadyToDisplay;                                               //@synthesize videoReadyToDisplay=_videoReadyToDisplay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)skippable;
-(void)videoViewDidEnd:(id)arg1 ;
-(void)videoView:(id)arg1 didFailWithError:(id)arg2 ;
-(void)videoViewDidLoad:(id)arg1 ;
-(FBAdVideoRendererView *)videoRendererView;
-(id)videoProgressTimingObserver;
-(void)setVideoProgressTimingObserver:(id)arg1 ;
-(void)setVideoRendererView:(FBAdVideoRendererView *)arg1 ;
-(void)loadAdFromDataModel:(id)arg1 placementDefinition:(id)arg2 ;
-(id)videoReadyToDisplay;
-(void)setVideoReadyToDisplay:(id)arg1 ;
-(NSNumber *)cardCount;
-(void)setCardCount:(NSNumber *)arg1 ;
-(void)videoViewTapped:(id)arg1 ;
-(void)registerLoaded;
-(SCD_Struct_IM9)skipRemainingTime;
-(BOOL)videoLoaded;
-(void)setVideoLoaded:(BOOL)arg1 ;
-(id)initWithDelegate:(id)arg1 audioMuted:(BOOL)arg2 ;
-(void)terminateAd;
-(void)addVideoProgressTimingObserver;
-(void)setPlayPauseButtonVisible:(BOOL)arg1 ;
-(double)getNaturalHeightForWidth:(double)arg1 ;
-(double)getNaturalWidthForHeight:(double)arg1 ;
-(void)applyNaturalHeight;
-(void)applyNaturalWidth;
-(void)hidePlayPauseButtonAnimated:(BOOL)arg1 ;
-(void)willBePresented;
-(void)didBecomeInvisible;
-(void)initOnScreenTimer;
-(void)loadAdFromDataModel:(id)arg1 placementDefinition:(id)arg2 cardIndex:(id)arg3 cardCount:(id)arg4 ;
-(void)removeVideoProgressTimingObserver;
-(void)scheduleHidePlayPauseButton;
-(void)showPlayPauseButtonAnimated:(BOOL)arg1 ;
-(void)togglePlayPauseButton;
-(FBAdTimer *)viewOnScreenTimer;
-(void)setViewOnScreenTimer:(FBAdTimer *)arg1 ;
-(SCD_Struct_IM9)viewOnScreenTime;
-(void)setViewOnScreenTime:(SCD_Struct_IM9)arg1 ;
-(SCD_Struct_IM9)unskippableTime;
-(void)setUnskippableTime:(SCD_Struct_IM9)arg1 ;
-(BOOL)videoEnded;
-(void)setVideoEnded:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(id<FBInterstitialAdMediaViewDelegate>)delegate;
-(void)setDelegate:(id<FBInterstitialAdMediaViewDelegate>)arg1 ;
-(SCD_Struct_IM9)duration;
-(id)logger;
-(double)aspectRatio;
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)setAnimating:(BOOL)arg1 ;
-(SCD_Struct_IM9)currentTime;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(BOOL)animating;
-(FBAdTimer *)animationTimer;
-(void)setAnimationTimer:(FBAdTimer *)arg1 ;
-(void)playVideo;
-(void)setPlayPauseButton:(FBAdVideoPlayPauseButton *)arg1 ;
-(FBAdVideoPlayPauseButton *)playPauseButton;
-(FBNativeAdDataModel *)dataModel;
-(id)onTap;
-(void)setOnTap:(id)arg1 ;
-(void)pauseVideo;
-(BOOL)isVideoStopped;
-(void)setupNotifications;
-(void)cancelAnimation;
-(void)didBecomeVisible;
-(void)playPauseButtonTapped:(id)arg1 ;
-(void)setCardIndex:(NSNumber *)arg1 ;
-(NSNumber *)cardIndex;
@end

