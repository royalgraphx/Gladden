/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MPAdServerCommunicatorDelegate.h>
#import <MessagesExtension/MPRewardedVideoAdapterDelegate.h>

@protocol MPRewardedVideoAdManagerDelegate;
@class NSString, NSArray, MPAdTargeting, MPRewardedVideoAdapter, MPAdServerCommunicator, MPAdConfiguration, NSMutableArray, NSURL, MPStopwatch, MPRewardedVideoReward;

@interface MPRewardedVideoAdManager : NSObject <MPAdServerCommunicatorDelegate, MPRewardedVideoAdapterDelegate> {

	BOOL _loading;
	BOOL _playedAd;
	BOOL _ready;
	id<MPRewardedVideoAdManagerDelegate> _delegate;
	NSString* _adUnitId;
	NSArray* _mediationSettings;
	NSString* _customerId;
	MPAdTargeting* _targeting;
	MPRewardedVideoAdapter* _adapter;
	MPAdServerCommunicator* _communicator;
	MPAdConfiguration* _configuration;
	NSMutableArray* _remainingConfigurations;
	NSURL* _mostRecentlyLoadedURL;
	MPStopwatch* _loadStopwatch;

}

@property (nonatomic,retain) MPRewardedVideoAdapter * adapter;                                  //@synthesize adapter=_adapter - In the implementation block
@property (nonatomic,retain) MPAdServerCommunicator * communicator;                             //@synthesize communicator=_communicator - In the implementation block
@property (nonatomic,retain) MPAdConfiguration * configuration;                                 //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSMutableArray * remainingConfigurations;                          //@synthesize remainingConfigurations=_remainingConfigurations - In the implementation block
@property (nonatomic,retain) NSURL * mostRecentlyLoadedURL;                                     //@synthesize mostRecentlyLoadedURL=_mostRecentlyLoadedURL - In the implementation block
@property (assign,nonatomic) BOOL loading;                                                      //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic) BOOL playedAd;                                                     //@synthesize playedAd=_playedAd - In the implementation block
@property (assign,nonatomic) BOOL ready;                                                        //@synthesize ready=_ready - In the implementation block
@property (nonatomic,retain) MPStopwatch * loadStopwatch;                                       //@synthesize loadStopwatch=_loadStopwatch - In the implementation block
@property (assign,nonatomic,__weak) id<MPRewardedVideoAdManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * adUnitId;                                             //@synthesize adUnitId=_adUnitId - In the implementation block
@property (nonatomic,retain) NSArray * mediationSettings;                                       //@synthesize mediationSettings=_mediationSettings - In the implementation block
@property (nonatomic,copy) NSString * customerId;                                               //@synthesize customerId=_customerId - In the implementation block
@property (nonatomic,retain) MPAdTargeting * targeting;                                         //@synthesize targeting=_targeting - In the implementation block
@property (nonatomic,readonly) NSArray * availableRewards; 
@property (nonatomic,readonly) MPRewardedVideoReward * selectedReward; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)instanceMediationSettingsForClass:(Class)arg1 ;
-(BOOL)hasAdAvailable;
-(void)handleAdPlayedForCustomEventNetwork;
-(NSString *)adUnitId;
-(MPRewardedVideoReward *)selectedReward;
-(void)communicatorDidFailWithError:(id)arg1 ;
-(BOOL)isFullscreenAd;
-(void)communicatorDidReceiveAdConfigurations:(id)arg1 ;
-(NSArray *)availableRewards;
-(Class)customEventClass;
-(MPAdTargeting *)targeting;
-(void)setTargeting:(MPAdTargeting *)arg1 ;
-(void)loadAdWithURL:(id)arg1 ;
-(void)setMostRecentlyLoadedURL:(NSURL *)arg1 ;
-(MPStopwatch *)loadStopwatch;
-(void)setRemainingConfigurations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)remainingConfigurations;
-(void)fetchAdWithConfiguration:(id)arg1 ;
-(NSURL *)mostRecentlyLoadedURL;
-(void)setLoadStopwatch:(MPStopwatch *)arg1 ;
-(BOOL)playedAd;
-(void)setCustomerId:(NSString *)arg1 ;
-(void)setPlayedAd:(BOOL)arg1 ;
-(void)rewardedVideoDidFailToLoadForAdapter:(id)arg1 error:(id)arg2 ;
-(NSArray *)mediationSettings;
-(NSString *)customerId;
-(void)rewardedVideoDidLoadForAdapter:(id)arg1 ;
-(void)rewardedVideoDidExpireForAdapter:(id)arg1 ;
-(void)rewardedVideoDidFailToPlayForAdapter:(id)arg1 error:(id)arg2 ;
-(void)rewardedVideoWillAppearForAdapter:(id)arg1 ;
-(void)rewardedVideoDidAppearForAdapter:(id)arg1 ;
-(void)rewardedVideoWillDisappearForAdapter:(id)arg1 ;
-(void)rewardedVideoDidDisappearForAdapter:(id)arg1 ;
-(void)rewardedVideoDidReceiveTapEventForAdapter:(id)arg1 ;
-(void)rewardedVideoDidReceiveImpressionEventForAdapter:(id)arg1 ;
-(void)rewardedVideoWillLeaveApplicationForAdapter:(id)arg1 ;
-(void)rewardedVideoShouldRewardUserForAdapter:(id)arg1 reward:(id)arg2 ;
-(id)rewardedVideoAdUnitId;
-(id)rewardedVideoCustomerId;
-(id)initWithAdUnitID:(id)arg1 delegate:(id)arg2 ;
-(void)loadRewardedVideoAdWithCustomerId:(id)arg1 targeting:(id)arg2 ;
-(void)presentRewardedVideoAdFromViewController:(id)arg1 withReward:(id)arg2 customData:(id)arg3 ;
-(void)setMediationSettings:(NSArray *)arg1 ;
-(void)dealloc;
-(id<MPRewardedVideoAdManagerDelegate>)delegate;
-(void)setDelegate:(id<MPRewardedVideoAdManagerDelegate>)arg1 ;
-(void)setConfiguration:(MPAdConfiguration *)arg1 ;
-(MPAdConfiguration *)configuration;
-(BOOL)ready;
-(MPRewardedVideoAdapter *)adapter;
-(BOOL)loading;
-(void)setReady:(BOOL)arg1 ;
-(void)setAdapter:(MPRewardedVideoAdapter *)arg1 ;
-(void)setLoading:(BOOL)arg1 ;
-(MPAdServerCommunicator *)communicator;
-(void)setCommunicator:(MPAdServerCommunicator *)arg1 ;
@end

