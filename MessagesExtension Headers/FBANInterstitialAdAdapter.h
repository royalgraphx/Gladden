/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <MessagesExtension/FBDisplayAdAdapter.h>
#import <MessagesExtension/FBAdVideoAdViewControllerDelegate.h>
#import <MessagesExtension/FBAdEndCardViewControllerDelegate.h>
#import <MessagesExtension/FBAdDSLBridgeDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <MessagesExtension/FBAdDisplayableViewControllerDelegate.h>

@protocol FBAdDisplayableViewController;
@class UIViewController, NSString, UINavigationController, FBAdEndCardViewController, FBAdDSLBridgeViewController, FBAdCommandProcessor, FBAdExtraHint, FBAdPlacementDefinition, FBAdOnDeviceHistoryDataManager;

@interface FBANInterstitialAdAdapter : FBDisplayAdAdapter <FBAdVideoAdViewControllerDelegate, FBAdEndCardViewControllerDelegate, FBAdDSLBridgeDelegate, UINavigationControllerDelegate, UIViewControllerTransitioningDelegate, FBAdDisplayableViewControllerDelegate> {

	BOOL _showEndCard;
	UIViewController*<FBAdDisplayableViewController> _displayableViewController;
	NSString* _placementID;
	UINavigationController* _navigationController;
	FBAdEndCardViewController* _endCardViewController;
	FBAdDSLBridgeViewController* _dynamicViewController;
	FBAdCommandProcessor* _commandProcessor;
	double _firstImpressionTime;
	FBAdExtraHint* _extraHint;
	NSString* _requestId;
	FBAdPlacementDefinition* _placementDefinition;

}

