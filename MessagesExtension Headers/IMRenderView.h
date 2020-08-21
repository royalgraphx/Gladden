/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <MessagesExtension/IMWKWebViewDelegate.h>
#import <MessagesExtension/IMTimerDelegate.h>
#import <MessagesExtension/IMRenderViewDelegate.h>
#import <MessagesExtension/IMRichMediaDelegate.h>

@protocol IMRenderViewDelegate, IMRenderViewDismissDelegate;
@class IMExpandProperties, IMResizeProperties, IMOrientationProperties, IMRichMediaResolver, IMRenderViewController, IMDeviceVolumeManager, IMOMViewabilityTracker, IMWKWebViewController, UIView, IMAdCloseButton, NSString, IMTimerManager, IMRenderViewGestureRecognizer, NSNumber;

@interface IMRenderView : UIView <UIGestureRecognizerDelegate, IMWKWebViewDelegate, IMTimerDelegate, IMRenderViewDelegate, IMRichMediaDelegate> {

	BOOL _launched;
	BOOL _disableCloseHotspot;
	BOOL _useCustomClose;
	BOOL _hideStatusBar;
	BOOL _isPresentingSkStore;
	BOOL _shouldFireJSEvents;
	BOOL _isMraidInjected;
	BOOL _isClosed;
	BOOL _isViewable;
	BOOL _isExpandedWithUrl;
	BOOL _userClickedOnRenderView;
	BOOL _isWebViewReleaseDelayed;
	int _state;
	int _placementType;
	long long prevMaxWidth;
	long long prevMaxHeight;
	id<IMRenderViewDelegate> _delegate;
	id<IMRenderViewDismissDelegate> _dismissDelegate;
	IMExpandProperties* _expandProperties;
	IMResizeProperties* _resizeProperties;
	IMOrientationProperties* _orientationProperties;
	IMRichMediaResolver* _resolver;
	IMRenderViewController* _expandController;
	IMDeviceVolumeManager* _deviceVolumeManager;
	IMOMViewabilityTracker* _omViewability;
	IMWKWebViewController* _webViewController;
	UIView* _initialSuperView;
	IMAdCloseButton* _closeButton;
	IMAdCloseButton* _closeRegion;
	long long _lastOrientationAngle;
	NSString* _mraidJS;
	IMTimerManager* _timerManager;
	IMRenderViewGestureRecognizer* _renderViewGestureRecognizer;
	UIView* _viewAttachedToWindow;
	NSString* _webViewBgColor;
	NSString* _endCardCloseTrackerUrl;
	NSNumber* _isScrollable;
	double _userClickedTS;
	NSString* _accountID;
	CGRect _currentFrame;

}

