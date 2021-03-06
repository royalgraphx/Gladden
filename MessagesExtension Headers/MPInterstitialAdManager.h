/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MPAdServerCommunicatorDelegate.h>
#import <MessagesExtension/MPInterstitialAdapterDelegate.h>

@protocol MPInterstitialAdManagerDelegate;
@class MPBaseInterstitialAdapter, MPAdServerCommunicator, MPAdConfiguration, NSMutableArray, MPStopwatch, MPAdTargeting, NSURL, NSString;

@interface MPInterstitialAdManager : NSObject <MPAdServerCommunicatorDelegate, MPInterstitialAdapterDelegate> {

	BOOL _ready;
	BOOL _loading;
	id<MPInterstitialAdManagerDelegate> _delegate;
	MPBaseInterstitialAdapter* _adapter;
	MPAdServerCommunicator* _communicator;
	MPAdConfiguration* _requestingConfiguration;
	NSMutableArray* _remainingConfigurations;
	MPStopwatch* _loadStopwatch;
	MPAdTargeting* _targeting;
	NSURL* _mostRecentlyLoadedURL;

}

@property (assign,nonatomic) BOOL loading;                                                     //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic) BOOL ready;                                                       //@synthesize ready=_ready - In the implementation block
@property (nonatomic,retain) MPBaseInterstitialAdapter * adapter;                              //@synthesize adapter=_adapter - In the implementation block
@property (nonatomic,retain) MPAdServerCommunicator * communicator;                            //@synthesize communicator=_communicator - In the implementation block
@property (nonatomic,retain) MPAdConfiguration * requestingConfiguration;                      //@synthesize requestingConfiguration=_requestingConfiguration - In the implementation block
@property (nonatomic,retain) NSMutableArray * remainingConfigurations;                         //@synthesize remainingConfigurations=_remainingConfigurations - In the implementation block
@property (nonatomic,retain) MPStopwatch * loadStopwatch;                                      //@synthesize loadStopwatch=_loadStopwatch - In the implementation block
@property (nonatomic,retain) MPAdTargeting * targeting;                                        //@synthesize targeting=_targeting - In the implementation block
@property (nonatomic,retain) NSURL * mostRecentlyLoadedURL;                                    //@synthesize mostRecentlyLoadedURL=_mostRecentlyLoadedURL - In the implementation block
@property (assign,nonatomic,__weak) id<MPInterstitialAdManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)presentInterstitialFromViewController:(id)arg1 ;
-(id)adUnitId;
-(void)adapter:(id)arg1 didFailToLoadAdWithError:(id)arg2 ;
-(void)loadInterstitialWithAdUnitID:(id)arg1 targeting:(id)arg2 ;
-(id)interstitialAdController;
-(id)interstitialDelegate;
-(void)communicatorDidFailWithError:(id)arg1 ;
-(BOOL)isFullscreenAd;
-(void)communicatorDidReceiveAdConfigurations:(id)arg1 ;
-(MPAdTargeting *)targeting;
-(void)setTargeting:(MPAdTargeting *)arg1 ;
-(void)loadAdWithURL:(id)arg1 ;
-(void)setRequestingConfiguration:(MPAdConfiguration *)arg1 ;
-(void)setMostRecentlyLoadedURL:(NSURL *)arg1 ;
-(MPAdConfiguration *)requestingConfiguration;
-(MPStopwatch *)loadStopwatch;
-(void)setRemainingConfigurations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)remainingConfigurations;
-(void)fetchAdWithConfiguration:(id)arg1 ;
-(NSURL *)mostRecentlyLoadedURL;
-(void)setLoadStopwatch:(MPStopwatch *)arg1 ;
-(void)setUpAdapterWithConfiguration:(id)arg1 ;
-(void)adapterDidFinishLoadingAd:(id)arg1 ;
-(void)interstitialWillAppearForAdapter:(id)arg1 ;
-(void)interstitialDidAppearForAdapter:(id)arg1 ;
-(void)interstitialWillDisappearForAdapter:(id)arg1 ;
-(void)interstitialDidDisappearForAdapter:(id)arg1 ;
-(void)interstitialDidExpireForAdapter:(id)arg1 ;
-(void)interstitialDidReceiveTapEventForAdapter:(id)arg1 ;
-(void)interstitialWillLeaveApplicationForAdapter:(id)arg1 ;
-(void)interstitialDidReceiveImpressionEventForAdapter:(id)arg1 ;
-(void)dealloc;
-(id<MPInterstitialAdManagerDelegate>)delegate;
-(void)setDelegate:(id<MPInterstitialAdManagerDelegate>)arg1 ;
-(id)location;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)ready;
-(MPBaseInterstitialAdapter *)adapter;
-(BOOL)loading;
-(void)setReady:(BOOL)arg1 ;
-(void)setAdapter:(MPBaseInterstitialAdapter *)arg1 ;
-(void)setLoading:(BOOL)arg1 ;
-(MPAdServerCommunicator *)communicator;
-(void)setCommunicator:(MPAdServerCommunicator *)arg1 ;
@end

