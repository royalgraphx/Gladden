/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MPInterstitialViewController.h>
#import <MessagesExtension/MRControllerDelegate.h>
#import <MessagesExtension/MPForceableOrientationProtocol.h>

@class MPAdConfiguration, MRController, UIView, NSString;

@interface MPMRAIDInterstitialViewController : MPInterstitialViewController <MRControllerDelegate, MPForceableOrientationProtocol> {

	MPAdConfiguration* _configuration;
	MRController* _mraidController;
	UIView* _interstitialView;
	unsigned long long _supportedOrientationMask;

}

@property (nonatomic,retain) MPAdConfiguration * configuration;                        //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) MRController * mraidController;                           //@synthesize mraidController=_mraidController - In the implementation block
@property (nonatomic,retain) UIView * interstitialView;                                //@synthesize interstitialView=_interstitialView - In the implementation block
@property (assign,nonatomic) unsigned long long supportedOrientationMask;              //@synthesize supportedOrientationMask=_supportedOrientationMask - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)viewControllerForPresentingModalView;
-(void)adDidClose:(id)arg1 ;
-(void)willPresentInterstitial;
-(void)didPresentInterstitial;
-(void)willDismissInterstitial;
-(void)didDismissInterstitial;
-(MRController *)mraidController;
-(void)setMraidController:(MRController *)arg1 ;
-(void)appShouldSuspendForAd:(id)arg1 ;
-(void)appShouldResumeFromAd:(id)arg1 ;
-(void)adDidLoad:(id)arg1 ;
-(void)adDidFailToLoad:(id)arg1 ;
-(void)adWillClose:(id)arg1 ;
-(void)adDidReceiveClickthrough:(id)arg1 ;
-(void)rewardedVideoEnded;
-(unsigned long long)supportedOrientationMask;
-(void)setSupportedOrientationMask:(unsigned long long)arg1 ;
-(id)initWithAdConfiguration:(id)arg1 ;
-(void)setConfiguration:(MPAdConfiguration *)arg1 ;
-(MPAdConfiguration *)configuration;
-(void)startLoading;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(UIView *)interstitialView;
-(void)setInterstitialView:(UIView *)arg1 ;
@end

