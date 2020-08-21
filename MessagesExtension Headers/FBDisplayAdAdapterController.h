/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <MessagesExtension/FBAdProviderDelegate.h>
#import <MessagesExtension/FBDisplayAdAdapterDelegate.h>

@protocol FBDisplayAdAdapterControllerDelegate;
@class FBDisplayAdAdapter, FBAdCandidate, FBAdPlacementDefinition, FBAdProvider, FBAdEnvironmentData, FBAdTimer, FBRewardedVideoRewardData, NSString;

@interface FBDisplayAdAdapterController : NSObject <FBAdProviderDelegate, FBDisplayAdAdapterDelegate> {

	BOOL _flexibleAdSize;
	id<FBDisplayAdAdapterControllerDelegate> _delegate;
	FBDisplayAdAdapter* _adapter;
	FBAdCandidate* _adCandidate;
	FBAdPlacementDefinition* _placementDefinition;
	FBAdProvider* _adProvider;
	FBAdEnvironmentData* _environment;
	FBAdTimer* _adapterTimeoutTimer;
	FBRewardedVideoRewardData* _rewardData;
	double _adapterLoadTime;
	long long _retryCount;
	CGSize _actualAdSize;
	FBAdSize _adSizeType;

}

@property (nonatomic,retain) FBAdProvider * adProvider;                                             //@synthesize adProvider=_adProvider - In the implementation block
@property (nonatomic,retain) FBAdCandidate * adCandidate;                                           //@synthesize adCandidate=_adCandidate - In the implementation block
@property (nonatomic,retain) FBAdEnvironmentData * environment;                                     //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) FBAdTimer * adapterTimeoutTimer;                                       //@synthesize adapterTimeoutTimer=_adapterTimeoutTimer - In the implementation block
@property (nonatomic,retain) FBDisplayAdAdapter * adapter;                                          //@synthesize adapter=_adapter - In the implementation block
@property (assign,getter=isFlexibleAdSize,nonatomic) BOOL flexibleAdSize;                           //@synthesize flexibleAdSize=_flexibleAdSize - In the implementation block
@property (nonatomic,retain) FBAdPlacementDefinition * placementDefinition;                         //@synthesize placementDefinition=_placementDefinition - In the implementation block
@property (nonatomic,retain) FBRewardedVideoRewardData * rewardData;                                //@synthesize rewardData=_rewardData - In the implementation block
@property (assign,nonatomic) CGSize actualAdSize;                                                   //@synthesize actualAdSize=_actualAdSize - In the implementation block
@property (assign,nonatomic) FBAdSize adSizeType;                                                   //@synthesize adSizeType=_adSizeType - In the implementation block
@property (assign,nonatomic) double adapterLoadTime;                                                //@synthesize adapterLoadTime=_adapterLoadTime - In the implementation block
@property (assign,nonatomic) long long retryCount;                                                  //@synthesize retryCount=_retryCount - In the implementation block
@property (assign,nonatomic,__weak) id<FBDisplayAdAdapterControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)adFormatWithPlacementType:(long long)arg1 ;
+(id)placementTypeToAdFormatMap;
-(void)loadAd;
-(BOOL)startAdFromRootViewController:(id)arg1 animated:(BOOL)arg2 ;
-(FBAdPlacementDefinition *)placementDefinition;
-(void)setPlacementDefinition:(FBAdPlacementDefinition *)arg1 ;
-(void)setRewardData:(FBRewardedVideoRewardData *)arg1 ;
-(CGSize)actualAdSize;
-(void)setActualAdSize:(CGSize)arg1 ;
-(FBAdSize)adSizeType;
-(void)setAdSizeType:(FBAdSize)arg1 ;
-(void)adapterDidFinishHandlingClick:(id)arg1 ;
-(void)adapterWillUnload:(id)arg1 ;
-(void)adapterDidUnload:(id)arg1 ;
-(void)adapterVideoDidComplete:(id)arg1 ;
-(void)adapterServerRewardSuccess:(id)arg1 ;
-(void)adapterServerRewardFailed:(id)arg1 ;
-(void)adapterDidClick:(id)arg1 url:(id)arg2 playerHandles:(BOOL)arg3 ;
-(void)adapterDidLoad:(id)arg1 ;
-(void)adapter:(id)arg1 didFailWithError:(id)arg2 ;
-(void)adapterWillLogImpression:(id)arg1 ;
-(void)onAdRequestSuccess:(id)arg1 ;
-(void)onAdRequestError:(id)arg1 ;
-(void)loadAdWithProvider:(id)arg1 withEnvironment:(id)arg2 withRewardData:(id)arg3 ;
-(BOOL)updateRewardData:(id)arg1 ;
-(void)loadAdapter;
-(void)scheduleTimeout:(long long)arg1 ;
-(void)invalidateInProgressAd;
-(void)setInitialAdViewSize:(FBAdSize)arg1 ;
-(BOOL)loadWithAdCandidate:(id)arg1 ;
-(void)invalidateCurrentAd;
-(id)adapterForPlacementType:(long long)arg1 ;
-(void)reportTimeout;
-(void)logAdapterFailureWithAdapter:(id)arg1 error:(id)arg2 ;
-(FBAdCandidate *)adCandidate;
-(void)setAdCandidate:(FBAdCandidate *)arg1 ;
-(void)setAdProvider:(FBAdProvider *)arg1 ;
-(FBAdTimer *)adapterTimeoutTimer;
-(void)setAdapterTimeoutTimer:(FBAdTimer *)arg1 ;
-(BOOL)isFlexibleAdSize;
-(void)setFlexibleAdSize:(BOOL)arg1 ;
-(FBRewardedVideoRewardData *)rewardData;
-(double)adapterLoadTime;
-(void)setAdapterLoadTime:(double)arg1 ;
-(void)dealloc;
-(id<FBDisplayAdAdapterControllerDelegate>)delegate;
-(void)setDelegate:(id<FBDisplayAdAdapterControllerDelegate>)arg1 ;
-(FBAdEnvironmentData *)environment;
-(void)setEnvironment:(FBAdEnvironmentData *)arg1 ;
-(void)refresh;
-(long long)retryCount;
-(void)setRetryCount:(long long)arg1 ;
-(FBDisplayAdAdapter *)adapter;
-(void)retry;
-(void)setAdapter:(FBDisplayAdAdapter *)arg1 ;
-(FBAdProvider *)adProvider;
-(void)invalidateTimeoutTimer;
@end

