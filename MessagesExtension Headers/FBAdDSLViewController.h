/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <MessagesExtension/FBAdDSLViewModelDataLoaderDelegate.h>
#import <MessagesExtension/FBAdDSLFullScreenAdViewControllerDelegate.h>

@protocol FBAdDSLViewControllerDelegate;
@class FBAdDSLFullScreenAdViewController, FBAdDSLFullScreenAdDataProvider, FBAdDSLConfiguration, FBAdDSLViewModel, NSDate, NSMutableArray, NSString;

@interface FBAdDSLViewController : UIViewController <FBAdDSLViewModelDataLoaderDelegate, FBAdDSLFullScreenAdViewControllerDelegate> {

	BOOL _authKeySet;
	BOOL _dslReportedCriticalError;
	BOOL _dslControllerDidAppear;
	id<FBAdDSLViewControllerDelegate> _delegate;
	FBAdDSLFullScreenAdViewController* _fullScreenWebView;
	FBAdDSLFullScreenAdDataProvider* _dataProvider;
	FBAdDSLConfiguration* _configuration;
	FBAdDSLViewModel* _viewModel;
	NSDate* _viewReadyToShowDate;
	NSMutableArray* _eventsBuffer;
	long long _webViewRetryCountBeforeViewDidAppear;
	long long _webViewRetryCountAfterViewDidAppear;

}

@property (nonatomic,retain) FBAdDSLFullScreenAdViewController * fullScreenWebView;              //@synthesize fullScreenWebView=_fullScreenWebView - In the implementation block
@property (nonatomic,retain) FBAdDSLFullScreenAdDataProvider * dataProvider;                     //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,retain) FBAdDSLConfiguration * configuration;                               //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) FBAdDSLViewModel * viewModel;                                       //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,getter=isAuthKeySet,nonatomic) BOOL authKeySet;                                //@synthesize authKeySet=_authKeySet - In the implementation block
@property (nonatomic,retain) NSDate * viewReadyToShowDate;                                       //@synthesize viewReadyToShowDate=_viewReadyToShowDate - In the implementation block
@property (assign,nonatomic) BOOL dslReportedCriticalError;                                      //@synthesize dslReportedCriticalError=_dslReportedCriticalError - In the implementation block
@property (nonatomic,retain) NSMutableArray * eventsBuffer;                                      //@synthesize eventsBuffer=_eventsBuffer - In the implementation block
@property (assign,nonatomic) long long webViewRetryCountBeforeViewDidAppear;                     //@synthesize webViewRetryCountBeforeViewDidAppear=_webViewRetryCountBeforeViewDidAppear - In the implementation block
@property (assign,nonatomic) long long webViewRetryCountAfterViewDidAppear;                      //@synthesize webViewRetryCountAfterViewDidAppear=_webViewRetryCountAfterViewDidAppear - In the implementation block
@property (assign,nonatomic) BOOL dslControllerDidAppear;                                        //@synthesize dslControllerDidAppear=_dslControllerDidAppear - In the implementation block
@property (assign,nonatomic,__weak) id<FBAdDSLViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isReadyToPresent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareToShowAd;
-(void)loadAdWithData:(id)arg1 ;
-(void)dslFullScreenAdViewController:(id)arg1 handleEvent:(unsigned long long)arg2 withTouch:(id)arg3 extraData:(id)arg4 ;
-(void)dslFullScreenAdViewController:(id)arg1 logData:(id)arg2 ;
-(void)dslFullScreenAdViewController:(id)arg1 logErrorType:(unsigned long long)arg2 withError:(id)arg3 ;
-(void)dslFullScreenAdViewController:(id)arg1 funnelLogWithData:(id)arg2 ;
-(void)dslFullScreenAdViewController:(id)arg1 printDebugWithInfo:(id)arg2 ;
-(void)dslFullScreenAdViewController:(id)arg1 notifyEvent:(unsigned long long)arg2 ;
-(BOOL)shouldReloadProcessForDslFullScreenAdViewController:(id)arg1 ;
-(void)dslViewModelDidLoad:(id)arg1 ;
-(void)dslViewModelDidFailToLoad:(id)arg1 withError:(id)arg2 ;
-(void)assetForURL:(id)arg1 withType:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)notifyAdReportFlowStarted;
-(void)notifyAdReportFlowFinished;
-(void)notifyAppActive;
-(void)notifyAppInactive;
-(void)notifyAppBackground;
-(void)notifyAppSuspended;
-(void)sendEvent:(unsigned long long)arg1 toAdViewController:(id)arg2 success:(/*^block*/id)arg3 fail:(/*^block*/id)arg4 ;
-(/*^block*/id)successBlockForEvent:(unsigned long long)arg1 ;
-(/*^block*/id)failBlockForEvent:(unsigned long long)arg1 ;
-(void)sendEventsInBuffer;
-(void)notifyFullScreenToLoadAd;
-(void)logErrorOfType:(unsigned long long)arg1 withError:(id)arg2 ;
-(BOOL)shouldReloadProcessForDslFullScreenBeforeViewDidApper;
-(BOOL)shouldReloadProcessForDslFullScreenAfterViewDidApper;
-(FBAdDSLFullScreenAdViewController *)fullScreenWebView;
-(void)setFullScreenWebView:(FBAdDSLFullScreenAdViewController *)arg1 ;
-(BOOL)isAuthKeySet;
-(void)setAuthKeySet:(BOOL)arg1 ;
-(NSDate *)viewReadyToShowDate;
-(void)setViewReadyToShowDate:(NSDate *)arg1 ;
-(BOOL)dslReportedCriticalError;
-(void)setDslReportedCriticalError:(BOOL)arg1 ;
-(NSMutableArray *)eventsBuffer;
-(void)setEventsBuffer:(NSMutableArray *)arg1 ;
-(long long)webViewRetryCountBeforeViewDidAppear;
-(void)setWebViewRetryCountBeforeViewDidAppear:(long long)arg1 ;
-(long long)webViewRetryCountAfterViewDidAppear;
-(void)setWebViewRetryCountAfterViewDidAppear:(long long)arg1 ;
-(BOOL)dslControllerDidAppear;
-(void)setDslControllerDidAppear:(BOOL)arg1 ;
-(id)init;
-(id<FBAdDSLViewControllerDelegate>)delegate;
-(void)setDelegate:(id<FBAdDSLViewControllerDelegate>)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setConfiguration:(FBAdDSLConfiguration *)arg1 ;
-(FBAdDSLConfiguration *)configuration;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(void)sendEvent:(unsigned long long)arg1 ;
-(void)setDataProvider:(FBAdDSLFullScreenAdDataProvider *)arg1 ;
-(FBAdDSLFullScreenAdDataProvider *)dataProvider;
-(FBAdDSLViewModel *)viewModel;
-(void)setViewModel:(FBAdDSLViewModel *)arg1 ;
-(BOOL)isReadyToPresent;
-(id)adView;
@end
