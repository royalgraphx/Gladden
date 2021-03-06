/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <UIKitCore/UIView.h>
#import <MessagesExtension/FBDisplayAdControllerDelegate.h>

@protocol FBAdViewDelegate;
@class NSString, UIViewController, UIView, FBDisplayAdController, FBDisplayAdAdapter, FBAdExtraHint;

@interface FBAdView : UIView <FBDisplayAdControllerDelegate> {

	BOOL _initialized;
	NSString* _placementID;
	UIViewController* _rootViewController;
	id<FBAdViewDelegate> _delegate;
	UIView* _adView;
	FBDisplayAdController* _adController;
	FBDisplayAdAdapter* _adapter;
	FBAdSize _adSize;
	CGSize _actualAdSize;

}

@property (assign,nonatomic,__weak) UIView * adView;                                    //@synthesize adView=_adView - In the implementation block
@property (nonatomic,retain) FBDisplayAdController * adController;                      //@synthesize adController=_adController - In the implementation block
@property (assign,nonatomic) FBAdSize adSize;                                           //@synthesize adSize=_adSize - In the implementation block
@property (assign,getter=isInitialized,nonatomic) BOOL initialized;                     //@synthesize initialized=_initialized - In the implementation block
@property (nonatomic,copy) NSString * placementID;                                      //@synthesize placementID=_placementID - In the implementation block
@property (nonatomic,retain) FBDisplayAdAdapter * adapter;                              //@synthesize adapter=_adapter - In the implementation block
@property (assign,nonatomic) CGSize actualAdSize;                                       //@synthesize actualAdSize=_actualAdSize - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * rootViewController;              //@synthesize rootViewController=_rootViewController - In the implementation block
@property (getter=isAdValid,nonatomic,readonly) BOOL adValid; 
@property (assign,nonatomic,__weak) id<FBAdViewDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBAdExtraHint * extraHint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAdSize:(FBAdSize)arg1 ;
-(FBAdSize)adSize;
-(void)loadAd;
-(void)loadAdWithBidPayload:(id)arg1 ;
-(NSString *)placementID;
-(BOOL)isAdValid;
-(id)initWithPlacementID:(id)arg1 adSize:(FBAdSize)arg2 rootViewController:(id)arg3 ;
-(void)setPlacementID:(NSString *)arg1 ;
-(FBAdExtraHint *)extraHint;
-(void)setExtraHint:(FBAdExtraHint *)arg1 ;
-(BOOL)isLoadAdOldBehaviourDisabled;
-(BOOL)shouldDelayAdLoadedCallbackForMarkupAds;
-(void)clearSubviews;
-(void)displayAdController:(id)arg1 presentedView:(id)arg2 ;
-(void)displayAdControllerImpression:(id)arg1 ;
-(void)displayAdControllerClickThrough:(id)arg1 ;
-(void)displayAdControllerUserClosed:(id)arg1 ;
-(void)displayAdControllerLoaded:(id)arg1 ;
-(void)displayAdControllerStopped:(id)arg1 ;
-(void)displayAdController:(id)arg1 didFailWithError:(id)arg2 ;
-(id)initWithPlacementID:(id)arg1 bidPayload:(id)arg2 rootViewController:(id)arg3 error:(id*)arg4 ;
-(void)doLoadAd:(id)arg1 ;
-(void)tellDelegateThatWeDidFailWithError:(id)arg1 ;
-(void)disableAutoRefresh;
-(void)notifyDelegatAdIsLoaded;
-(void)updateInitialAdViewSize:(FBAdSize)arg1 ;
-(CGSize)actualAdSize;
-(void)setActualAdSize:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<FBAdViewDelegate>)delegate;
-(void)setDelegate:(id<FBAdViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setRootViewController:(UIViewController *)arg1 ;
-(UIViewController *)rootViewController;
-(FBDisplayAdAdapter *)adapter;
-(BOOL)isInitialized;
-(void)setAdapter:(FBDisplayAdAdapter *)arg1 ;
-(void)setInitialized:(BOOL)arg1 ;
-(FBDisplayAdController *)adController;
-(void)setAdView:(UIView *)arg1 ;
-(UIView *)adView;
-(void)setAdController:(FBDisplayAdController *)arg1 ;
@end

