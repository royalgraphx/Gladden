/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIWebView.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol ALWebViewButtonDelegate;
@class ALSdk, NSString;

@interface ALWebViewButton : UIWebView <UIWebViewDelegate> {

	id<ALWebViewButtonDelegate> _clickDelegate;
	ALSdk* _sdk;

}

@property (assign,nonatomic,__weak) ALSdk * sdk;                                            //@synthesize sdk=_sdk - In the implementation block
@property (assign,nonatomic,__weak) id<ALWebViewButtonDelegate> clickDelegate;              //@synthesize clickDelegate=_clickDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSdk:(ALSdk *)arg1 ;
-(ALSdk *)sdk;
-(id)initWithSdk:(id)arg1 ;
-(id<ALWebViewButtonDelegate>)clickDelegate;
-(void)setClickDelegate:(id<ALWebViewButtonDelegate>)arg1 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
@end