@property (nonatomic,retain) IMWKWebViewController * webViewController;                                //@synthesize webViewController=_webViewController - In the implementation block
@property (assign,nonatomic) CGRect currentFrame;                                                      //@synthesize currentFrame=_currentFrame - In the implementation block
@property (assign,nonatomic,__weak) UIView * initialSuperView;                                         //@synthesize initialSuperView=_initialSuperView - In the implementation block
@property (nonatomic,retain) IMAdCloseButton * closeButton;                                            //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) IMAdCloseButton * closeRegion;                                            //@synthesize closeRegion=_closeRegion - In the implementation block
@property (assign,nonatomic) int placementType;                                                        //@synthesize placementType=_placementType - In the implementation block
@property (assign,nonatomic) BOOL shouldFireJSEvents;                                                  //@synthesize shouldFireJSEvents=_shouldFireJSEvents - In the implementation block
@property (assign,nonatomic) long long lastOrientationAngle;                                           //@synthesize lastOrientationAngle=_lastOrientationAngle - In the implementation block
@property (assign,nonatomic) long long prevMaxHeight; 
@property (assign,nonatomic) long long prevMaxWidth; 
@property (nonatomic,retain) NSString * mraidJS;                                                       //@synthesize mraidJS=_mraidJS - In the implementation block
@property (assign,nonatomic) BOOL isMraidInjected;                                                     //@synthesize isMraidInjected=_isMraidInjected - In the implementation block
@property (assign) BOOL isClosed;                                                                      //@synthesize isClosed=_isClosed - In the implementation block
@property (assign,nonatomic) BOOL isViewable;                                                          //@synthesize isViewable=_isViewable - In the implementation block
@property (nonatomic,retain) IMTimerManager * timerManager;                                            //@synthesize timerManager=_timerManager - In the implementation block
@property (assign,nonatomic) BOOL isExpandedWithUrl;                                                   //@synthesize isExpandedWithUrl=_isExpandedWithUrl - In the implementation block
@property (assign,nonatomic) BOOL userClickedOnRenderView;                                             //@synthesize userClickedOnRenderView=_userClickedOnRenderView - In the implementation block
@property (nonatomic,retain) IMRenderViewGestureRecognizer * renderViewGestureRecognizer;              //@synthesize renderViewGestureRecognizer=_renderViewGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIView * viewAttachedToWindow;                                            //@synthesize viewAttachedToWindow=_viewAttachedToWindow - In the implementation block
@property (nonatomic,retain) NSString * webViewBgColor;                                                //@synthesize webViewBgColor=_webViewBgColor - In the implementation block
@property (nonatomic,retain) NSString * endCardCloseTrackerUrl;                                        //@synthesize endCardCloseTrackerUrl=_endCardCloseTrackerUrl - In the implementation block
@property (nonatomic,retain) NSNumber * isScrollable;                                                  //@synthesize isScrollable=_isScrollable - In the implementation block
@property (assign,nonatomic) BOOL isWebViewReleaseDelayed;                                             //@synthesize isWebViewReleaseDelayed=_isWebViewReleaseDelayed - In the implementation block
@property (assign,nonatomic) double userClickedTS;                                                     //@synthesize userClickedTS=_userClickedTS - In the implementation block
@property (nonatomic,retain) NSString * accountID;                                                     //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) UIView * webContentView; 
@property (assign,nonatomic) int state;                                                                //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<IMRenderViewDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL launched;                                                            //@synthesize launched=_launched - In the implementation block
@property (assign,nonatomic,__weak) id<IMRenderViewDismissDelegate> dismissDelegate;                   //@synthesize dismissDelegate=_dismissDelegate - In the implementation block
@property (nonatomic,retain) IMExpandProperties * expandProperties;                                    //@synthesize expandProperties=_expandProperties - In the implementation block
@property (nonatomic,retain) IMResizeProperties * resizeProperties;                                    //@synthesize resizeProperties=_resizeProperties - In the implementation block
@property (nonatomic,retain) IMOrientationProperties * orientationProperties;                          //@synthesize orientationProperties=_orientationProperties - In the implementation block
@property (assign,nonatomic) BOOL disableCloseHotspot;                                                 //@synthesize disableCloseHotspot=_disableCloseHotspot - In the implementation block
@property (assign,nonatomic) BOOL useCustomClose;                                                      //@synthesize useCustomClose=_useCustomClose - In the implementation block
@property (assign,nonatomic) BOOL hideStatusBar;                                                       //@synthesize hideStatusBar=_hideStatusBar - In the implementation block
@property (nonatomic,retain) IMRichMediaResolver * resolver;                                           //@synthesize resolver=_resolver - In the implementation block
@property (assign,nonatomic,__weak) IMRenderViewController * expandController;                         //@synthesize expandController=_expandController - In the implementation block
@property (nonatomic,retain) IMDeviceVolumeManager * deviceVolumeManager;                              //@synthesize deviceVolumeManager=_deviceVolumeManager - In the implementation block
@property (nonatomic,retain) IMOMViewabilityTracker * omViewability;                                   //@synthesize omViewability=_omViewability - In the implementation block
@property (assign,nonatomic) BOOL isPresentingSkStore;                                                 //@synthesize isPresentingSkStore=_isPresentingSkStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isViewVisible:(id)arg1 ;
-(BOOL)webViewController:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewControllerDidStartLoad:(id)arg1 ;
-(void)webViewControllerDidFinishLoad:(id)arg1 ;
-(void)webViewController:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)webViewController:(id)arg1 didRecieveNativeCall:(id)arg2 ;
-(BOOL)webViewController:(id)arg1 shouldOpenExternallyWithRequest:(id)arg2 ;
-(void)timerHitForManager:(id)arg1 ;
-(void)appGoingToBackground;
-(id)initWithFrame:(CGRect)arg1 delegate:(id)arg2 placementType:(int)arg3 webviewBgColor:(id)arg4 withScrolling:(id)arg5 andAccountID:(id)arg6 ;
-(BOOL)loadHtmlString:(id)arg1 ;
-(void)executeJavascript:(id)arg1 ;
-(IMOMViewabilityTracker *)omViewability;
-(void)releaseWebViewAfterDelay;
-(void)setOmViewability:(IMOMViewabilityTracker *)arg1 ;
-(void)imRenderViewWillPresentScreen:(id)arg1 ;
-(void)imRenderViewDidPresentScreen:(id)arg1 ;
-(void)imRenderViewWillDismissScreeen:(id)arg1 ;
-(void)imRenderViewDidDismissScreen:(id)arg1 ;
-(void)imRenderViewDidInteractWithParams:(id)arg1 onRenderView:(id)arg2 ;
-(void)imRenderViewIncentActionComplete:(id)arg1 ;
-(void)setIsPresentingSkStore:(BOOL)arg1 ;
-(void)setPlacementType:(int)arg1 ;
-(BOOL)fireViewableChangeEvent:(BOOL)arg1 ;
-(UIView *)webContentView;
-(IMRenderViewController *)expandController;
-(id)friendlyViewsForViewability;
-(UIView *)viewAttachedToWindow;
-(void)setViewAttachedToWindow:(UIView *)arg1 ;
-(IMDeviceVolumeManager *)deviceVolumeManager;
-(BOOL)shouldFireViewableChangeEvents;
-(void)setupRenderViewWithFrame:(CGRect)arg1 delegate:(id)arg2 webviewColor:(id)arg3 ;
-(void)setIsScrollable:(NSNumber *)arg1 ;
-(NSNumber *)isScrollable;
-(void)setMraidJS:(NSString *)arg1 ;
-(void)setIsMraidInjected:(BOOL)arg1 ;
-(void)setIsWebViewReleaseDelayed:(BOOL)arg1 ;
-(void)setShouldFireJSEvents:(BOOL)arg1 ;
-(void)sendCallbackForRenderViewStartedLoading;
-(void)appGainsFocus;
-(UIView *)initialSuperView;
-(void)setInitialSuperView:(UIView *)arg1 ;
-(BOOL)shouldCheckPropertiesBeforeFiringViewableChangeEvents;
-(void)fireDefaultPositionChangeEventOnScheme:(id)arg1 ;
-(void)fireCurrentPositionChangeEventWithFrame:(CGRect)arg1 OnScheme:(id)arg2 ;
-(void)fireScreenSizeChangeEventOnScheme:(id)arg1 ;
-(void)fireStateChangeEvent:(id)arg1 ;
-(void)fireMaxSizeChangeEventOnScheme:(id)arg1 ;
-(void)fireSizeChangeEvent:(CGRect)arg1 ;
-(void)sendCallbackForRenderViewAppearOnScreen;
-(void)sendCallbackForRenderViewDisappearedFromScreen;
-(void)setDisableCloseHotspot:(BOOL)arg1 ;
-(void)setWebViewBgColor:(NSString *)arg1 ;
-(void)attachWebViewToViewHierarchy;
-(void)setDeviceVolumeManager:(IMDeviceVolumeManager *)arg1 ;
-(void)setRenderViewGestureRecognizer:(IMRenderViewGestureRecognizer *)arg1 ;
-(IMRenderViewGestureRecognizer *)renderViewGestureRecognizer;
-(void)interfaceOrientationChanged:(id)arg1 ;
-(void)setLastOrientationAngle:(long long)arg1 ;
-(void)setExpandProperties:(IMExpandProperties *)arg1 ;
-(void)setResizeProperties:(IMResizeProperties *)arg1 ;
-(void)setOrientationProperties:(IMOrientationProperties *)arg1 ;
-(void)setUserClickedOnRenderView:(BOOL)arg1 ;
-(void)setUserClickedTS:(double)arg1 ;
-(void)fireOnUserInteractionEvent;
-(BOOL)executeNativeCall:(id)arg1 ;
-(void)addCloseButtonToRenderViewWithFrame:(CGRect)arg1 ;
-(BOOL)useCustomClose;
-(BOOL)disableCloseHotspot;
-(IMAdCloseButton *)closeRegion;
-(void)setCloseRegion:(IMAdCloseButton *)arg1 ;
-(BOOL)isPresentingSkStore;
-(void)sendCallbackForRenderViewWillDismissScreen;
-(BOOL)isExpandedWithUrl;
-(void)removeCloseButtonFromRenderView;
-(void)setExpandController:(IMRenderViewController *)arg1 ;
-(void)fireClearAllMaps;
-(id)mraidStateFromEnum:(int)arg1 ;
-(void)sendCallbackForRenderViewDidDismissScreen;
-(IMExpandProperties *)expandProperties;
-(void)setIsExpandedWithUrl:(BOOL)arg1 ;
-(NSString *)webViewBgColor;
-(void)setUseCustomClose:(BOOL)arg1 ;
-(void)addCloseButtonToRenderView;
-(IMResizeProperties *)resizeProperties;
-(CGPoint)adjustFrame:(CGRect)arg1 toFitInto:(CGRect)arg2 ;
-(void)sendCallbackForRenderViewWillPresentScreen;
-(CGRect)getFrameForCloseRegion:(id)arg1 bounds:(CGSize)arg2 ;
-(void)addCloseRegionToRenderViewWithFrame:(CGRect)arg1 ;
-(void)sendCallbackForRenderViewDidPresentScreen;
-(IMOrientationProperties *)orientationProperties;
-(unsigned long long)creativeMask;
-(BOOL)canProcessURL:(id)arg1 ;
-(BOOL)shouldAllowAutoRedirectionForCommand:(id)arg1 ;
-(BOOL)handleLinkClicked:(id)arg1 ;
-(void)fireBeaconAndTelemetryEventForAutoRedirectionForCommand:(id)arg1 ;
-(BOOL)isMraidInjected;
-(NSString *)mraidJS;
-(void)sendCallbackForRenderViewWillLeaveApplication;
-(BOOL)shouldFireJSEvents;
-(void)fireStarting;
-(void)fireReadyEvent;
-(void)sendCallbackForRenderViewFinishedLoading;
-(void)sendCallbackForRenderViewFailedToLoadWith:(id)arg1 ;
-(void)fireNativeCallComplete:(id)arg1 forScheme:(id)arg2 ;
-(BOOL)viewHasHiddenAncestor:(id)arg1 ;
-(BOOL)viewIntersectionMeetsMinimumPercentage:(id)arg1 ;
-(void)checkViewability;
-(CGRect)getCurrentPositionOfUIView:(id)arg1 ;
-(long long)lastOrientationAngle;
-(void)fireOrientationChangeEvent:(long long)arg1 ;
-(BOOL)isWebViewReleaseDelayed;
-(void)sendCallbackForIncentActionComplete:(id)arg1 ;
-(void)sendCallbackForUserDidInteractWithParams:(id)arg1 ;
-(void)sendCallbackForRenderViewFireAdReady;
-(void)sendCallbackForRenderViewFireAdFailed;
-(void)setEndCardCloseTrackerUrl:(NSString *)arg1 ;
-(BOOL)userClickedOnRenderView;
-(double)userClickedTS;
-(void)resetUserClickStatusOnRenderView;
-(void)sendTelemetryEvent:(unsigned long long)arg1 WithCommand:(id)arg2 withExtraInfo:(id)arg3 ;
-(void)imRichMediaAdWillLeaveApplication;
-(void)imRichMediaAdWillPresentScreen;
-(void)imRichMediaAdDidPresentScreen;
-(void)imRichMediaAdWillDismissScreen;
-(void)imRichMediaAdDidDismissScreen;
-(void)imRichMediaAdFireAdReady;
-(void)imRichMediaAdFireAdFailed;
-(void)imRichMediaAdIncentActionComplete:(id)arg1 ;
-(void)imRichMediaAdDidPerformUserInteraction:(id)arg1 ;
-(BOOL)imRichMediaAdShouldExpand;
-(void)renderViewDidAppear;
-(void)renderViewDidDisAppear;
-(void)expand:(id)arg1 withScheme:(id)arg2 ;
-(void)setCloseEndCardTracker:(id)arg1 ;
-(long long)prevMaxWidth;
-(void)setPrevMaxWidth:(long long)arg1 ;
-(long long)prevMaxHeight;
-(void)setPrevMaxHeight:(long long)arg1 ;
-(NSString *)endCardCloseTrackerUrl;
-(void)dealloc;
-(void)close;
-(id<IMRenderViewDelegate>)delegate;
-(void)setDelegate:(id<IMRenderViewDelegate>)arg1 ;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)setProperties:(CGRect)arg1 ;
-(IMRichMediaResolver *)resolver;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)rootViewController;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg1 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)setDismissDelegate:(id<IMRenderViewDismissDelegate>)arg1 ;
-(id<IMRenderViewDismissDelegate>)dismissDelegate;
-(CGRect)currentFrame;
-(BOOL)loadRequest:(id)arg1 ;
-(NSString *)accountID;
-(void)setAccountID:(NSString *)arg1 ;
-(BOOL)isClosed;
-(void)setIsClosed:(BOOL)arg1 ;
-(void)viewDidAppear;
-(BOOL)isViewable;
-(IMAdCloseButton *)closeButton;
-(void)setCloseButton:(IMAdCloseButton *)arg1 ;
-(void)handleGesture:(id)arg1 ;
-(BOOL)canRotate;
-(IMWKWebViewController *)webViewController;
-(void)setWebViewController:(IMWKWebViewController *)arg1 ;
-(void)setResolver:(IMRichMediaResolver *)arg1 ;
-(IMTimerManager *)timerManager;
-(void)setTimerManager:(IMTimerManager *)arg1 ;
-(void)setIsViewable:(BOOL)arg1 ;
-(void)viewDidDisappear;
-(void)setCurrentFrame:(CGRect)arg1 ;
-(int)placementType;
-(void)resize;
-(void)setHideStatusBar:(BOOL)arg1 ;
-(BOOL)hideStatusBar;
-(BOOL)launched;
-(void)setLaunched:(BOOL)arg1 ;
@end

