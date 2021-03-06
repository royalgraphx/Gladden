/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/ALMediationAdDisplayDelegate.h>

@class ALMediatedAd, UIWindow, ALAdDelegateCollection, NSString;

@interface ALMediationDelegateProxy : NSObject <ALMediationAdDisplayDelegate> {

	ALMediatedAd* _mediatedAd;
	UIWindow* _window;
	ALAdDelegateCollection* _delegates;

}

@property (nonatomic,retain) ALMediatedAd * mediatedAd;                       //@synthesize mediatedAd=_mediatedAd - In the implementation block
@property (nonatomic,retain) UIWindow * window;                               //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) ALAdDelegateCollection * delegates;              //@synthesize delegates=_delegates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMediatedAd:(id)arg1 window:(id)arg2 delegates:(id)arg3 ;
-(ALMediatedAd *)mediatedAd;
-(void)setMediatedAd:(ALMediatedAd *)arg1 ;
-(void)didDisplayMediatedAd:(id)arg1 ;
-(void)didClickMediatedAd:(id)arg1 ;
-(void)didHideMediatedAd:(id)arg1 ;
-(void)mediatedAd:(id)arg1 didFailToDisplayWithError:(long long)arg2 ;
-(void)rewardValidationRequestForMediatedAd:(id)arg1 didSucceedWithResponse:(id)arg2 ;
-(void)rewardValidationRequestForMediatedAd:(id)arg1 wasRejectedWithResponse:(id)arg2 ;
-(UIWindow *)window;
-(void)setWindow:(UIWindow *)arg1 ;
-(ALAdDelegateCollection *)delegates;
-(void)setDelegates:(ALAdDelegateCollection *)arg1 ;
@end

