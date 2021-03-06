/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <MessagesExtension/IMAssetActionDelegate.h>
#import <MessagesExtension/IMAssetBuilderDelegate.h>
#import <MessagesExtension/IMNativeLandingPageProcessorDelegate.h>
#import <MessagesExtension/IMViewabilityDelegate.h>

@protocol IMNativeRenderControllerDelegate;
@class NSDictionary, IMOMViewabilityTracker, NSString, NSMutableArray, IMMoatNativeViewability, UIColor, IMMoatWebViewability, IMNativeRenderViewController, IMAsset, UIView, IMNativeLandingPageProcessor, SKStoreProductViewController, NSNumber, IMNativeVideoProperties, NSArray, NSMutableString;

@interface IMNativeRenderController : NSObject <IMAssetActionDelegate, IMAssetBuilderDelegate, IMNativeLandingPageProcessorDelegate, IMViewabilityDelegate> {

	BOOL _viewabilityTracked;
	BOOL _shouldOpenLandingPage;
	BOOL _preloadWebviews;
	BOOL _isRewardedCallbackGiven;
	BOOL _skipAssetAvailable;
	BOOL _adAttachedToSKStore;
	id<IMNativeRenderControllerDelegate> _delegate;
	NSDictionary* _moatViewabilityParameters;
	IMOMViewabilityTracker* _omViewability;
	NSString* _accountID;
	NSMutableArray* _friendlyViewsArray;
	IMMoatNativeViewability* _moatViewability;
	UIColor* _unsafeAreaColor;
	IMMoatWebViewability* _moatWebViewability;
	NSDictionary* _assetJson;
	NSDictionary* _endCardAssetJson;
	NSDictionary* _endCardRootJson;
	IMNativeRenderViewController* _viewController;
	IMAsset* _root;
	IMAsset* _endCardRoot;
	long long _orientation;
	UIView* _view;
	IMNativeLandingPageProcessor* _landingPageProcessor;
	double _latency;
	NSString* _moatImpressionID;
	SKStoreProductViewController* _skProductViewController;
	NSNumber* _skStoreOrigin;
	NSString* _sKStoreID;
	IMNativeVideoProperties* _videoProps;
	unsigned long long _loadTimeStamp;
	NSDictionary* _rewardDictionary;
	NSArray* _pagesArray;
	unsigned long long _placementType;
	NSMutableArray* _pendingAssetsForViewBeacon;
	NSDictionary* _externalCLick;
	NSArray* _externalTrackers;
	NSString* _assetOnClickSKStoreID;
	double _renderStartTS;
	NSMutableString* _moatImpressionXML;
	NSNumber* _skipDelayOffset;
	CGRect _safeAreaFrame;

}

