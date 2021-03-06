/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <MessagesExtension/FBDisplayAdControllerDelegate.h>

@protocol FBRewardedVideoAdDelegate;
@class NSString, FBDisplayAdController, FBAdBaseFunnel, FBRewardedVideoRewardData, FBAdExtraHint, FBAdExperienceConfig;

@interface FBRewardedVideoAd : NSObject <FBDisplayAdControllerDelegate> {

	BOOL _initialized;
	BOOL _ready;
	BOOL _shown;
	NSString* _placementID;
	id<FBRewardedVideoAdDelegate> _delegate;
	FBDisplayAdController* _adController;
	FBAdBaseFunnel* _funnel;
	FBRewardedVideoRewardData* _rewardData;

}

@property (nonatomic,retain) FBDisplayAdController * adController;                       //@synthesize adController=_adController - In the implementation block
@property (nonatomic,retain) FBAdBaseFunnel * funnel;                                    //@synthesize funnel=_funnel - In the implementation block
@property (nonatomic,retain) FBRewardedVideoRewardData * rewardData;                     //@synthesize rewardData=_rewardData - In the implementation block
@property (assign,getter=isInitialized,nonatomic) BOOL initialized;                      //@synthesize initialized=_initialized - In the implementation block
@property (assign,getter=isReady,nonatomic) BOOL ready;                                  //@synthesize ready=_ready - In the implementation block
@property (assign,getter=hasBeenShown,nonatomic) BOOL shown;                             //@synthesize shown=_shown - In the implementation block
@property (nonatomic,copy) NSString * placementID;                                       //@synthesize placementID=_placementID - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IM9 duration; 
@property (assign,nonatomic,__weak) id<FBRewardedVideoAdDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isAdValid,nonatomic,readonly) BOOL adValid; 
@property (nonatomic,retain) FBAdExtraHint * extraHint; 
@property (nonatomic,copy) FBAdExperienceConfig * adExperienceConfig; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)loadAd;
-(id)initWithPlacementID:(id)arg1 ;
-(void)loadAdWithBidPayload:(id)arg1 ;
-(NSString *)placementID;
-(BOOL)isAdValid;
-(BOOL)showAdFromRootViewController:(id)arg1 ;
-(void)setPlacementID:(NSString *)arg1 ;
-(FBAdExtraHint *)extraHint;
-(void)setExtraHint:(FBAdExtraHint *)arg1 ;
-(FBAdBaseFunnel *)funnel;
-(void)setRewardData:(FBRewardedVideoRewardData *)arg1 ;
-(FBAdExperienceConfig *)adExperienceConfig;
-(void)setAdExperienceConfig:(FBAdExperienceConfig *)arg1 ;
-(void)displayAdControllerImpression:(id)arg1 ;
-(void)displayAdControllerClickThrough:(id)arg1 ;
-(void)displayAdControllerUserClosed:(id)arg1 ;
-(void)displayAdControllerVideoComplete:(id)arg1 ;
-(void)displayAdControllerServerRewardSuccess:(id)arg1 ;
-(void)displayAdControllerServerRewardFailed:(id)arg1 ;
-(void)displayAdControllerLoaded:(id)arg1 ;
-(void)displayAdControllerStopped:(id)arg1 ;
-(void)displayAdController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)doLoadAd:(id)arg1 ;
-(void)tellDelegateThatWeDidFailWithError:(id)arg1 ;
-(FBRewardedVideoRewardData *)rewardData;
-(void)setFunnel:(FBAdBaseFunnel *)arg1 ;
-(BOOL)hasBeenShown;
-(BOOL)showAdFromRootViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithPlacementID:(id)arg1 withUserID:(id)arg2 withCurrency:(id)arg3 ;
-(BOOL)setRewardDataWithUserID:(id)arg1 withCurrency:(id)arg2 ;
-(id)init;
-(id<FBRewardedVideoAdDelegate>)delegate;
-(void)setDelegate:(id<FBRewardedVideoAdDelegate>)arg1 ;
-(BOOL)isReady;
-(SCD_Struct_IM9)duration;
-(BOOL)isInitialized;
-(void)setReady:(BOOL)arg1 ;
-(void)setInitialized:(BOOL)arg1 ;
-(FBDisplayAdController *)adController;
-(void)setShown:(BOOL)arg1 ;
-(void)setAdController:(FBDisplayAdController *)arg1 ;
@end

