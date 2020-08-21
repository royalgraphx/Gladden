/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <MessagesExtension/FBAdBrowserViewController.h>
#import <MessagesExtension/FBAdBrowserSessionDataGeneration.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@protocol FBAdSafariViewControllerDelegate;
@class WKWebView, UIBarButtonItem, UIToolbar, NSObject, NSURL, NSString, FBAdTimer;

@interface FBAdWKWebViewBrowserController : UIViewController <FBAdBrowserViewController, FBAdBrowserSessionDataGeneration, WKNavigationDelegate> {

	BOOL _statusBarHidden;
	WKWebView* _webView;
	UIBarButtonItem* _backButton;
	UIBarButtonItem* _forwardButton;
	UIBarButtonItem* _refreshButton;
	UIBarButtonItem* _spinnerButton;
	UIToolbar* _toolBar;
	NSObject*<FBAdSafariViewControllerDelegate> _delegate;
	NSURL* _url;
	NSString* _inlineClientToken;
	unsigned long long _handlerTimeMs;
	unsigned long long _loadStartMs;
	unsigned long long _responseEndMs;
	unsigned long long _domContentLoadedMs;
	unsigned long long _scrollReadyMs;
	unsigned long long _loadFinishMs;
	FBAdTimer* _domContentLoadedTimer;

}

@property (nonatomic,retain) FBAdTimer * domContentLoadedTimer;                                        //@synthesize domContentLoadedTimer=_domContentLoadedTimer - In the implementation block
@property (nonatomic,retain) WKWebView * webView;                                                      //@synthesize webView=_webView - In the implementation block
@property (nonatomic,copy) NSURL * url;                                                                //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * inlineClientToken;                                               //@synthesize inlineClientToken=_inlineClientToken - In the implementation block
@property (assign,nonatomic) unsigned long long handlerTimeMs;                                         //@synthesize handlerTimeMs=_handlerTimeMs - In the implementation block
@property (assign,nonatomic) unsigned long long loadStartMs;                                           //@synthesize loadStartMs=_loadStartMs - In the implementation block
@property (assign,nonatomic) unsigned long long responseEndMs;                                         //@synthesize responseEndMs=_responseEndMs - In the implementation block
@property (assign,nonatomic) unsigned long long domContentLoadedMs;                                    //@synthesize domContentLoadedMs=_domContentLoadedMs - In the implementation block
@property (assign,nonatomic) unsigned long long scrollReadyMs;                                         //@synthesize scrollReadyMs=_scrollReadyMs - In the implementation block
@property (assign,nonatomic) unsigned long long loadFinishMs;                                          //@synthesize loadFinishMs=_loadFinishMs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIBarButtonItem * backButton;                                             //@synthesize backButton=_backButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * forwardButton;                                          //@synthesize forwardButton=_forwardButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * refreshButton;                                          //@synthesize refreshButton=_refreshButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * spinnerButton;                                          //@synthesize spinnerButton=_spinnerButton - In the implementation block
@property (nonatomic,retain) UIToolbar * toolBar;                                                      //@synthesize toolBar=_toolBar - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<FBAdSafariViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isStatusBarHidden,nonatomic) BOOL statusBarHidden;                            //@synthesize statusBarHidden=_statusBarHidden - In the implementation block
+(void)initialize;
-(void)setForwardButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)forwardButton;
-(unsigned long long)handlerTimeMs;
-(void)setHandlerTimeMs:(unsigned long long)arg1 ;
-(unsigned long long)loadStartMs;
-(void)setLoadStartMs:(unsigned long long)arg1 ;
-(unsigned long long)responseEndMs;
-(void)setResponseEndMs:(unsigned long long)arg1 ;
-(unsigned long long)domContentLoadedMs;
-(void)setDomContentLoadedMs:(unsigned long long)arg1 ;
-(unsigned long long)scrollReadyMs;
-(void)setScrollReadyMs:(unsigned long long)arg1 ;
-(unsigned long long)loadFinishMs;
-(void)setLoadFinishMs:(unsigned long long)arg1 ;
-(NSString *)inlineClientToken;
-(void)setInlineClientToken:(NSString *)arg1 ;
-(void)backButtonClicked:(id)arg1 ;
-(void)forwardButtonClicked:(id)arg1 ;
-(void)refreshButtonClicked:(id)arg1 ;
-(UIBarButtonItem *)spinnerButton;
-(void)setSpinnerButton:(UIBarButtonItem *)arg1 ;
-(void)startDOMContentLoadedTimer;
-(void)stopDOMContentLoadedTimer;
-(FBAdTimer *)domContentLoadedTimer;
-(void)setDomContentLoadedTimer:(FBAdTimer *)arg1 ;
-(NSObject*<FBAdSafariViewControllerDelegate>)delegate;
-(void)setDelegate:(NSObject*<FBAdSafariViewControllerDelegate>)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(WKWebView *)webView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)isStatusBarHidden;
-(UIBarButtonItem *)backButton;
-(void)setBackButton:(UIBarButtonItem *)arg1 ;
-(void)setStatusBarHidden:(BOOL)arg1 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(BOOL)prefersStatusBarHidden;
-(void)setWebView:(WKWebView *)arg1 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(void)loadURL:(id)arg1 ;
-(void)doneButtonClicked:(id)arg1 ;
-(void)setRefreshButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)refreshButton;
-(void)setToolBar:(UIToolbar *)arg1 ;
-(UIToolbar *)toolBar;
@end
