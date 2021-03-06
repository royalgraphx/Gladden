/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessagesExtension/MessagesExtension-Structs.h>
@class NSString, NSURL, NSArray, NSData, NSDictionary, NSDate, MPRewardedVideoReward, MPImpressionData, MOPUBExperimentProvider;

@interface MPAdConfiguration : NSObject {

	BOOL _isFullscreenAd;
	BOOL _adUnitWarmingUp;
	BOOL _isEndOfWaterfall;
	BOOL _precacheRequired;
	BOOL _isVastVideoPlayer;
	BOOL _rewardedPlayableShouldRewardOnClick;
	BOOL _enableEarlyClickthroughForNonRewardedVideo;
	BOOL _mraidAllowCustomClose;
	NSString* _adType;
	NSURL* _clickTrackingURL;
	NSArray* _impressionTrackingURLs;
	NSURL* _nextURL;
	NSURL* _beforeLoadURL;
	double _refreshInterval;
	double _adTimeoutInterval;
	NSData* _adResponseData;
	NSDictionary* _nativeSDKParameters;
	Class _customEventClass;
	NSDictionary* _customEventClassData;
	unsigned long long _orientationType;
	NSString* _dspCreativeId;
	NSDate* _creationTimestamp;
	NSString* _creativeId;
	NSString* _metadataAdType;
	long long _nativeVideoPlayVisiblePercent;
	long long _nativeVideoPauseVisiblePercent;
	double _nativeImpressionMinVisiblePixels;
	long long _nativeImpressionMinVisiblePercent;
	double _nativeImpressionMinVisibleTimeInterval;
	double _nativeVideoMaxBufferingTime;
	NSDictionary* _vastVideoTrackers;
	NSArray* _availableRewards;
	MPRewardedVideoReward* _selectedReward;
	NSString* _rewardedVideoCompletionUrl;
	double _rewardedPlayableDuration;
	NSString* _advancedBidPayload;
	MPImpressionData* _impressionData;
	NSString* _format;
	double _impressionMinVisibleTimeInSec;
	double _impressionMinVisiblePixels;
	NSString* _adResponseHTMLString;
	long long _clickthroughExperimentBrowserAgent;
	MOPUBExperimentProvider* _experimentProvider;
	NSArray* _afterLoadUrlsWithMacros;
	NSArray* _afterLoadSuccessUrlsWithMacros;
	NSArray* _afterLoadFailureUrlsWithMacros;
	CGSize _preferredSize;

}

