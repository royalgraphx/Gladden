/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <libobjc.A.dylib/WKUIDelegate.h>

@protocol IMWKWebViewDelegate;
@class WKWebView, UIView, NSString;

@interface IMWKWebViewController : NSObject <WKNavigationDelegate, WKUIDelegate> {

	BOOL _shouldFirePopupBlockBeacon;
	id<IMWKWebViewDelegate> _delegate;
	WKWebView* _wkWebView;

}

@property (nonatomic,retain) WKWebView * wkWebView;                                //@synthesize wkWebView=_wkWebView - In the implementation block
@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
@property (nonatomic,readonly) UIView * webview; 
@property (assign,nonatomic,__weak) id<IMWKWebViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldFirePopupBlockBeacon;                      //@synthesize shouldFirePopupBlockBeacon=_shouldFirePopupBlockBeacon - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)navigationTypeFrom:(long long)arg1 ;
-(id)initWithWebViewFrame:(CGRect)arg1 ;
-(id)getNativeCallMessageHandler;
-(WKWebView *)wkWebView;
-(BOOL)shouldFirePopupBlockBeacon;
-(void)firePopupBlockedBeaconWithJS:(id)arg1 ;
-(void)setWkWebView:(WKWebView *)arg1 ;
-(id)evaluateJavaScriptAndReturnStringIfPossible:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)requiresVolumeUpdateBeforeShowWithPublisherMuteEnabled:(BOOL)arg1 ;
-(void)setAllowBounceAndScrollOnWebView:(BOOL)arg1 ;
-(void)setShouldFirePopupBlockBeacon:(BOOL)arg1 ;
-(void)dealloc;
-(id<IMWKWebViewDelegate>)delegate;
-(void)setDelegate:(id<IMWKWebViewDelegate>)arg1 ;
-(void)stopLoading;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
-(void)loadRequest:(id)arg1 ;
-(BOOL)isLoading;
-(void)stringByEvaluatingJavaScriptFromString:(id)arg1 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didCommitNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4 ;
-(void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(UIView *)webview;
@end