@property (nonatomic,retain) IMNativeVideoProperties * videoProps;                                //@synthesize videoProps=_videoProps - In the implementation block
@property (assign,nonatomic) unsigned long long loadTimeStamp;                                    //@synthesize loadTimeStamp=_loadTimeStamp - In the implementation block
@property (assign,nonatomic) BOOL isRewardedCallbackGiven;                                        //@synthesize isRewardedCallbackGiven=_isRewardedCallbackGiven - In the implementation block
@property (nonatomic,retain) NSDictionary * rewardDictionary;                                     //@synthesize rewardDictionary=_rewardDictionary - In the implementation block
@property (nonatomic,retain) NSArray * pagesArray;                                                //@synthesize pagesArray=_pagesArray - In the implementation block
@property (assign,nonatomic) unsigned long long placementType;                                    //@synthesize placementType=_placementType - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingAssetsForViewBeacon;                         //@synthesize pendingAssetsForViewBeacon=_pendingAssetsForViewBeacon - In the implementation block
@property (nonatomic,retain) NSDictionary * externalCLick;                                        //@synthesize externalCLick=_externalCLick - In the implementation block
@property (nonatomic,retain) NSArray * externalTrackers;                                          //@synthesize externalTrackers=_externalTrackers - In the implementation block
@property (nonatomic,retain) NSString * assetOnClickSKStoreID;                                    //@synthesize assetOnClickSKStoreID=_assetOnClickSKStoreID - In the implementation block
@property (assign,nonatomic) double renderStartTS;                                                //@synthesize renderStartTS=_renderStartTS - In the implementation block
@property (nonatomic,retain) NSMutableString * moatImpressionXML;                                 //@synthesize moatImpressionXML=_moatImpressionXML - In the implementation block
@property (assign,nonatomic) BOOL skipAssetAvailable;                                             //@synthesize skipAssetAvailable=_skipAssetAvailable - In the implementation block
@property (nonatomic,retain) NSNumber * skipDelayOffset;                                          //@synthesize skipDelayOffset=_skipDelayOffset - In the implementation block
@property (assign,nonatomic) BOOL adAttachedToSKStore;                                            //@synthesize adAttachedToSKStore=_adAttachedToSKStore - In the implementation block
@property (assign,nonatomic,__weak) id<IMNativeRenderControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDictionary * moatViewabilityParameters;                            //@synthesize moatViewabilityParameters=_moatViewabilityParameters - In the implementation block
@property (nonatomic,retain) IMOMViewabilityTracker * omViewability;                              //@synthesize omViewability=_omViewability - In the implementation block
@property (nonatomic,retain) NSString * accountID;                                                //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,retain) NSMutableArray * friendlyViewsArray;                                 //@synthesize friendlyViewsArray=_friendlyViewsArray - In the implementation block
@property (nonatomic,retain) IMMoatNativeViewability * moatViewability;                           //@synthesize moatViewability=_moatViewability - In the implementation block
@property (assign,nonatomic) CGRect safeAreaFrame;                                                //@synthesize safeAreaFrame=_safeAreaFrame - In the implementation block
@property (nonatomic,retain) UIColor * unsafeAreaColor;                                           //@synthesize unsafeAreaColor=_unsafeAreaColor - In the implementation block
@property (nonatomic,retain) IMMoatWebViewability * moatWebViewability;                           //@synthesize moatWebViewability=_moatWebViewability - In the implementation block
@property (nonatomic,retain) NSDictionary * assetJson;                                            //@synthesize assetJson=_assetJson - In the implementation block
@property (nonatomic,retain) NSDictionary * endCardAssetJson;                                     //@synthesize endCardAssetJson=_endCardAssetJson - In the implementation block
@property (nonatomic,retain) NSDictionary * endCardRootJson;                                      //@synthesize endCardRootJson=_endCardRootJson - In the implementation block
@property (nonatomic,retain) IMNativeRenderViewController * viewController;                       //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) IMAsset * root;                                                      //@synthesize root=_root - In the implementation block
@property (nonatomic,retain) IMAsset * endCardRoot;                                               //@synthesize endCardRoot=_endCardRoot - In the implementation block
@property (assign,nonatomic) long long orientation;                                               //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,retain) UIView * view;                                                       //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) IMNativeLandingPageProcessor * landingPageProcessor;                 //@synthesize landingPageProcessor=_landingPageProcessor - In the implementation block
@property (assign,nonatomic) BOOL viewabilityTracked;                                             //@synthesize viewabilityTracked=_viewabilityTracked - In the implementation block
@property (assign,nonatomic) BOOL shouldOpenLandingPage;                                          //@synthesize shouldOpenLandingPage=_shouldOpenLandingPage - In the implementation block
@property (assign,nonatomic) double latency;                                                      //@synthesize latency=_latency - In the implementation block
@property (assign,nonatomic) BOOL preloadWebviews;                                                //@synthesize preloadWebviews=_preloadWebviews - In the implementation block
@property (nonatomic,retain) NSString * moatImpressionID;                                         //@synthesize moatImpressionID=_moatImpressionID - In the implementation block
@property (nonatomic,retain) SKStoreProductViewController * skProductViewController;              //@synthesize skProductViewController=_skProductViewController - In the implementation block
@property (nonatomic,retain) NSNumber * skStoreOrigin;                                            //@synthesize skStoreOrigin=_skStoreOrigin - In the implementation block
@property (nonatomic,retain) NSString * sKStoreID;                                                //@synthesize sKStoreID=_sKStoreID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getVideoAssetFromAsset:(id)arg1 ;
+(id)getWebViewAssetFromAsset:(id)arg1 ;
+(id)getMoatVideoAssetsFromRootAsset:(id)arg1 ;
+(id)getTimerAssetsFromAsset:(id)arg1 ;
+(id)getAssetofType:(Class)arg1 ParentAsset:(id)arg2 ;
+(id)returnOverallPayload:(id)arg1 resourceRequired:(id)arg2 ;
-(id)getRewards;
-(unsigned long long)loadTimeStamp;
-(void)setLoadTimeStamp:(unsigned long long)arg1 ;
-(BOOL)imActionShouldScrollToTopForRoot:(id)arg1 ;
-(void)assetVisibleOnScreen:(id)arg1 ;
-(void)assetDidFinishBuilding:(id)arg1 ;
-(void)assetFailedToBuild:(id)arg1 ;
-(void)fireGenericEventUrl:(id)arg1 forAsset:(id)arg2 ;
-(void)asset:(id)arg1 firesTrackingEvent:(id)arg2 ;
-(void)imActionVideoCompletedQuartile:(long long)arg1 forVideoAssetId:(id)arg2 ;
-(void)imActionVideoSkipped;
-(double)imActionMinimumVisiblePercentage;
-(id)imActionGetVideoMetadataForAssetId:(id)arg1 ;
-(BOOL)imActionShouldRequireCustomViewabilityTracker:(id)arg1 ;
-(id)imAssetActionRequireVideoPropertiesWithRoot:(id)arg1 ;
-(void)imActionMediaFinishedPlaying:(id)arg1 ;
-(void)imActionRewardedActionComplete;
-(void)imActionShowVideoEndCardForAsset:(id)arg1 ;
-(NSDictionary *)assetJson;
-(void)countdownTimerFireAction:(id)arg1 ;
-(id)imActionGetAssetWithID:(id)arg1 ;
-(void)asset:(id)arg1 builtNonObstuctiveViewForVideoAndWebViewability:(id)arg2 ;
-(void)skipActionAvailableforAsset:(id)arg1 withSkipDelayOffset:(id)arg2 ;
-(void)assetClicked:(id)arg1 withParams:(id)arg2 ;
-(void)imActionFoundSKStoreWithID:(id)arg1 ;
-(id)fetchAdUnitType;
-(BOOL)shouldAllowAutoRedirectionForUserClickedOnRenderView:(BOOL)arg1 ;
-(void)fireTelemetryEventForAutoRedirectionForCommand:(id)arg1 ;
-(BOOL)saveAdBlobFromWebView:(id)arg1 ;
-(id)fetchAdBlobForWebView;
-(IMOMViewabilityTracker *)omViewability;
-(void)setOmViewability:(IMOMViewabilityTracker *)arg1 ;
-(id)imActionGetNotificationSender;
-(void)setPreloadWebviews:(BOOL)arg1 ;
-(BOOL)preloadWebviews;
-(BOOL)shouldFailOnZeroGeometryForAsset:(id)arg1 ;
-(void)setPlacementType:(unsigned long long)arg1 ;
-(IMMoatNativeViewability *)moatViewability;
-(void)setMoatViewability:(IMMoatNativeViewability *)arg1 ;
-(void)setRenderStartTS:(double)arg1 ;
-(CGRect)safeAreaFrame;
-(UIColor *)unsafeAreaColor;
-(double)renderStartTS;
-(void)setSafeAreaFrame:(CGRect)arg1 ;
-(void)setUnsafeAreaColor:(UIColor *)arg1 ;
-(NSDictionary *)moatViewabilityParameters;
-(void)setMoatViewabilityParameters:(NSDictionary *)arg1 ;
-(void)loadAdWithPubContentData:(id)arg1 withSafeAreaFrame:(CGRect)arg2 withUnsafeAreaColor:(id)arg3 ;
-(id)getRenderViewForWebViewAsset;
-(id)getOMIDVerificationScriptArrayForVideoWithMacros:(id)arg1 ;
-(void)setMoatImpressionID:(NSString *)arg1 ;
-(id)getRootViewWithWidth:(double)arg1 ;
-(IMMoatWebViewability *)moatWebViewability;
-(void)setMoatWebViewability:(IMMoatWebViewability *)arg1 ;
-(void)attachMoatWebViewability;
-(NSString *)moatImpressionID;
-(void)attachMoatNativeViewability:(id)arg1 ;
-(BOOL)startViewabilityTracking;
-(BOOL)shouldOpenLandingPage;
-(void)fireExternalClickTrackers;
-(void)reportExternalClickWithParams:(id)arg1 ;
-(id)getOMIDVerificationScriptArrayForDisplayWithMacros:(id)arg1 ;
-(id)getOMVASTProperties;
-(NSMutableArray *)friendlyViewsArray;
-(void)setFriendlyViewsArray:(NSMutableArray *)arg1 ;
-(void)attachOMViewability;
-(void)imNativeLandingPageProcessorfireEvents:(id)arg1 withEvent:(id)arg2 trackerType:(id)arg3 showTime:(unsigned long long)arg4 ;
-(void)imNativeLandingPageProcessorWillPresentEmbeddedBrowser:(id)arg1 ;
-(void)imNativeLandingPageProcessorDidPresentEmbeddedBrowser:(id)arg1 ;
-(id)imNativeLandingPageProcessorGetRootAsset:(id)arg1 ;
-(void)imNativeLandingPageProcessorDidLeaveApplication:(id)arg1 ;
-(void)imNativeLandingPageProcessorWillPresentScreen:(id)arg1 ;
-(void)imNativeLandingPageProcessorDidPresentScreen:(id)arg1 ;
-(void)imNativeLandingPageProcessorWillDismissScreen:(id)arg1 ;
-(void)imNativeLandingPageProcessorDidDismissScreen:(id)arg1 ;
-(void)imNativeLandingPageProcessorWillDismissEmbeddedBrowser:(id)arg1 ;
-(void)imNativeLandingPageProcessorDidDismissEmbeddedBrowser:(id)arg1 ;
-(id)initWithPlacementType:(unsigned long long)arg1 andAccountID:(id)arg2 ;
-(void)attachIMViewability;
-(void)fireEvents:(id)arg1 withEvent:(id)arg2 trackerType:(id)arg3 showTime:(unsigned long long)arg4 ;
-(BOOL)performAction:(id)arg1 withReferenceID:(id)arg2 ;
-(void)setSkProductViewController:(SKStoreProductViewController *)arg1 ;
-(SKStoreProductViewController *)skProductViewController;
-(NSString *)sKStoreID;
-(void)attachAdViewtoSKStore:(id)arg1 ;
-(void)setSKStoreID:(NSString *)arg1 ;
-(void)setSkStoreOrigin:(NSNumber *)arg1 ;
-(void)scheduleClose;
-(void)pauseAllTimersInAsset:(id)arg1 ;
-(IMNativeLandingPageProcessor *)landingPageProcessor;
-(IMAsset *)endCardRoot;
-(id)getVideoProperties;
-(void)setShouldOpenLandingPage:(BOOL)arg1 ;
-(BOOL)willTrackViewabilityForView:(id)arg1 ;
-(NSDictionary *)endCardAssetJson;
-(void)prepareSecondPage;
-(void)reloadAssetWithID:(id)arg1 ;
-(void)setAssetJson:(NSDictionary *)arg1 ;
-(void)setIsRewardedCallbackGiven:(BOOL)arg1 ;
-(void)setPagesArray:(NSArray *)arg1 ;
-(void)setVideoProps:(IMNativeVideoProperties *)arg1 ;
-(void)setExternalCLick:(NSDictionary *)arg1 ;
-(void)setExternalTrackers:(NSArray *)arg1 ;
-(void)prepareFirstPage;
-(NSArray *)pagesArray;
-(void)setEndCardAssetJson:(NSDictionary *)arg1 ;
-(void)setEndCardRootJson:(NSDictionary *)arg1 ;
-(void)setRewardDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)endCardRootJson;
-(void)setEndCardRoot:(IMAsset *)arg1 ;
-(void)resetTimerAssets;
-(NSDictionary *)rewardDictionary;
-(void)playAssetWithID:(id)arg1 ;
-(void)processExternalClickWithParams:(id)arg1 ;
-(BOOL)adAttachedToSKStore;
-(void)setAdAttachedToSKStore:(BOOL)arg1 ;
-(NSNumber *)skStoreOrigin;
-(void)setViewabilityTracked:(BOOL)arg1 ;
-(void)firePendingViewBeacons;
-(void)setLandingPageProcessor:(IMNativeLandingPageProcessor *)arg1 ;
-(NSString *)assetOnClickSKStoreID;
-(void)buildSecondPage;
-(BOOL)processAction:(id)arg1 onAsset:(id)arg2 ;
-(NSArray *)externalTrackers;
-(NSDictionary *)externalCLick;
-(BOOL)viewabilityTracked;
-(NSMutableArray *)pendingAssetsForViewBeacon;
-(void)setPendingAssetsForViewBeacon:(NSMutableArray *)arg1 ;
-(void)fireViewPingForAsset:(id)arg1 ;
-(IMNativeVideoProperties *)videoProps;
-(BOOL)isRewardedCallbackGiven;
-(void)setAssetOnClickSKStoreID:(NSString *)arg1 ;
-(BOOL)skipAssetAvailable;
-(NSNumber *)skipDelayOffset;
-(id)getVerificationScripWithURL:(id)arg1 vendor:(id)arg2 verificationParams:(id)arg3 macros:(id)arg4 ;
-(void)setSkipAssetAvailable:(BOOL)arg1 ;
-(void)setSkipDelayOffset:(NSNumber *)arg1 ;
-(NSMutableString *)moatImpressionXML;
-(void)setMoatImpressionXML:(NSMutableString *)arg1 ;
-(void)viewability:(id)arg1 trackedViewAsVisible:(id)arg2 ;
-(void)viewability:(id)arg1 stoppedTrackingView:(id)arg2 ;
-(CGSize)getRootViewSize;
-(id<IMNativeRenderControllerDelegate>)delegate;
-(void)setDelegate:(id<IMNativeRenderControllerDelegate>)arg1 ;
-(long long)orientation;
-(double)latency;
-(IMAsset *)root;
-(void)setRoot:(IMAsset *)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(void)setViewController:(IMNativeRenderViewController *)arg1 ;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(IMNativeRenderViewController *)viewController;
-(NSString *)accountID;
-(void)setAccountID:(NSString *)arg1 ;
-(void)setLatency:(double)arg1 ;
-(unsigned long long)placementType;
@end

