/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <MessagesExtension/ALCarouselRenderingProtocol.h>

@class ALSdk, ALCarouselCardView, ALCarouselCardState, ALNativeAd, UIImageView, ALNativeAdVideoPlayer, ALNativeAdVideoView, UIButton, ALCarouselReplayOverlayView, NSString;

@interface ALCarouselMediaView : UIView <ALCarouselRenderingProtocol> {

	ALSdk* _sdk;
	ALCarouselCardView* _cardView;
	ALCarouselCardState* _cardState;
	ALNativeAd* _ad;
	UIImageView* _adImageView;
	ALNativeAdVideoPlayer* _videoPlayer;
	ALNativeAdVideoView* _videoView;
	UIButton* _muteButton;
	UIButton* _playButton;
	ALCarouselReplayOverlayView* _replayOverlayView;

}

@property (assign,nonatomic,__weak) ALSdk * sdk;                                           //@synthesize sdk=_sdk - In the implementation block
@property (nonatomic,retain) ALCarouselCardView * cardView;                                //@synthesize cardView=_cardView - In the implementation block
@property (nonatomic,retain) ALCarouselCardState * cardState;                              //@synthesize cardState=_cardState - In the implementation block
@property (nonatomic,retain) ALNativeAd * ad;                                              //@synthesize ad=_ad - In the implementation block
@property (nonatomic,retain) UIImageView * adImageView;                                    //@synthesize adImageView=_adImageView - In the implementation block
@property (nonatomic,retain) ALNativeAdVideoPlayer * videoPlayer;                          //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (assign,nonatomic,__weak) ALNativeAdVideoView * videoView;                       //@synthesize videoView=_videoView - In the implementation block
@property (nonatomic,retain) UIButton * muteButton;                                        //@synthesize muteButton=_muteButton - In the implementation block
@property (nonatomic,retain) UIButton * playButton;                                        //@synthesize playButton=_playButton - In the implementation block
@property (nonatomic,retain) ALCarouselReplayOverlayView * replayOverlayView;              //@synthesize replayOverlayView=_replayOverlayView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSdk:(ALSdk *)arg1 ;
-(ALSdk *)sdk;
-(void)appPaused:(id)arg1 ;
-(void)appResumed:(id)arg1 ;
-(id)percentViewed;
-(void)setAdImageView:(UIImageView *)arg1 ;
-(UIImageView *)adImageView;
-(void)didTapAdImage:(id)arg1 ;
-(ALCarouselReplayOverlayView *)replayOverlayView;
-(void)setReplayOverlayView:(ALCarouselReplayOverlayView *)arg1 ;
-(void)didTapReplayButton:(id)arg1 ;
-(void)didTapLearnMoreButton:(id)arg1 ;
-(void)reactivateIfNeeded;
-(void)renderViewForNativeAd:(id)arg1 cardState:(id)arg2 ;
-(void)createVideoPlayerIfNeeded;
-(void)clearView;
-(void)autoplayIfRequired;
-(void)playVideoIfInactive;
-(BOOL)isCurrentlyPlayingVideo;
-(void)seekToPosition:(double)arg1 ;
-(void)handleVideoStopPlaying;
-(void)handleClick;
-(void)setInactive;
-(double)currentVideoPosition;
-(id)frameForVideoAtCurrentPosition;
-(void)destroyVideoPlayer;
-(void)didTapPlayButton:(id)arg1 ;
-(void)didTapVideo:(id)arg1 ;
-(void)renderViewForNativeAd:(id)arg1 ;
-(id)initWithSdk:(id)arg1 parentView:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)refresh;
-(void)layoutSubviews;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setup;
-(void)setVideoView:(ALNativeAdVideoView *)arg1 ;
-(ALNativeAdVideoView *)videoView;
-(ALCarouselCardView *)cardView;
-(void)setCardView:(ALCarouselCardView *)arg1 ;
-(double)videoDuration;
-(ALNativeAd *)ad;
-(UIButton *)playButton;
-(void)setPlayButton:(UIButton *)arg1 ;
-(UIButton *)muteButton;
-(void)setVideoPlayer:(ALNativeAdVideoPlayer *)arg1 ;
-(void)setMuteButton:(UIButton *)arg1 ;
-(ALNativeAdVideoPlayer *)videoPlayer;
-(void)playerItemDidReachEnd:(id)arg1 ;
-(void)deactivateIfNeeded;
-(void)updateMuteState;
-(void)didTapMuteButton:(id)arg1 ;
-(void)setAd:(ALNativeAd *)arg1 ;
-(ALCarouselCardState *)cardState;
-(void)setCardState:(ALCarouselCardState *)arg1 ;
@end

