/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@class WKWebView, MPUBMoatWKWebViewBridge, NSString;

@interface MPUBMoatWebViewAndBridge : NSObject <WKNavigationDelegate> {

	BOOL _amCleanedUp;
	WKWebView* _webView;
	MPUBMoatWKWebViewBridge* _webBridge;
	NSString* _moatTrackerName;

}

@property (retain) NSString * moatTrackerName;                       //@synthesize moatTrackerName=_moatTrackerName - In the implementation block
@property (assign) BOOL amCleanedUp;                                 //@synthesize amCleanedUp=_amCleanedUp - In the implementation block
@property (retain) WKWebView * webView;                              //@synthesize webView=_webView - In the implementation block
@property (retain) MPUBMoatWKWebViewBridge * webBridge;              //@synthesize webBridge=_webBridge - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MPUBMoatWKWebViewBridge *)webBridge;
-(void)vivifyDisplayWebViewWithPartnerCode:(id)arg1 ;
-(void)setWebBridge:(MPUBMoatWKWebViewBridge *)arg1 ;
-(void)vivifyVideoWebViewWithPartnerCode:(id)arg1 withAdIds:(id)arg2 withPlayerDims:(CGRect)arg3 withAttachmentView:(id)arg4 withTracker:(id)arg5 ;
-(void)changeAttachmentView:(id)arg1 ;
-(NSString *)moatTrackerName;
-(void)setMoatTrackerName:(NSString *)arg1 ;
-(BOOL)amCleanedUp;
-(void)setAmCleanedUp:(BOOL)arg1 ;
-(id)init;
-(void)destroy;
-(WKWebView *)webView;
-(void)setWebView:(WKWebView *)arg1 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
@end

