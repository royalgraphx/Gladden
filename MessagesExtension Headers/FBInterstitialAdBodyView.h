/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <UIKitCore/UIView.h>
#import <MessagesExtension/FBInterstitialAdMediaViewDelegate.h>
#import <MessagesExtension/FBAdViewabilityValidatorDelegate.h>
#import <MessagesExtension/FBAdSystemVolumeObserver.h>
#import <MessagesExtension/FBAdDisplayable.h>

@protocol FBAdDisplayableViewDelegate;
@class FBNativeAdDataModel, FBNativeAdMultiProductDataModel, FBAdPlacementDefinition, FBAdAudioMuteButton, FBAdCTAButton, FBInterstitialAdTextView, FBInterstitialAdMediaView, FBGradientView, FBAdVideoProgressBar, UIView, FBAdViewabilityValidator, NSNumber, UITapGestureRecognizer, NSURL, NSString;

@interface FBInterstitialAdBodyView : UIView <FBInterstitialAdMediaViewDelegate, FBAdViewabilityValidatorDelegate, FBAdSystemVolumeObserver, FBAdDisplayable> {

	BOOL _preventCarouselTextTruncationInPortrait;
	BOOL _preventCarouselVideoAutoplay;
	BOOL _canPlayVideo;
	BOOL _impressionSent;
	BOOL _videoPlaybackInterrupted;
	BOOL _videoHasStartedPlaying;
	id<FBAdDisplayableViewDelegate> _delegate;
	/*^block*/id _preferredOverlayTextColorTypeChanged;
	/*^block*/id _onRequestToggleOverlayViews;
	FBNativeAdDataModel* _dataModel;
	FBNativeAdMultiProductDataModel* _multiProductDataModel;
	FBAdPlacementDefinition* _placementDefinition;
	FBAdAudioMuteButton* _audioMuteButton;
	FBAdCTAButton* _callToActionButton;
	FBInterstitialAdTextView* _textContainerView;
	FBInterstitialAdMediaView* _mediaView;
	FBGradientView* _topGradientView;
	FBGradientView* _bottomGradientView;
	FBAdVideoProgressBar* _progressBarView;
	UIView* _mediaViewShadowView;
	FBAdViewabilityValidator* _viewabilityValidator;
	NSNumber* _carouselPageNumber;
	NSNumber* _carouselTotalPages;
	UITapGestureRecognizer* _ctaAreaTapGestureRecognizer;
	UIEdgeInsets _contentInset;

}

