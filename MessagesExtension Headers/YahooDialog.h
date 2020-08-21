/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIWebViewDelegate.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>
#import <libobjc.A.dylib/MFMessageComposeViewControllerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@class PlayerIOWebView, UIView, NSString, UIControl, UIActivityIndicatorView;

@interface YahooDialog : NSObject <UIWebViewDelegate, MFMailComposeViewControllerDelegate, MFMessageComposeViewControllerDelegate, UIScrollViewDelegate> {

	PlayerIOWebView* _webView;
	UIView* _background;
	/*^block*/id _callback;
	NSString* _dialogName;
	UIControl* _cancelButton;
	UIControl* _backButton;
	UIActivityIndicatorView* _loadingIndicator;

}

@property (nonatomic,retain) NSString * dialogName;                                   //@synthesize dialogName=_dialogName - In the implementation block
@property (nonatomic,retain) UIControl * cancelButton;                                //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIControl * backButton;                                  //@synthesize backButton=_backButton - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * loadingIndicator;              //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getCookiesFromUrl:(id)arg1 ;
+(void)showWithDialog:(id)arg1 options:(id)arg2 apiToken:(id)arg3 callbackBlock:(/*^block*/id)arg4 ;
+(void)removeAllCookies;
-(void)showWithDialog:(id)arg1 options:(id)arg2 apiToken:(id)arg3 callbackBlock:(/*^block*/id)arg4 ;
-(void)animateWebViewWithAnchorType:(int)arg1 contentWidth:(int)arg2 contentHeight:(int)arg3 loading:(BOOL)arg4 webViewVisible:(BOOL)arg5 duration:(float)arg6 completion:(/*^block*/id)arg7 ;
-(void)dismissDialogWithData:(id)arg1 ;
-(NSString *)dialogName;
-(void)cancelButtonHandler:(id)arg1 ;
-(void)backButtonHandler:(id)arg1 ;
-(void)setDialogName:(NSString *)arg1 ;
-(void)processMessageWithOuterDict:(id)arg1 inner:(id)arg2 ;
-(id)initWithDialogWithCallbackBlock:(/*^block*/id)arg1 ;
-(void)createWebViewWithParent:(id)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(UIControl *)backButton;
-(void)setBackButton:(UIControl *)arg1 ;
-(UIControl *)cancelButton;
-(void)setCancelButton:(UIControl *)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2 ;
-(UIActivityIndicatorView *)loadingIndicator;
-(void)setLoadingIndicator:(UIActivityIndicatorView *)arg1 ;
@end

