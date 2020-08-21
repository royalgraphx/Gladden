/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/ALAdLoadDelegate.h>
#import <MessagesExtension/ALAdDisplayDelegate.h>
#import <MessagesExtension/ALAdViewEventDelegate.h>

@class AppLovinBannerCustomEvent, NSString;

@interface AppLovinMoPubBannerDelegate : NSObject <ALAdLoadDelegate, ALAdDisplayDelegate, ALAdViewEventDelegate> {

	AppLovinBannerCustomEvent* _parentCustomEvent;

}

@property (assign,nonatomic,__weak) AppLovinBannerCustomEvent * parentCustomEvent;              //@synthesize parentCustomEvent=_parentCustomEvent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)ad:(id)arg1 wasDisplayedIn:(id)arg2 ;
-(void)ad:(id)arg1 wasHiddenIn:(id)arg2 ;
-(void)ad:(id)arg1 wasClickedIn:(id)arg2 ;
-(void)adService:(id)arg1 didLoadAd:(id)arg2 ;
-(void)adService:(id)arg1 didFailToLoadAdWithError:(int)arg2 ;
-(void)ad:(id)arg1 didPresentFullscreenForAdView:(id)arg2 ;
-(void)ad:(id)arg1 willDismissFullscreenForAdView:(id)arg2 ;
-(void)ad:(id)arg1 didDismissFullscreenForAdView:(id)arg2 ;
-(void)ad:(id)arg1 willLeaveApplicationForAdView:(id)arg2 ;
-(void)ad:(id)arg1 didFailToDisplayInAdView:(id)arg2 withError:(long long)arg3 ;
-(id)getAdNetworkId;
-(id)initWithCustomEvent:(id)arg1 ;
-(void)setParentCustomEvent:(AppLovinBannerCustomEvent *)arg1 ;
-(AppLovinBannerCustomEvent *)parentCustomEvent;
@end