@property (nonatomic,copy) NSString * adResponseHTMLString;                                //@synthesize adResponseHTMLString=_adResponseHTMLString - In the implementation block
@property (nonatomic,retain) NSArray * availableRewards;                                   //@synthesize availableRewards=_availableRewards - In the implementation block
@property (assign,nonatomic) long long clickthroughExperimentBrowserAgent;                 //@synthesize clickthroughExperimentBrowserAgent=_clickthroughExperimentBrowserAgent - In the implementation block
@property (nonatomic,retain) MOPUBExperimentProvider * experimentProvider;                 //@synthesize experimentProvider=_experimentProvider - In the implementation block
@property (nonatomic,copy) NSArray * afterLoadUrlsWithMacros;                              //@synthesize afterLoadUrlsWithMacros=_afterLoadUrlsWithMacros - In the implementation block
@property (nonatomic,copy) NSArray * afterLoadSuccessUrlsWithMacros;                       //@synthesize afterLoadSuccessUrlsWithMacros=_afterLoadSuccessUrlsWithMacros - In the implementation block
@property (nonatomic,copy) NSArray * afterLoadFailureUrlsWithMacros;                       //@synthesize afterLoadFailureUrlsWithMacros=_afterLoadFailureUrlsWithMacros - In the implementation block
@property (nonatomic,readonly) BOOL isFullscreenAd;                                        //@synthesize isFullscreenAd=_isFullscreenAd - In the implementation block
@property (assign,nonatomic) BOOL adUnitWarmingUp;                                         //@synthesize adUnitWarmingUp=_adUnitWarmingUp - In the implementation block
@property (nonatomic,readonly) BOOL isMraidAd; 
@property (nonatomic,copy) NSString * adType;                                              //@synthesize adType=_adType - In the implementation block
@property (assign,nonatomic) BOOL isEndOfWaterfall;                                        //@synthesize isEndOfWaterfall=_isEndOfWaterfall - In the implementation block
@property (assign,nonatomic) CGSize preferredSize;                                         //@synthesize preferredSize=_preferredSize - In the implementation block
@property (nonatomic,retain) NSURL * clickTrackingURL;                                     //@synthesize clickTrackingURL=_clickTrackingURL - In the implementation block
@property (nonatomic,retain) NSArray * impressionTrackingURLs;                             //@synthesize impressionTrackingURLs=_impressionTrackingURLs - In the implementation block
@property (nonatomic,retain) NSURL * nextURL;                                              //@synthesize nextURL=_nextURL - In the implementation block
@property (nonatomic,retain) NSURL * beforeLoadURL;                                        //@synthesize beforeLoadURL=_beforeLoadURL - In the implementation block
@property (assign,nonatomic) double refreshInterval;                                       //@synthesize refreshInterval=_refreshInterval - In the implementation block
@property (assign,nonatomic) double adTimeoutInterval;                                     //@synthesize adTimeoutInterval=_adTimeoutInterval - In the implementation block
@property (nonatomic,copy) NSData * adResponseData;                                        //@synthesize adResponseData=_adResponseData - In the implementation block
@property (nonatomic,retain) NSDictionary * nativeSDKParameters;                           //@synthesize nativeSDKParameters=_nativeSDKParameters - In the implementation block
@property (assign,nonatomic) Class customEventClass;                                       //@synthesize customEventClass=_customEventClass - In the implementation block
@property (nonatomic,retain) NSDictionary * customEventClassData;                          //@synthesize customEventClassData=_customEventClassData - In the implementation block
@property (assign,nonatomic) unsigned long long orientationType;                           //@synthesize orientationType=_orientationType - In the implementation block
@property (nonatomic,copy) NSString * dspCreativeId;                                       //@synthesize dspCreativeId=_dspCreativeId - In the implementation block
@property (assign,nonatomic) BOOL precacheRequired;                                        //@synthesize precacheRequired=_precacheRequired - In the implementation block
@property (assign,nonatomic) BOOL isVastVideoPlayer;                                       //@synthesize isVastVideoPlayer=_isVastVideoPlayer - In the implementation block
@property (nonatomic,retain) NSDate * creationTimestamp;                                   //@synthesize creationTimestamp=_creationTimestamp - In the implementation block
@property (nonatomic,copy) NSString * creativeId;                                          //@synthesize creativeId=_creativeId - In the implementation block
@property (nonatomic,copy) NSString * metadataAdType;                                      //@synthesize metadataAdType=_metadataAdType - In the implementation block
@property (assign,nonatomic) long long nativeVideoPlayVisiblePercent;                      //@synthesize nativeVideoPlayVisiblePercent=_nativeVideoPlayVisiblePercent - In the implementation block
@property (assign,nonatomic) long long nativeVideoPauseVisiblePercent;                     //@synthesize nativeVideoPauseVisiblePercent=_nativeVideoPauseVisiblePercent - In the implementation block
@property (assign,nonatomic) double nativeImpressionMinVisiblePixels;                      //@synthesize nativeImpressionMinVisiblePixels=_nativeImpressionMinVisiblePixels - In the implementation block
@property (assign,nonatomic) long long nativeImpressionMinVisiblePercent;                  //@synthesize nativeImpressionMinVisiblePercent=_nativeImpressionMinVisiblePercent - In the implementation block
@property (assign,nonatomic) double nativeImpressionMinVisibleTimeInterval;                //@synthesize nativeImpressionMinVisibleTimeInterval=_nativeImpressionMinVisibleTimeInterval - In the implementation block
@property (assign,nonatomic) double nativeVideoMaxBufferingTime;                           //@synthesize nativeVideoMaxBufferingTime=_nativeVideoMaxBufferingTime - In the implementation block
@property (nonatomic,retain) NSDictionary * vastVideoTrackers;                             //@synthesize vastVideoTrackers=_vastVideoTrackers - In the implementation block
@property (nonatomic,retain) MPRewardedVideoReward * selectedReward;                       //@synthesize selectedReward=_selectedReward - In the implementation block
@property (nonatomic,copy) NSString * rewardedVideoCompletionUrl;                          //@synthesize rewardedVideoCompletionUrl=_rewardedVideoCompletionUrl - In the implementation block
@property (assign,nonatomic) double rewardedPlayableDuration;                              //@synthesize rewardedPlayableDuration=_rewardedPlayableDuration - In the implementation block
@property (assign,nonatomic) BOOL rewardedPlayableShouldRewardOnClick;                     //@synthesize rewardedPlayableShouldRewardOnClick=_rewardedPlayableShouldRewardOnClick - In the implementation block
@property (nonatomic,copy) NSString * advancedBidPayload;                                  //@synthesize advancedBidPayload=_advancedBidPayload - In the implementation block
@property (nonatomic,retain) MPImpressionData * impressionData;                            //@synthesize impressionData=_impressionData - In the implementation block
@property (assign,nonatomic) BOOL enableEarlyClickthroughForNonRewardedVideo;              //@synthesize enableEarlyClickthroughForNonRewardedVideo=_enableEarlyClickthroughForNonRewardedVideo - In the implementation block
@property (nonatomic,readonly) BOOL isMoVideo; 
@property (nonatomic,readonly) BOOL mraidAllowCustomClose;                                 //@synthesize mraidAllowCustomClose=_mraidAllowCustomClose - In the implementation block
@property (nonatomic,copy) NSString * format;                                              //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) double impressionMinVisibleTimeInSec;                         //@synthesize impressionMinVisibleTimeInSec=_impressionMinVisibleTimeInSec - In the implementation block
@property (assign,nonatomic) double impressionMinVisiblePixels;                            //@synthesize impressionMinVisiblePixels=_impressionMinVisiblePixels - In the implementation block
@property (nonatomic,readonly) BOOL hasValidReward; 
-(NSURL *)clickTrackingURL;
-(NSData *)adResponseData;
-(NSDictionary *)vastVideoTrackers;
-(BOOL)hasValidReward;
-(BOOL)enableEarlyClickthroughForNonRewardedVideo;
-(void)setEnableEarlyClickthroughForNonRewardedVideo:(BOOL)arg1 ;
-(MPRewardedVideoReward *)selectedReward;
-(double)adTimeoutInterval;
-(void)setClickTrackingURL:(NSURL *)arg1 ;
-(BOOL)isMraidAd;
-(double)impressionMinVisiblePixels;
-(NSURL *)beforeLoadURL;
-(id)afterLoadUrlsWithLoadDuration:(double)arg1 loadResult:(unsigned long long)arg2 ;
-(BOOL)isFullscreenAd;
-(id)initWithMetadata:(id)arg1 data:(id)arg2 isFullscreenAd:(BOOL)arg3 ;
-(BOOL)hasPreferredSize;
-(NSString *)adResponseHTMLString;
-(BOOL)isVastVideoPlayer;
-(unsigned long long)orientationType;
-(void)setOrientationType:(unsigned long long)arg1 ;
-(void)commonInitWithMetadata:(id)arg1 data:(id)arg2 isFullscreenAd:(BOOL)arg3 experimentProvider:(id)arg4 ;
-(void)setAdResponseData:(NSData *)arg1 ;
-(void)setAdUnitWarmingUp:(BOOL)arg1 ;
-(id)adTypeFromMetadata:(id)arg1 ;
-(id)URLFromMetadata:(id)arg1 forKey:(id)arg2 ;
-(void)setNextURL:(NSURL *)arg1 ;
-(void)setBeforeLoadURL:(NSURL *)arg1 ;
-(id)URLStringsFromMetadata:(id)arg1 forKey:(id)arg2 ;
-(void)setAfterLoadUrlsWithMacros:(NSArray *)arg1 ;
-(void)setAfterLoadSuccessUrlsWithMacros:(NSArray *)arg1 ;
-(void)setAfterLoadFailureUrlsWithMacros:(NSArray *)arg1 ;
-(double)refreshIntervalFromMetadata:(id)arg1 ;
-(double)timeIntervalFromMsmetadata:(id)arg1 forKey:(id)arg2 ;
-(void)setAdTimeoutInterval:(double)arg1 ;
-(id)dictionaryFromMetadata:(id)arg1 forKey:(id)arg2 ;
-(void)setNativeSDKParameters:(NSDictionary *)arg1 ;
-(unsigned long long)orientationTypeFromMetadata:(id)arg1 ;
-(Class)setUpCustomEventClassFromMetadata:(id)arg1 vastPlayerVersion:(unsigned long long)arg2 ;
-(void)setCustomEventClass:(Class)arg1 ;
-(id)customEventClassDataFromMetadata:(id)arg1 ;
-(void)setCustomEventClassData:(NSDictionary *)arg1 ;
-(void)setDspCreativeId:(NSString *)arg1 ;
-(void)setPrecacheRequired:(BOOL)arg1 ;
-(void)setIsVastVideoPlayer:(BOOL)arg1 ;
-(void)setMetadataAdType:(NSString *)arg1 ;
-(long long)percentFromMetadata:(id)arg1 forKey:(id)arg2 ;
-(void)setNativeVideoPlayVisiblePercent:(long long)arg1 ;
-(void)setNativeVideoPauseVisiblePercent:(long long)arg1 ;
-(id)adAmountFromMetadata:(id)arg1 key:(id)arg2 ;
-(void)setNativeImpressionMinVisiblePixels:(double)arg1 ;
-(void)setNativeImpressionMinVisiblePercent:(long long)arg1 ;
-(void)setNativeImpressionMinVisibleTimeInterval:(double)arg1 ;
-(void)setNativeVideoMaxBufferingTime:(double)arg1 ;
-(id)vastVideoTrackersFromMetadata:(id)arg1 key:(id)arg2 ;
-(void)setVastVideoTrackers:(NSDictionary *)arg1 ;
-(void)setImpressionMinVisibleTimeInSec:(double)arg1 ;
-(void)setImpressionMinVisiblePixels:(double)arg1 ;
-(id)impressionDataFromMetadata:(id)arg1 ;
-(void)setImpressionData:(MPImpressionData *)arg1 ;
-(id)URLsFromMetadata:(id)arg1 forKey:(id)arg2 ;
-(void)setImpressionTrackingURLs:(NSArray *)arg1 ;
-(id)parseAvailableRewardsFromMetadata:(id)arg1 ;
-(void)setAvailableRewards:(NSArray *)arg1 ;
-(NSArray *)availableRewards;
-(void)setSelectedReward:(MPRewardedVideoReward *)arg1 ;
-(void)setRewardedVideoCompletionUrl:(NSString *)arg1 ;
-(double)timeIntervalFromMetadata:(id)arg1 forKey:(id)arg2 ;
-(void)setRewardedPlayableDuration:(double)arg1 ;
-(void)setRewardedPlayableShouldRewardOnClick:(BOOL)arg1 ;
-(long long)clickthroughExperimentVariantFromMetadata:(id)arg1 forKey:(id)arg2 ;
-(void)setClickthroughExperimentBrowserAgent:(long long)arg1 ;
-(void)setExperimentProvider:(MOPUBExperimentProvider *)arg1 ;
-(MOPUBExperimentProvider *)experimentProvider;
-(long long)clickthroughExperimentBrowserAgent;
-(void)setAdvancedBidPayload:(NSString *)arg1 ;
-(void)setAdResponseHTMLString:(NSString *)arg1 ;
-(NSArray *)afterLoadUrlsWithMacros;
-(NSArray *)afterLoadSuccessUrlsWithMacros;
-(NSArray *)afterLoadFailureUrlsWithMacros;
-(id)concatenateBaseUrlArray:(id)arg1 withConditionalArray:(id)arg2 ;
-(NSString *)metadataAdType;
-(Class)customEventClass;
-(void)setVideoTrackers:(id)arg1 event:(id)arg2 urls:(id)arg3 ;
-(BOOL)isMoVideo;
-(BOOL)adUnitWarmingUp;
-(BOOL)isEndOfWaterfall;
-(void)setIsEndOfWaterfall:(BOOL)arg1 ;
-(NSArray *)impressionTrackingURLs;
-(NSURL *)nextURL;
-(NSDictionary *)nativeSDKParameters;
-(NSDictionary *)customEventClassData;
-(NSString *)dspCreativeId;
-(BOOL)precacheRequired;
-(long long)nativeVideoPlayVisiblePercent;
-(long long)nativeVideoPauseVisiblePercent;
-(double)nativeImpressionMinVisiblePixels;
-(long long)nativeImpressionMinVisiblePercent;
-(double)nativeImpressionMinVisibleTimeInterval;
-(double)nativeVideoMaxBufferingTime;
-(NSString *)rewardedVideoCompletionUrl;
-(double)rewardedPlayableDuration;
-(BOOL)rewardedPlayableShouldRewardOnClick;
-(NSString *)advancedBidPayload;
-(MPImpressionData *)impressionData;
-(BOOL)mraidAllowCustomClose;
-(double)impressionMinVisibleTimeInSec;
-(NSString *)format;
-(void)setFormat:(NSString *)arg1 ;
-(CGSize)preferredSize;
-(void)setPreferredSize:(CGSize)arg1 ;
-(double)refreshInterval;
-(NSDate *)creationTimestamp;
-(NSString *)adType;
-(void)setCreativeId:(NSString *)arg1 ;
-(NSString *)creativeId;
-(void)setAdType:(NSString *)arg1 ;
-(void)setCreationTimestamp:(NSDate *)arg1 ;
-(void)setRefreshInterval:(double)arg1 ;
@end