@property (nonatomic,copy) NSString * placementID;                                                                    //@synthesize placementID=_placementID - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationController;                                           //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) FBAdEndCardViewController * endCardViewController;                                       //@synthesize endCardViewController=_endCardViewController - In the implementation block
@property (nonatomic,retain) FBAdDSLBridgeViewController * dynamicViewController;                                     //@synthesize dynamicViewController=_dynamicViewController - In the implementation block
@property (assign,nonatomic) BOOL showEndCard;                                                                        //@synthesize showEndCard=_showEndCard - In the implementation block
@property (nonatomic,retain) FBAdCommandProcessor * commandProcessor;                                                 //@synthesize commandProcessor=_commandProcessor - In the implementation block
@property (assign,nonatomic) double firstImpressionTime;                                                              //@synthesize firstImpressionTime=_firstImpressionTime - In the implementation block
@property (nonatomic,retain) FBAdExtraHint * extraHint;                                                               //@synthesize extraHint=_extraHint - In the implementation block
@property (nonatomic,copy) NSString * requestId;                                                                      //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,readonly) FBAdOnDeviceHistoryDataManager * onDeviceHistoryManager; 
@property (nonatomic,retain) FBAdPlacementDefinition * placementDefinition;                                           //@synthesize placementDefinition=_placementDefinition - In the implementation block
@property (nonatomic,retain) UIViewController*<FBAdDisplayableViewController> displayableViewController;              //@synthesize displayableViewController=_displayableViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(NSString *)placementID;
-(void)displayableAdDidClick:(id)arg1 ;
-(void)displayableAdDidClose:(id)arg1 ;
-(void)displayableAdWillClose:(id)arg1 ;
-(void)displayableAdDidLoad:(id)arg1 ;
-(void)displayableAd:(id)arg1 didFailWithError:(id)arg2 ;
-(void)displayableAdWantsToLogImpression:(id)arg1 withExtraData:(id)arg2 ;
-(void)loadAdData:(id)arg1 forSize:(FBAdSize)arg2 forOrientation:(long long)arg3 forPlacement:(id)arg4 placementDefinition:(id)arg5 dataModelType:(id)arg6 rewardData:(id)arg7 extraHint:(id)arg8 ;
-(id)adDataModel;
-(BOOL)startAdFromRootViewController:(id)arg1 ;
-(BOOL)startAdFromRootViewController:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)isIntroCardEnabled;
-(UIViewController*<FBAdDisplayableViewController>)displayableViewController;
-(void)setDisplayableViewController:(UIViewController*<FBAdDisplayableViewController>)arg1 ;
-(void)setPlacementID:(NSString *)arg1 ;
-(FBAdExtraHint *)extraHint;
-(void)setExtraHint:(FBAdExtraHint *)arg1 ;
-(void)videoAdViewControllerDidLoad:(id)arg1 ;
-(void)videoAdViewController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)videoAdViewControllerComplete:(id)arg1 ;
-(void)videoAdViewControllerWantsToLogImpression:(id)arg1 ;
-(void)videoAdViewControllerWantsToProcessCTA:(id)arg1 withEvent:(id)arg2 ;
-(void)videoAdViewControllerWantsToProcessCTA:(id)arg1 withGesture:(id)arg2 ;
-(void)videoAdViewControllerWillClose:(id)arg1 ;
-(void)videoAdViewControllerSkipped:(id)arg1 ;
-(void)endCardViewControllerDidClick:(id)arg1 ;
-(void)endCardViewControllerWillClose:(id)arg1 ;
-(void)endCardViewControllerDidTerminate:(id)arg1 ;
-(void)dynamicAdViewControllerDidLoad:(id)arg1 ;
-(void)dynamicAdViewController:(id)arg1 dismissControllerWithAdSuccess:(BOOL)arg2 ;
-(void)dynamicAdViewController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)dynamicAdViewControllerWantsToProcessCTA:(id)arg1 touchStartLocation:(CGPoint)arg2 touchEndLocation:(CGPoint)arg3 touchForce:(double)arg4 touchRadius:(double)arg5 extraData:(id)arg6 ;
-(void)dynamicAdViewControllerReportingImpression:(id)arg1 ;
-(void)mandatoryAssetsLoadedWithData:(id)arg1 ;
-(void)mandatoryAssetsFailedToLoad;
-(BOOL)useGenerifiedAssetsCaching;
-(BOOL)useNewInterstitialVideoDesign;
-(BOOL)useAdaptiveLayout;
-(BOOL)useNewToolbarInInterstitial;
-(BOOL)shouldAttemptToRecoverFromDetachedViewController;
-(void)loadEndCard;
-(void)pushEndCardViewController;
-(void)dismissViewControllerAnimated;
-(void)logAdapterLoaded;
-(void)viewControllerWantToProcessCTAWithEvent:(id)arg1 ;
-(void)viewControllerWantToProcessCTAWithGesture:(id)arg1 ;
-(void)viewControllerWantToProcessCTAWithTouchData:(id)arg1 commandURL:(id)arg2 ;
-(void)registerFirstImpressionTime;
-(void)interstitialAdWillLogImpression;
-(void)markAdAsShownForOnDeviceHistory;
-(FBAdOnDeviceHistoryDataManager *)onDeviceHistoryManager;
-(id)funnel;
-(FBAdEndCardViewController *)endCardViewController;
-(void)setEndCardViewController:(FBAdEndCardViewController *)arg1 ;
-(FBAdDSLBridgeViewController *)dynamicViewController;
-(void)setDynamicViewController:(FBAdDSLBridgeViewController *)arg1 ;
-(BOOL)showEndCard;
-(void)setShowEndCard:(BOOL)arg1 ;
-(double)firstImpressionTime;
-(void)setFirstImpressionTime:(double)arg1 ;
-(FBAdPlacementDefinition *)placementDefinition;
-(void)setPlacementDefinition:(FBAdPlacementDefinition *)arg1 ;
-(id)logger;
-(NSString *)requestId;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(UINavigationController *)navigationController;
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(id)delayTime;
-(void)setRequestId:(NSString *)arg1 ;
-(id)adView;
-(FBAdCommandProcessor *)commandProcessor;
-(void)setCommandProcessor:(FBAdCommandProcessor *)arg1 ;
@end

