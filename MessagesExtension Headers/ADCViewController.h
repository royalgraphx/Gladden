/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <MessagesExtension/ADCViewControllerProtocol.h>

@class NSString;

@interface ADCViewController : UIViewController <ADCViewControllerProtocol> {

	BOOL adcStaticContainer;
	BOOL adcForceOrientations;
	long long adcPrefferedOrientation;
	unsigned long long adcSupportedOrientation;
	unsigned long long adcForcedOrientation;
	/*^block*/id _closeCallback;
	long long _controllerInterfaceOrientationValue;

}

@property (nonatomic,copy) id closeCallback;                                             //@synthesize closeCallback=_closeCallback - In the implementation block
@property (assign,nonatomic) long long controllerInterfaceOrientationValue;              //@synthesize controllerInterfaceOrientationValue=_controllerInterfaceOrientationValue - In the implementation block
@property (assign,nonatomic) long long controllerInterfaceOrientation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL adcStaticContainer; 
@property (assign,nonatomic) unsigned long long adcSupportedOrientation; 
@property (assign,nonatomic) long long adcPrefferedOrientation; 
@property (nonatomic,readonly) BOOL adcNeedsOrientationAdjustments; 
@property (assign,nonatomic) BOOL adcForceOrientations; 
@property (assign,nonatomic) unsigned long long adcForcedOrientation; 
-(void)showWithSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAdcForceOrientations:(BOOL)arg1 ;
-(void)setAdcForcedOrientation:(unsigned long long)arg1 ;
-(BOOL)adcForceOrientations;
-(long long)controllerInterfaceOrientation;
-(void)requestOrientationSettingsUpdate:(id)arg1 ;
-(BOOL)adcStaticContainer;
-(void)setAdcStaticContainer:(BOOL)arg1 ;
-(unsigned long long)adcSupportedOrientation;
-(void)setAdcSupportedOrientation:(unsigned long long)arg1 ;
-(long long)adcPrefferedOrientation;
-(void)setAdcPrefferedOrientation:(long long)arg1 ;
-(BOOL)adcNeedsOrientationAdjustments;
-(unsigned long long)adcForcedOrientation;
-(id)closeCallback;
-(void)setCloseCallback:(id)arg1 ;
-(void)setControllerInterfaceOrientationValue:(long long)arg1 ;
-(long long)controllerInterfaceOrientationValue;
-(void)onOrientationChange;
-(void)setControllerInterfaceOrientation:(long long)arg1 ;
-(void)onOrientationTransitionFinished;
-(id)init;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(long long)preferredInterfaceOrientationForPresentation;
-(BOOL)prefersStatusBarHidden;
-(void)hideWithCompletion:(/*^block*/id)arg1 ;
@end
