/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MPInterstitialCustomEvent.h>
#import <MessagesExtension/AdColonyInterstitialDelegate.h>

@class AdColonyInterstitial, NSString;

@interface AdColonyInterstitialCustomEvent : MPInterstitialCustomEvent <AdColonyInterstitialDelegate> {

	AdColonyInterstitial* _ad;
	NSString* _zoneId;

}

@property (nonatomic,retain) AdColonyInterstitial * ad;              //@synthesize ad=_ad - In the implementation block
@property (nonatomic,copy) NSString * zoneId;                        //@synthesize zoneId=_zoneId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showInterstitialFromRootViewController:(id)arg1 ;
-(void)adColonyInterstitialDidLoad:(id)arg1 ;
-(void)adColonyInterstitialDidFailToLoad:(id)arg1 ;
-(void)adColonyInterstitialWillOpen:(id)arg1 ;
-(void)adColonyInterstitialDidClose:(id)arg1 ;
-(void)adColonyInterstitialExpired:(id)arg1 ;
-(void)adColonyInterstitialWillLeaveApplication:(id)arg1 ;
-(void)adColonyInterstitialDidReceiveClick:(id)arg1 ;
-(void)requestInterstitialWithCustomEventInfo:(id)arg1 adMarkup:(id)arg2 ;
-(id)getAdNetworkId;
-(AdColonyInterstitial *)ad;
-(NSString *)zoneId;
-(void)setZoneId:(NSString *)arg1 ;
-(void)setAd:(AdColonyInterstitial *)arg1 ;
@end

