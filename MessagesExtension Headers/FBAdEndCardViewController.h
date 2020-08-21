/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <MessagesExtension/FBAdReportingCoordinatorDelegate.h>
#import <MessagesExtension/FBAdEndCardScreenshotViewDelegate.h>
#import <MessagesExtension/FBAdEndCardNoMediaViewDelegate.h>
#import <MessagesExtension/FBAdGoToEndcardTransitionable.h>

@protocol FBAdEndCardViewControllerDelegate;
@class FBAdDetailsAndCTAButtonContainerView, FBInterstitialAdToolbarView, FBAdReportingCoordinator, NSString;

@interface FBAdEndCardViewController : UIViewController <FBAdReportingCoordinatorDelegate, FBAdEndCardScreenshotViewDelegate, FBAdEndCardNoMediaViewDelegate, FBAdGoToEndcardTransitionable> {

	BOOL _hasAppearedBefore;
	BOOL _useNewToolbar;
	double _closeButtonDelay;
	id<FBAdEndCardViewControllerDelegate> _delegate;
	FBInterstitialAdToolbarView* _toolbarView;
	FBAdReportingCoordinator* _reportingCoordinator;
	NSString* _token;

}

@property (nonatomic,retain) FBInterstitialAdToolbarView * toolbarView;                                                       //@synthesize toolbarView=_toolbarView - In the implementation block
@property (assign,nonatomic) BOOL hasAppearedBefore;                                                                          //@synthesize hasAppearedBefore=_hasAppearedBefore - In the implementation block
@property (assign,nonatomic) BOOL useNewToolbar;                                                                              //@synthesize useNewToolbar=_useNewToolbar - In the implementation block
@property (nonatomic,retain) FBAdReportingCoordinator * reportingCoordinator;                                                 //@synthesize reportingCoordinator=_reportingCoordinator - In the implementation block
@property (nonatomic,copy) NSString * token;                                                                                  //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) double closeButtonDelay;                                                                         //@synthesize closeButtonDelay=_closeButtonDelay - In the implementation block
@property (assign,nonatomic,__weak) id<FBAdEndCardViewControllerDelegate> delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) FBAdDetailsAndCTAButtonContainerView * adDetailsAndCTAButtonContainerView; 
-(BOOL)useNewToolbar;
-(void)setUseNewToolbar:(BOOL)arg1 ;
-(FBAdReportingCoordinator *)reportingCoordinator;
-(void)setReportingCoordinator:(FBAdReportingCoordinator *)arg1 ;
-(void)adReportingCoordinatorDidCompleteFlow:(id)arg1 reason:(id)arg2 flowType:(long long)arg3 ;
-(void)adReportingCoordinatorDidCancelFlow:(id)arg1 ;
-(FBAdDetailsAndCTAButtonContainerView *)adDetailsAndCTAButtonContainerView;
-(void)endCardNoMediaViewClicked:(id)arg1 ;
-(void)endCardNoMediaViewWillClose:(id)arg1 ;
-(void)endCardNoMediaViewDidTerminate:(id)arg1 ;
-(void)endCardScreenshotViewClicked;
-(void)endCardScreenshotViewWillClose;
-(id)initWithAdDataModel:(id)arg1 useNewLayout:(BOOL)arg2 useNewToolbar:(BOOL)arg3 useAdaptiveLayout:(BOOL)arg4 rootViewController:(id)arg5 ;
-(void)setupToolbarViewWithRootViewController:(id)arg1 adDataModel:(id)arg2 ;
-(void)hideCloseButton;
-(void)fadeInCloseButtonWithDuration:(double)arg1 delay:(double)arg2 ;
-(id)endCardScreenshotView;
-(id)endCardNoMediaView;
-(id)endCardAdaptiveView;
-(double)closeButtonDelay;
-(void)setCloseButtonDelay:(double)arg1 ;
-(BOOL)hasAppearedBefore;
-(void)setHasAppearedBefore:(BOOL)arg1 ;
-(void)dealloc;
-(NSString *)token;
-(id<FBAdEndCardViewControllerDelegate>)delegate;
-(void)setDelegate:(id<FBAdEndCardViewControllerDelegate>)arg1 ;
-(void)setToken:(NSString *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(BOOL)prefersStatusBarHidden;
-(FBInterstitialAdToolbarView *)toolbarView;
-(void)setToolbarView:(FBInterstitialAdToolbarView *)arg1 ;
-(void)setupNotifications;
@end
