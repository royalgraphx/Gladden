/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol ALWebView;
@class UIView;

@interface ALWebViewViewController : UIViewController {

	UIView*<ALWebView> _webView;
	/*^block*/id _dismissBlock;

}

@property (nonatomic,retain) UIView*<ALWebView> webView;              //@synthesize webView=_webView - In the implementation block
@property (nonatomic,copy) id dismissBlock;                           //@synthesize dismissBlock=_dismissBlock - In the implementation block
-(id)initWithURL:(id)arg1 dismissBlock:(/*^block*/id)arg2 ;
-(UIView*<ALWebView>)webView;
-(void)dismiss;
-(void)setWebView:(UIView*<ALWebView>)arg1 ;
-(id)dismissBlock;
-(void)setDismissBlock:(id)arg1 ;
@end

