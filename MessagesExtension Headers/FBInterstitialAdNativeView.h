/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <UIKitCore/UIView.h>
#import <MessagesExtension/FBAdDisplayableViewDelegate.h>
#import <MessagesExtension/FBInterstitialAdToolbarViewDelegate.h>
#import <MessagesExtension/FBAdReportingCoordinatorDelegate.h>
#import <MessagesExtension/FBAdDisplayable.h>

@protocol FBAdDisplayableViewDelegate, FBAdDisplayable, FBAdFunnelLoggingDelegate;
@class FBNativeAdDataModel, FBInterstitialAdToolbarView, UIView, FBAdReportingCoordinator, FBGradientView, NSString;

@interface FBInterstitialAdNativeView : UIView <FBAdDisplayableViewDelegate, FBInterstitialAdToolbarViewDelegate, FBAdReportingCoordinatorDelegate, FBAdDisplayable> {

	id<FBAdDisplayableViewDelegate> _delegate;
	FBNativeAdDataModel* _dataModel;
	FBInterstitialAdToolbarView* _toolbarView;
	UIView*<FBAdDisplayable> _adContentView;
	FBAdReportingCoordinator* _reportingCoordinator;
	id<FBAdFunnelLoggingDelegate> _funnelLoggerDelegate;
	FBGradientView* _toolbarGradientView;

}

@property (nonatomic,retain) FBAdReportingCoordinator * reportingCoordinator;                        //@synthesize reportingCoordinator=_reportingCoordinator - In the implementation block
@property (assign,nonatomic,__weak) id<FBAdFunnelLoggingDelegate> funnelLoggerDelegate;              //@synthesize funnelLoggerDelegate=_funnelLoggerDelegate - In the implementation block
@property (nonatomic,retain) FBGradientView * toolbarGradientView;                                   //@synthesize toolbarGradientView=_toolbarGradientView - In the implementation block
@property (assign,nonatomic,__weak) id<FBAdDisplayableViewDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBNativeAdDataModel * dataModel;                                      //@synthesize dataModel=_dataModel - In the implementation block
@property (nonatomic,retain) FBInterstitialAdToolbarView * toolbarView;                              //@synthesize toolbarView=_toolbarView - In the implementation block
@property (assign,nonatomic,__weak) UIView*<FBAdDisplayable> adContentView;                          //@synthesize adContentView=_adContentView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL canPlayVideo; 
@property (nonatomic,readonly) SCD_Struct_IM9 currentTime; 
-(void)showAd;
-(UIView*<FBAdDisplayable>)adContentView;
-(void)setAdContentView:(UIView*<FBAdDisplayable>)arg1 ;
-(void)interstitialAdToolbarDidTapAdInfo:(id)arg1 ;
-(void)interstitialAdToolbarDidClose:(id)arg1 withTouchData:(id)arg2 ;
-(void)interstitialAdToolbarDidTapAdChoices:(id)arg1 ;
-(void)interstitialAdToolbarDidCloseAdChoices:(id)arg1 ;
-(FBGradientView *)toolbarGradientView;
-(void)setToolbarGradientView:(FBGradientView *)arg1 ;
-(FBAdReportingCoordinator *)reportingCoordinator;
-(void)setReportingCoordinator:(FBAdReportingCoordinator *)arg1 ;
-(BOOL)shouldUseInterstitialNewImageDesign;
-(void)adReportingCoordinatorDidCompleteFlow:(id)arg1 reason:(id)arg2 flowType:(long long)arg3 ;
-(void)adReportingCoordinatorDidCancelFlow:(id)arg1 ;
-(void)adReportingCoordinatorDidCloseWhyAmISeeingThis:(id)arg1 ;
-(void)addToolbarGradientView;
-(id<FBAdFunnelLoggingDelegate>)funnelLoggerDelegate;
-(void)setFunnelLoggerDelegate:(id<FBAdFunnelLoggingDelegate>)arg1 ;
-(void)animateViewOnFirstAppearance;
-(void)loadAdFromDataModel:(id)arg1 placementDefinition:(id)arg2 ;
-(void)loadAdFromDataModel:(id)arg1 placementDefinition:(id)arg2 carouselPageNumber:(id)arg3 totalPages:(id)arg4 ;
-(void)destroyAd;
-(void)setPlaying:(BOOL)arg1 forced:(BOOL)arg2 ;
-(void)configureVolume:(double)arg1 ;
-(void)adDisplayableViewDidClick:(id)arg1 withEvent:(id)arg2 withCommand:(id)arg3 skipAppStore:(BOOL)arg4 withPageNumber:(id)arg5 withPageTotal:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)adDisplayableViewDidInteract:(id)arg1 withTouchData:(id)arg2 touchType:(id)arg3 withCommand:(id)arg4 skipAppStore:(BOOL)arg5 withPageNumber:(id)arg6 withPageTotal:(id)arg7 completionHandler:(/*^block*/id)arg8 ;
-(void)adDisplayableViewDidLoad:(id)arg1 ;
-(void)adDisplayableViewWantsToLogImpression:(id)arg1 withViewabilityValidator:(id)arg2 withPageNumber:(id)arg3 withPageTotal:(id)arg4 ;
-(void)adDisplayableViewDidClick:(id)arg1 withEvent:(id)arg2 withCommand:(id)arg3 skipAppStore:(BOOL)arg4 withPageNumber:(id)arg5 withPageTotal:(id)arg6 ;
-(void)adDisplayableViewDidInteract:(id)arg1 withGesture:(id)arg2 withCommand:(id)arg3 skipAppStore:(BOOL)arg4 withPageNumber:(id)arg5 withPageTotal:(id)arg6 ;
-(void)adDisplayableViewDidProgress:(id)arg1 ;
-(void)adDisplayableViewDidEnd:(id)arg1 ;
-(void)adDisplayableView:(id)arg1 didFailWithError:(id)arg2 ;
-(void)adDisplayableViewDidClose:(id)arg1 ;
-(id)adDisplayableViewRootViewController:(id)arg1 ;
-(BOOL)shouldShowWatchAndBrowse;
-(id)interstitialAdToolbarRootViewControllerForAdChoicesPresentation:(id)arg1 ;
-(id<FBAdDisplayableViewDelegate>)delegate;
-(void)setDelegate:(id<FBAdDisplayableViewDelegate>)arg1 ;
-(id)logger;
-(void)layoutSubviews;
-(SCD_Struct_IM9)currentTime;
-(FBInterstitialAdToolbarView *)toolbarView;
-(void)setToolbarView:(FBInterstitialAdToolbarView *)arg1 ;
-(FBNativeAdDataModel *)dataModel;
-(void)setCanPlayVideo:(BOOL)arg1 ;
-(BOOL)canPlayVideo;
@end
