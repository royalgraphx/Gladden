/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <MessagesExtension/FBAdReportingCoordinatorDelegate.h>
#import <MessagesExtension/FBAdViewabilityValidatorDelegate.h>
#import <MessagesExtension/FBAdDSLViewControllerDelegate.h>

@protocol FBAdDSLBridgeDelegate, OS_dispatch_queue;
@class FBAdDSLViewController, FBAdReportingCoordinator, FBNativeAdDataModel, FBAdFunnelLogger, FBAdViewabilityValidator, FBAdPlacementDefinition, NSDate, NSObject, NSString;

@interface FBAdDSLBridgeViewController : UIViewController <FBAdReportingCoordinatorDelegate, FBAdViewabilityValidatorDelegate, FBAdDSLViewControllerDelegate> {

	BOOL _dynamicViewControllerNotifiedImpression;
	BOOL _rewardDidComplete;
	id<FBAdDSLBridgeDelegate> _delegate;
	FBAdDSLViewController* _dynamicViewController;
	FBAdReportingCoordinator* _reportingCoordinator;
	FBNativeAdDataModel* _model;
	FBAdFunnelLogger* _funnelLogger;
	FBAdViewabilityValidator* _viewabilityValidator;
	FBAdPlacementDefinition* _placementDefinition;
	NSDate* _loadTime;
	NSDate* _impressionTime;
	NSDate* _CTATime;
	NSDate* _memWarning;
	unsigned long long _errorCounter;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,readonly) FBAdDSLViewController * dynamicViewController;              //@synthesize dynamicViewController=_dynamicViewController - In the implementation block
@property (nonatomic,retain) FBAdReportingCoordinator * reportingCoordinator;              //@synthesize reportingCoordinator=_reportingCoordinator - In the implementation block
@property (nonatomic,copy) FBNativeAdDataModel * model;                                    //@synthesize model=_model - In the implementation block
@property (assign,nonatomic,__weak) FBAdFunnelLogger * funnelLogger;                       //@synthesize funnelLogger=_funnelLogger - In the implementation block
@property (nonatomic,retain) FBAdViewabilityValidator * viewabilityValidator;              //@synthesize viewabilityValidator=_viewabilityValidator - In the implementation block
@property (nonatomic,retain) FBAdPlacementDefinition * placementDefinition;                //@synthesize placementDefinition=_placementDefinition - In the implementation block
@property (assign,nonatomic) BOOL dynamicViewControllerNotifiedImpression;                 //@synthesize dynamicViewControllerNotifiedImpression=_dynamicViewControllerNotifiedImpression - In the implementation block
@property (nonatomic,retain) NSDate * loadTime;                                            //@synthesize loadTime=_loadTime - In the implementation block
@property (nonatomic,retain) NSDate * impressionTime;                                      //@synthesize impressionTime=_impressionTime - In the implementation block
@property (nonatomic,retain) NSDate * CTATime;                                             //@synthesize CTATime=_CTATime - In the implementation block
@property (nonatomic,retain) NSDate * memWarning;                                          //@synthesize memWarning=_memWarning - In the implementation block
@property (assign,nonatomic) unsigned long long errorCounter;                              //@synthesize errorCounter=_errorCounter - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                     //@synthesize serialQueue=_serialQueue - In the implementation block
@property (assign,nonatomic) BOOL rewardDidComplete;                                       //@synthesize rewardDidComplete=_rewardDidComplete - In the implementation block
@property (assign,nonatomic,__weak) id<FBAdDSLBridgeDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dynamicAdViewControllerDidLoad:(id)arg1 ;
-(void)dynamicAdViewController:(id)arg1 didFailWithError:(id)arg2 ;
-(FBAdDSLViewController *)dynamicViewController;
-(FBAdPlacementDefinition *)placementDefinition;
-(void)setPlacementDefinition:(FBAdPlacementDefinition *)arg1 ;
-(FBAdFunnelLogger *)funnelLogger;
-(void)setFunnelLogger:(FBAdFunnelLogger *)arg1 ;
-(FBAdReportingCoordinator *)reportingCoordinator;
-(void)setReportingCoordinator:(FBAdReportingCoordinator *)arg1 ;
-(void)dynamicAdViewController:(id)arg1 rewardCompletedWithTouch:(id)arg2 ;
-(void)dynamicAdViewController:(id)arg1 CTATappedWithTouch:(id)arg2 extraData:(id)arg3 ;
-(void)dynamicAdViewController:(id)arg1 reportImpressionWithAdView:(id)arg2 ;
-(void)dynamicAdViewController:(id)arg1 reportFlowStartedWithTouch:(id)arg2 ;
-(void)dynamicAdViewController:(id)arg1 closeButtonTappedWithTouch:(id)arg2 ;
-(void)dynamicAdViewController:(id)arg1 logEventWithData:(id)arg2 ;
-(void)dynamicAdViewController:(id)arg1 logErrorWithData:(id)arg2 ;
-(void)dynamicAdViewController:(id)arg1 debugEventWithData:(id)arg2 ;
-(void)dynamicAdViewController:(id)arg1 logFunnelEvent:(unsigned long long)arg2 extraData:(id)arg3 ;
-(void)dynamicAdViewController:(id)arg1 logFunnelEventWithName:(id)arg2 ;
-(void)assetForURL:(id)arg1 type:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)viewabilityValidator:(id)arg1 checkedWithStatus:(long long)arg2 ;
-(void)adReportingCoordinatorDidCompleteFlow:(id)arg1 reason:(id)arg2 flowType:(long long)arg3 ;
-(void)adReportingCoordinatorDidCancelFlow:(id)arg1 ;
-(void)adReportingCoordinatorDidCloseWhyAmISeeingThis:(id)arg1 ;
-(id)initWithNativeAdDataModel:(id)arg1 placementDefinition:(id)arg2 ;
-(void)prepareToShowAd;
-(void)loadAdWithData:(id)arg1 ;
-(void)logImpression;
-(void)dismissDSLViewController;
-(id)dslViewStateExtraData;
-(void)logErrorEventWithData:(id)arg1 ;
-(void)logDSLEventWithData:(id)arg1 ;
-(FBAdViewabilityValidator *)viewabilityValidator;
-(void)setViewabilityValidator:(FBAdViewabilityValidator *)arg1 ;
-(BOOL)dynamicViewControllerNotifiedImpression;
-(void)setDynamicViewControllerNotifiedImpression:(BOOL)arg1 ;
-(void)setLoadTime:(NSDate *)arg1 ;
-(NSDate *)CTATime;
-(void)setCTATime:(NSDate *)arg1 ;
-(NSDate *)memWarning;
-(void)setMemWarning:(NSDate *)arg1 ;
-(unsigned long long)errorCounter;
-(void)setErrorCounter:(unsigned long long)arg1 ;
-(BOOL)rewardDidComplete;
-(void)setRewardDidComplete:(BOOL)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<FBAdDSLBridgeDelegate>)delegate;
-(void)setDelegate:(id<FBAdDSLBridgeDelegate>)arg1 ;
-(id)context;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(FBNativeAdDataModel *)model;
-(id)sdkVersion;
-(void)setModel:(FBNativeAdDataModel *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)didReceiveMemoryWarning;
-(BOOL)prefersStatusBarHidden;
-(NSDate *)loadTime;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isReadyToPresent;
-(void)setupNotifications;
-(NSDate *)impressionTime;
-(void)setImpressionTime:(NSDate *)arg1 ;
@end

