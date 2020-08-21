/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class WKWebView, UIBarButtonItem, UIToolbar;


@protocol FBAdBrowserViewController <NSObject>
@property (nonatomic,retain) WKWebView * webView; 
@property (nonatomic,retain) UIBarButtonItem * backButton; 
@property (nonatomic,retain) UIBarButtonItem * forwardButton; 
@property (nonatomic,retain) UIBarButtonItem * refreshButton; 
@property (nonatomic,retain) UIBarButtonItem * spinnerButton; 
@property (nonatomic,retain) UIToolbar * toolBar; 
@property (assign,nonatomic,__weak) NSObject*<FBAdSafariViewControllerDelegate> delegate; 
@property (assign,getter=isStatusBarHidden,nonatomic) BOOL statusBarHidden; 
@required
-(void)setForwardButton:(id)arg1;
-(UIBarButtonItem *)forwardButton;
-(void)backButtonClicked:(id)arg1;
-(void)forwardButtonClicked:(id)arg1;
-(void)refreshButtonClicked:(id)arg1;
-(UIBarButtonItem *)spinnerButton;
-(void)setSpinnerButton:(id)arg1;
-(NSObject*<FBAdSafariViewControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(WKWebView *)webView;
-(BOOL)isStatusBarHidden;
-(UIBarButtonItem *)backButton;
-(void)setBackButton:(id)arg1;
-(void)setStatusBarHidden:(BOOL)arg1;
-(void)setWebView:(id)arg1;
-(void)loadURL:(id)arg1;
-(void)doneButtonClicked:(id)arg1;
-(void)setRefreshButton:(id)arg1;
-(UIBarButtonItem *)refreshButton;
-(void)setToolBar:(id)arg1;
-(UIToolbar *)toolBar;

@end
