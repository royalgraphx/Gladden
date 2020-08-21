/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessagesExtension/MessagesExtension-Structs.h>
@class UIView, FBAdQualityManager, NSString, NSNumber;

@interface FBAdVideoLogger : NSObject {

	BOOL _autoplay;
	BOOL _hasLoggedIABImpression;
	BOOL _playbackStarted;
	BOOL _seeking;
	UIView* _targetView;
	FBAdQualityManager* _adQualityManager;
	NSString* _inlineClientToken;
	NSString* _requestId;
	double _lastProgressBoundaryTime;
	double _lastProgressCurrentTime;
	/*^block*/id _targetVolumeBlock;
	/*^block*/id _viewableImpressionBlock;
	NSNumber* _cardIndex;
	NSNumber* _cardCount;

}

@property (nonatomic,readonly) FBAdQualityManager * adQualityManager;              //@synthesize adQualityManager=_adQualityManager - In the implementation block
@property (assign,nonatomic) BOOL autoplay;                                        //@synthesize autoplay=_autoplay - In the implementation block
@property (assign,nonatomic) BOOL hasLoggedIABImpression;                          //@synthesize hasLoggedIABImpression=_hasLoggedIABImpression - In the implementation block
@property (assign,nonatomic) BOOL playbackStarted;                                 //@synthesize playbackStarted=_playbackStarted - In the implementation block
@property (nonatomic,copy) NSString * inlineClientToken;                           //@synthesize inlineClientToken=_inlineClientToken - In the implementation block
@property (nonatomic,copy) NSString * requestId;                                   //@synthesize requestId=_requestId - In the implementation block
@property (assign,nonatomic) double lastProgressBoundaryTime;                      //@synthesize lastProgressBoundaryTime=_lastProgressBoundaryTime - In the implementation block
@property (assign,nonatomic) double lastProgressCurrentTime;                       //@synthesize lastProgressCurrentTime=_lastProgressCurrentTime - In the implementation block
@property (assign,nonatomic) BOOL seeking;                                         //@synthesize seeking=_seeking - In the implementation block
@property (nonatomic,copy) id targetVolumeBlock;                                   //@synthesize targetVolumeBlock=_targetVolumeBlock - In the implementation block
@property (nonatomic,copy) id viewableImpressionBlock;                             //@synthesize viewableImpressionBlock=_viewableImpressionBlock - In the implementation block
@property (nonatomic,retain) NSNumber * cardIndex;                                 //@synthesize cardIndex=_cardIndex - In the implementation block
@property (nonatomic,retain) NSNumber * cardCount;                                 //@synthesize cardCount=_cardCount - In the implementation block
@property (nonatomic,retain) UIView * targetView;                                  //@synthesize targetView=_targetView - In the implementation block
-(id)funnel;
-(id)funnelLogger;
-(NSString *)inlineClientToken;
-(void)setInlineClientToken:(NSString *)arg1 ;
-(id)initWithTargetView:(id)arg1 inlineClientToken:(id)arg2 requestId:(id)arg3 viewableImpressionBlock:(/*^block*/id)arg4 targetVolumeBlock:(/*^block*/id)arg5 autoplay:(BOOL)arg6 cardIndex:(id)arg7 cardCount:(id)arg8 ;
-(void)initializeWithTargetView:(id)arg1 ;
-(void)registerComplete:(SCD_Struct_IM9)arg1 ;
-(void)registerPause:(SCD_Struct_IM9)arg1 ;
-(void)registerProgress:(SCD_Struct_IM9)arg1 ;
-(void)registerResume:(SCD_Struct_IM9)arg1 ;
-(void)registerSeekEnd:(SCD_Struct_IM9)arg1 ;
-(void)registerSeekStart:(SCD_Struct_IM9)arg1 ;
-(void)registerSkip:(SCD_Struct_IM9)arg1 ;
-(void)registerStop:(SCD_Struct_IM9)arg1 ;
-(void)flush:(SCD_Struct_IM9)arg1 isContinuous:(BOOL)arg2 ;
-(void)logProgress;
-(void)logVideoEvent:(id)arg1 ;
-(void)logVideoEventForAction:(long long)arg1 ;
-(void)logVideoTime;
-(void)onMRCRuleCallback:(BOOL)arg1 passed:(BOOL)arg2 ;
-(void)onViewableImpressionRuleCallback:(BOOL)arg1 passed:(BOOL)arg2 ;
-(void)registerProgress:(SCD_Struct_IM9)arg1 forceLog:(BOOL)arg2 ;
-(float)effectiveVolume;
-(id)extraDataForVideoFunnelLogging:(SCD_Struct_IM9)arg1 ;
-(FBAdQualityManager *)adQualityManager;
-(BOOL)hasLoggedIABImpression;
-(void)setHasLoggedIABImpression:(BOOL)arg1 ;
-(void)setPlaybackStarted:(BOOL)arg1 ;
-(double)lastProgressBoundaryTime;
-(void)setLastProgressBoundaryTime:(double)arg1 ;
-(double)lastProgressCurrentTime;
-(void)setLastProgressCurrentTime:(double)arg1 ;
-(id)targetVolumeBlock;
-(void)setTargetVolumeBlock:(id)arg1 ;
-(id)viewableImpressionBlock;
-(void)setViewableImpressionBlock:(id)arg1 ;
-(NSNumber *)cardCount;
-(void)setCardCount:(NSNumber *)arg1 ;
-(id)logger;
-(NSString *)requestId;
-(UIView *)targetView;
-(void)setTargetView:(UIView *)arg1 ;
-(BOOL)seeking;
-(BOOL)autoplay;
-(void)setAutoplay:(BOOL)arg1 ;
-(void)setSeeking:(BOOL)arg1 ;
-(void)setRequestId:(NSString *)arg1 ;
-(BOOL)playbackStarted;
-(void)setCardIndex:(NSNumber *)arg1 ;
-(NSNumber *)cardIndex;
@end

