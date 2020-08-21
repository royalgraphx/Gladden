/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <MessagesExtension/FBDisplayAdAdapter.h>
#import <MessagesExtension/FBAdDSLBridgeDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <MessagesExtension/FBAdVideoAdViewControllerDelegate.h>
#import <MessagesExtension/FBAdEndCardViewControllerDelegate.h>
#import <MessagesExtension/FBAdPlayableViewControllerDelegate.h>

@class NSString, FBRewardedVideoRewardData, UINavigationController, FBAdDSLBridgeViewController, FBAdVideoAdViewController, FBAdEndCardViewController, FBAdPlayableViewController, FBAdPlacementDefinition, FBRewardedVideoAdDataModel, FBAdExtraHint, FBAdCommandProcessor, FBAdOnDeviceHistoryDataManager;

@interface FBANRewardedVideoAdAdapter : FBDisplayAdAdapter <FBAdDSLBridgeDelegate, UINavigationControllerDelegate, UIViewControllerTransitioningDelegate, FBAdVideoAdViewControllerDelegate, FBAdEndCardViewControllerDelegate, FBAdPlayableViewControllerDelegate> {

	BOOL _forceSkipped;
	NSString* _placementID;
	FBRewardedVideoRewardData* _internalRewardData;
	UINavigationController* _navigationController;
	FBAdDSLBridgeViewController* _dslBridgeViewController;
	FBAdVideoAdViewController* _videoAdViewController;
	FBAdEndCardViewController* _endCardViewController;
	FBAdPlayableViewController* _playableController;
	FBAdPlacementDefinition* _placementDefinition;
	NSString* _dataModelType;
	FBRewardedVideoAdDataModel* _rewardedVideoDataModel;
	FBAdExtraHint* _extraHint;
	FBAdCommandProcessor* _commandProcessor;
	double _firstImpressionTime;
	NSString* _requestId;

}

