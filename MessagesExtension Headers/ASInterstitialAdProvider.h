/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/ASAdProvider.h>

@protocol ASInterstitialAdProviderDelegate;
@interface ASInterstitialAdProvider : ASAdProvider {

	id<ASInterstitialAdProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ASInterstitialAdProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)requestInterstitialAd;
-(void)showInterstitialFromRootViewController:(id)arg1 ;
-(id)initWithAdManager:(id)arg1 ads:(id)arg2 andDelegate:(id)arg3 ;
-(void)failAdWithMsg:(id)arg1 ;
-(BOOL)canShowInterstitialFromRootViewController:(id)arg1 ;
-(void)failShowInterstitialViewController;
-(void)putAdIntoProvider;
-(void)dealloc;
-(id<ASInterstitialAdProviderDelegate>)delegate;
-(void)setDelegate:(id<ASInterstitialAdProviderDelegate>)arg1 ;
-(void)cancel;
@end
