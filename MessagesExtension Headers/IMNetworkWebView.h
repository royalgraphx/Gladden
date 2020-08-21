/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/IMWKWebViewDelegate.h>

@protocol IMNetworkWebViewDelegate;
@class IMRequest, IMWKWebViewController, NSURLRequest, IMResponse, NSTimer, NSString;

@interface IMNetworkWebView : NSObject <IMWKWebViewDelegate> {

	BOOL _loadingTimedOut;
	id<IMNetworkWebViewDelegate> _delegate;
	IMRequest* _request;
	IMWKWebViewController* _networkWebViewController;
	NSURLRequest* _urlRequest;
	IMResponse* _response;
	NSTimer* _timer;
	long long _timeOutInterval;

}

@property (nonatomic,retain) IMWKWebViewController * networkWebViewController;              //@synthesize networkWebViewController=_networkWebViewController - In the implementation block
@property (nonatomic,retain) NSURLRequest * urlRequest;                                     //@synthesize urlRequest=_urlRequest - In the implementation block
@property (nonatomic,retain) IMResponse * response;                                         //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                               //@synthesize timer=_timer - In the implementation block
@property (assign) BOOL loadingTimedOut;                                                    //@synthesize loadingTimedOut=_loadingTimedOut - In the implementation block
@property (assign,nonatomic) long long timeOutInterval;                                     //@synthesize timeOutInterval=_timeOutInterval - In the implementation block
@property (assign,nonatomic,__weak) id<IMNetworkWebViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IMRequest * request;                                           //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)initWebView;
-(void)setNetworkWebViewController:(IMWKWebViewController *)arg1 ;
-(IMWKWebViewController *)networkWebViewController;
-(void)setLoadingTimedOut:(BOOL)arg1 ;
-(BOOL)loadingTimedOut;
-(BOOL)webViewController:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewControllerDidFinishLoad:(id)arg1 ;
-(void)webViewController:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)setupRequest:(id)arg1 delegate:(id)arg2 ;
-(void)executeWebViewNetworkConnection;
-(void)stopLoadingAndResetDelegate;
-(id)init;
-(void)dealloc;
-(id<IMNetworkWebViewDelegate>)delegate;
-(void)setDelegate:(id<IMNetworkWebViewDelegate>)arg1 ;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(void)setRequest:(IMRequest *)arg1 ;
-(IMRequest *)request;
-(IMResponse *)response;
-(void)setResponse:(IMResponse *)arg1 ;
-(void)invalidateTimer;
-(NSURLRequest *)urlRequest;
-(void)setUrlRequest:(NSURLRequest *)arg1 ;
-(void)timerAction;
-(void)refreshTimer;
-(void)setTimeOutInterval:(long long)arg1 ;
-(long long)timeOutInterval;
@end