@property (nonatomic,copy,readonly) NSString * placementID;                                          //@synthesize placementID=_placementID - In the implementation block
@property (nonatomic,retain) FBRewardedVideoRewardData * internalRewardData;                         //@synthesize internalRewardData=_internalRewardData - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationController;                          //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) FBAdDSLBridgeViewController * dslBridgeViewController;                  //@synthesize dslBridgeViewController=_dslBridgeViewController - In the implementation block
@property (nonatomic,retain) FBAdVideoAdViewController * videoAdViewController;                      //@synthesize videoAdViewController=_videoAdViewController - In the implementation block
@property (nonatomic,retain) FBAdEndCardViewController * endCardViewController;                      //@synthesize endCardViewController=_endCardViewController - In the implementation block
@property (nonatomic,retain) FBAdPlayableViewController * playableController;                        //@synthesize playableController=_playableController - In the implementation block
@property (nonatomic,retain) FBAdPlacementDefinition * placementDefinition;                          //@synthesize placementDefinition=_placementDefinition - In the implementation block
@property (nonatomic,copy) NSString * dataModelType;                                                 //@synthesize dataModelType=_dataModelType - In the implementation block
@property (nonatomic,retain) FBRewardedVideoAdDataModel * rewardedVideoDataModel;                    //@synthesize rewardedVideoDataModel=_rewardedVideoDataModel - In the implementation block
@property (nonatomic,retain) FBAdExtraHint * extraHint;                                              //@synthesize extraHint=_extraHint - In the implementation block
@property (nonatomic,retain) FBAdCommandProcessor * commandProcessor;                                //@synthesize commandProcessor=_commandProcessor - In the implementation block
@property (assign,nonatomic) double firstImpressionTime;                                             //@synthesize firstImpressionTime=_firstImpressionTime - In the implementation block
@property (nonatomic,copy) NSString * requestId;                                                     //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,readonly) FBAdOnDeviceHistoryDataManager * onDeviceHistoryManager; 
@property (assign,getter=isForceSkipped,nonatomic) BOOL forceSkipped;                                //@synthesize forceSkipped=_forceSkipped - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)placementID;
-(BOOL)isAdValid;
-(void)loadAdData:(id)arg1 forSize:(FBAdSize)arg2 forOrientation:(long long)arg3 forPlacement:(id)arg4 placementDefinition:(id)arg5 dataModelType:(id)arg6 rewardData:(id)arg7 extraHint:(id)arg8 ;
-(id)adDataModel;
-(BOOL)startAdFromRootViewController:(id)arg1 ;
-(BOOL)startAdFromRootViewController:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)isIntroCardEnabled;
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
-(BOOL)useAdaptiveLayout;
-(BOOL)shouldAttemptToRecoverFromDetachedViewController;
-(void)loadEndCard;
-(void)logAdapterLoaded;
-(void)viewControllerWantToProcessCTAWithEvent:(id)arg1 ;
-(void)viewControllerWantToProcessCTAWithGesture:(id)arg1 ;
-(void)viewControllerWantToProcessCTAWithTouchData:(id)arg1 commandURL:(id)arg2 ;
-(void)registerFirstImpressionTime;
-(void)markAdAsShownForOnDeviceHistory;
-(FBAdOnDeviceHistoryDataManager *)onDeviceHistoryManager;
-(id)funnel;
-(FBAdEndCardViewController *)endCardViewController;
-(void)setEndCardViewController:(FBAdEndCardViewController *)arg1 ;
-(double)firstImpressionTime;
-(void)setFirstImpressionTime:(double)arg1 ;
-(FBAdPlacementDefinition *)placementDefinition;
-(void)setPlacementDefinition:(FBAdPlacementDefinition *)arg1 ;
-(void)playableViewControllerDidLoad:(id)arg1 ;
-(void)playableViewController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)playableViewControllerDidClick:(id)arg1 ;
-(void)playableViewControllerComplete:(id)arg1 ;
-(void)playableViewControllerWantsToLogImpression:(id)arg1 withExtraData:(id)arg2 ;
-(void)playableViewControllerWillClose:(id)arg1 ;
-(void)playableViewControllerDidTerminate:(id)arg1 ;
-(void)mapCacheKeys:(id)arg1 ;
-(BOOL)setRewardData:(id)arg1 ;
-(id)viewControllerToBePresented;
-(void)rewardedVideoAdDidClick;
-(void)rewardedVideoAdDidClose;
-(void)rewardedVideoAdWillClose;
-(void)rewardedVideoAdDidLoad;
-(void)rewardedVideoAdDidFailWithError:(id)arg1 ;
-(void)rewardedVideoAdWillLogImpression;
-(void)rewardedVideoAdVideoComplete;
-(void)rewardedVideoAdServerSuccess;
-(void)rewardedVideoAdServerFailed;
-(void)setupViewControllerForDataModel:(id)arg1 ;
-(void)checkServerSideReward;
-(void)dismissControllerWithAdSuccess:(BOOL)arg1 ;
-(id)currentVideoController;
-(id)currentEndCardController;
-(void)processCommandURLfromDataModelExtraData:(id)arg1 commandURL:(id)arg2 ;
-(FBRewardedVideoRewardData *)internalRewardData;
-(void)setInternalRewardData:(FBRewardedVideoRewardData *)arg1 ;
-(FBAdDSLBridgeViewController *)dslBridgeViewController;
-(void)setDslBridgeViewController:(FBAdDSLBridgeViewController *)arg1 ;
-(FBAdVideoAdViewController *)videoAdViewController;
-(void)setVideoAdViewController:(FBAdVideoAdViewController *)arg1 ;
-(FBAdPlayableViewController *)playableController;
-(void)setPlayableController:(FBAdPlayableViewController *)arg1 ;
-(NSString *)dataModelType;
-(void)setDataModelType:(NSString *)arg1 ;
-(FBRewardedVideoAdDataModel *)rewardedVideoDataModel;
-(void)setRewardedVideoDataModel:(FBRewardedVideoAdDataModel *)arg1 ;
-(BOOL)isForceSkipped;
-(void)setForceSkipped:(BOOL)arg1 ;
-(id)context;
-(SCD_Struct_IM9)duration;
-(NSString *)requestId;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(UINavigationController *)navigationController;
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(id)delayTime;
-(void)setRequestId:(NSString *)arg1 ;
-(FBAdCommandProcessor *)commandProcessor;
-(void)setCommandProcessor:(FBAdCommandProcessor *)arg1 ;
@end