@property (nonatomic,__weak,readonly) FBNativeAdDataModel * dataModel;                                      //@synthesize dataModel=_dataModel - In the implementation block
@property (nonatomic,__weak,readonly) FBNativeAdMultiProductDataModel * multiProductDataModel;              //@synthesize multiProductDataModel=_multiProductDataModel - In the implementation block
@property (nonatomic,readonly) FBAdPlacementDefinition * placementDefinition;                               //@synthesize placementDefinition=_placementDefinition - In the implementation block
@property (assign,nonatomic,__weak) FBAdAudioMuteButton * audioMuteButton;                                  //@synthesize audioMuteButton=_audioMuteButton - In the implementation block
@property (assign,nonatomic,__weak) FBAdCTAButton * callToActionButton;                                     //@synthesize callToActionButton=_callToActionButton - In the implementation block
@property (assign,nonatomic,__weak) FBInterstitialAdTextView * textContainerView;                           //@synthesize textContainerView=_textContainerView - In the implementation block
@property (assign,nonatomic,__weak) FBInterstitialAdMediaView * mediaView;                                  //@synthesize mediaView=_mediaView - In the implementation block
@property (assign,nonatomic,__weak) FBGradientView * topGradientView;                                       //@synthesize topGradientView=_topGradientView - In the implementation block
@property (assign,nonatomic,__weak) FBGradientView * bottomGradientView;                                    //@synthesize bottomGradientView=_bottomGradientView - In the implementation block
@property (assign,nonatomic,__weak) FBAdVideoProgressBar * progressBarView;                                 //@synthesize progressBarView=_progressBarView - In the implementation block
@property (assign,nonatomic,__weak) UIView * mediaViewShadowView;                                           //@synthesize mediaViewShadowView=_mediaViewShadowView - In the implementation block
@property (nonatomic,retain) FBAdViewabilityValidator * viewabilityValidator;                               //@synthesize viewabilityValidator=_viewabilityValidator - In the implementation block
@property (assign,nonatomic) BOOL impressionSent;                                                           //@synthesize impressionSent=_impressionSent - In the implementation block
@property (nonatomic,retain) NSNumber * carouselPageNumber;                                                 //@synthesize carouselPageNumber=_carouselPageNumber - In the implementation block
@property (nonatomic,retain) NSNumber * carouselTotalPages;                                                 //@synthesize carouselTotalPages=_carouselTotalPages - In the implementation block
@property (assign,nonatomic) BOOL videoPlaybackInterrupted;                                                 //@synthesize videoPlaybackInterrupted=_videoPlaybackInterrupted - In the implementation block
@property (assign,nonatomic) BOOL videoHasStartedPlaying;                                                   //@synthesize videoHasStartedPlaying=_videoHasStartedPlaying - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * ctaAreaTapGestureRecognizer;                          //@synthesize ctaAreaTapGestureRecognizer=_ctaAreaTapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) NSURL * commandURL; 
@property (assign,nonatomic) UIEdgeInsets contentInset;                                                     //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) BOOL preventCarouselTextTruncationInPortrait;                                  //@synthesize preventCarouselTextTruncationInPortrait=_preventCarouselTextTruncationInPortrait - In the implementation block
@property (assign,nonatomic) BOOL preventCarouselVideoAutoplay;                                             //@synthesize preventCarouselVideoAutoplay=_preventCarouselVideoAutoplay - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IM9 currentTime; 
@property (assign,nonatomic) BOOL canPlayVideo;                                                             //@synthesize canPlayVideo=_canPlayVideo - In the implementation block
@property (assign,nonatomic,__weak) id<FBAdDisplayableViewDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id preferredOverlayTextColorTypeChanged;                                         //@synthesize preferredOverlayTextColorTypeChanged=_preferredOverlayTextColorTypeChanged - In the implementation block
@property (nonatomic,copy) id onRequestToggleOverlayViews;                                                  //@synthesize onRequestToggleOverlayViews=_onRequestToggleOverlayViews - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showAd;
-(void)setCallToActionButton:(FBAdCTAButton *)arg1 ;
-(void)layoutProgressBar;
-(FBAdPlacementDefinition *)placementDefinition;
-(void)handleSystemVolumeChanged:(float)arg1 ;
-(FBAdAudioMuteButton *)audioMuteButton;
-(void)handleAudioMuteButtonTouch:(id)arg1 ;
-(void)didTouchCTAArea:(id)arg1 ;
-(void)setAudioMuteButton:(FBAdAudioMuteButton *)arg1 ;
-(BOOL)viewabilityValidator:(id)arg1 checkedWithStatus:(long long)arg2 ;
-(FBAdViewabilityValidator *)viewabilityValidator;
-(void)setViewabilityValidator:(FBAdViewabilityValidator *)arg1 ;
-(void)adClicked:(id)arg1 withEvent:(id)arg2 ;
-(UITapGestureRecognizer *)ctaAreaTapGestureRecognizer;
-(void)setImpressionSent:(BOOL)arg1 ;
-(void)loadAdFromDataModel:(id)arg1 placementDefinition:(id)arg2 ;
-(void)loadAdFromDataModel:(id)arg1 placementDefinition:(id)arg2 carouselPageNumber:(id)arg3 totalPages:(id)arg4 ;
-(void)destroyAd;
-(void)setPlaying:(BOOL)arg1 forced:(BOOL)arg2 ;
-(void)configureVolume:(double)arg1 ;
-(BOOL)criteriasForLoggingImpressionForVideoIsMet;
-(BOOL)isAutoplay;
-(void)interstitialAdMediaViewDidHidePlayButton:(id)arg1 ;
-(void)interstitialAdMediaViewDidShowPlayButton:(id)arg1 ;
-(void)interstitialAdMediaViewDidStartVideo:(id)arg1 ;
-(void)interstitialAdMediaViewDidPauseVideo:(id)arg1 ;
-(void)interstitialAdMediaViewDidLoad:(id)arg1 ;
-(void)interstitialAdMediaViewDidProgress:(id)arg1 ;
-(void)interstitialAdMediaViewDidEnd:(id)arg1 ;
-(void)interstitialAdMediaView:(id)arg1 didFailWithError:(id)arg2 ;
-(NSURL *)commandURL;
-(UIView *)mediaViewShadowView;
-(void)setupMediaViewAndAddAsSubviewWithAudioMutedIfNil:(BOOL)arg1 ;
-(void)setupViewabilityValidationIfNeeded;
-(double)intrinsicCarouselCardHeightForWidth:(double)arg1 ;
-(void)layoutGradients;
-(void)layoutMediaViewShadowView;
-(void)layoutCTAForceCondensedLayout:(BOOL)arg1 ;
-(BOOL)isCallToActionPresent;
-(void)putGestureRecogniserToMediaViewIfNeeded;
-(void)layoutMediaView;
-(void)layoutAudioMuteButton;
-(BOOL)isVideoCarouselPage;
-(BOOL)videoAdHasAudio;
-(void)bringSubViewsToFront;
-(BOOL)isMediaViewFullscreen;
-(void)toggleAdDetailsForceShow:(BOOL)arg1 ;
-(BOOL)shouldAutoplayCarousel;
-(void)styleProgressBar;
-(void)styleMediaView;
-(void)styleTextView;
-(void)styleCTAForceCondensedLayout:(BOOL)arg1 ;
-(void)styleToolbar;
-(void)logImpressionIfCriteriasAreFulfilled;
-(BOOL)preventCarouselTextTruncationInPortrait;
-(void)setPreventCarouselTextTruncationInPortrait:(BOOL)arg1 ;
-(BOOL)preventCarouselVideoAutoplay;
-(void)setPreventCarouselVideoAutoplay:(BOOL)arg1 ;
-(id)preferredOverlayTextColorTypeChanged;
-(void)setPreferredOverlayTextColorTypeChanged:(id)arg1 ;
-(id)onRequestToggleOverlayViews;
-(void)setOnRequestToggleOverlayViews:(id)arg1 ;
-(FBNativeAdMultiProductDataModel *)multiProductDataModel;
-(void)setMediaViewShadowView:(UIView *)arg1 ;
-(BOOL)impressionSent;
-(NSNumber *)carouselPageNumber;
-(void)setCarouselPageNumber:(NSNumber *)arg1 ;
-(NSNumber *)carouselTotalPages;
-(void)setCarouselTotalPages:(NSNumber *)arg1 ;
-(BOOL)videoPlaybackInterrupted;
-(void)setVideoPlaybackInterrupted:(BOOL)arg1 ;
-(BOOL)videoHasStartedPlaying;
-(void)setVideoHasStartedPlaying:(BOOL)arg1 ;
-(void)setCtaAreaTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)dealloc;
-(id<FBAdDisplayableViewDelegate>)delegate;
-(void)setDelegate:(id<FBAdDisplayableViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInset;
-(SCD_Struct_IM9)currentTime;
-(FBInterstitialAdMediaView *)mediaView;
-(void)setMediaView:(FBInterstitialAdMediaView *)arg1 ;
-(void)setTextContainerView:(FBInterstitialAdTextView *)arg1 ;
-(FBInterstitialAdTextView *)textContainerView;
-(double)titleFontSize;
-(BOOL)isVideoAd;
-(FBNativeAdDataModel *)dataModel;
-(double)subtitleFontSize;
-(void)setCanPlayVideo:(BOOL)arg1 ;
-(BOOL)canPlayVideo;
-(void)setupNotifications;
-(BOOL)isCarousel;
-(CGRect)insetBounds;
-(void)setTopGradientView:(FBGradientView *)arg1 ;
-(FBGradientView *)topGradientView;
-(void)setBottomGradientView:(FBGradientView *)arg1 ;
-(FBGradientView *)bottomGradientView;
-(FBAdVideoProgressBar *)progressBarView;
-(void)setProgressBarView:(FBAdVideoProgressBar *)arg1 ;
-(FBAdCTAButton *)callToActionButton;
@end
