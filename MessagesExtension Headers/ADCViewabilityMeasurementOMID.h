/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/ADCViewabilityMeasurementProtocol.h>

@class NSString, OMIDAdcolonyPartner, OMIDAdcolonyAdSession, OMIDAdcolonyAdEvents, OMIDAdcolonyVideoEvents, NSMutableArray;

@interface ADCViewabilityMeasurementOMID : NSObject <ADCViewabilityMeasurementProtocol> {

	BOOL _initialized;
	BOOL _skippable;
	BOOL _videoFinished;
	BOOL _videoPaused;
	/*^block*/id viewabilityCustomMessageCallback;
	unsigned long long _adUnitType;
	NSString* _adType;
	long long _omidAdSessionType;
	OMIDAdcolonyPartner* _partner;
	OMIDAdcolonyAdSession* _omidSession;
	OMIDAdcolonyAdEvents* _omidAdEvents;
	OMIDAdcolonyVideoEvents* _omidVideoEvents;
	double _videoDuration;
	double _skipOffset;
	NSMutableArray* _scripts;
	NSString* _script;

}

@property (assign,nonatomic) BOOL initialized;                                       //@synthesize initialized=_initialized - In the implementation block
@property (assign,nonatomic) unsigned long long adUnitType;                          //@synthesize adUnitType=_adUnitType - In the implementation block
@property (nonatomic,retain) NSString * adType;                                      //@synthesize adType=_adType - In the implementation block
@property (assign,nonatomic) long long omidAdSessionType;                            //@synthesize omidAdSessionType=_omidAdSessionType - In the implementation block
@property (nonatomic,retain) OMIDAdcolonyPartner * partner;                          //@synthesize partner=_partner - In the implementation block
@property (nonatomic,retain) OMIDAdcolonyAdSession * omidSession;                    //@synthesize omidSession=_omidSession - In the implementation block
@property (nonatomic,retain) OMIDAdcolonyAdEvents * omidAdEvents;                    //@synthesize omidAdEvents=_omidAdEvents - In the implementation block
@property (nonatomic,retain) OMIDAdcolonyVideoEvents * omidVideoEvents;              //@synthesize omidVideoEvents=_omidVideoEvents - In the implementation block
@property (assign,nonatomic) double videoDuration;                                   //@synthesize videoDuration=_videoDuration - In the implementation block
@property (assign,nonatomic) double skipOffset;                                      //@synthesize skipOffset=_skipOffset - In the implementation block
@property (assign,nonatomic) BOOL skippable;                                         //@synthesize skippable=_skippable - In the implementation block
@property (assign,nonatomic) BOOL videoFinished;                                     //@synthesize videoFinished=_videoFinished - In the implementation block
@property (assign,nonatomic) BOOL videoPaused;                                       //@synthesize videoPaused=_videoPaused - In the implementation block
@property (nonatomic,retain) NSMutableArray * scripts;                               //@synthesize scripts=_scripts - In the implementation block
@property (nonatomic,retain) NSString * script;                                      //@synthesize script=_script - In the implementation block
@property (nonatomic,copy) id viewabilityCustomMessageCallback; 
-(BOOL)skippable;
-(void)registerAdView:(id)arg1 ;
-(OMIDAdcolonyPartner *)partner;
-(void)setPartner:(OMIDAdcolonyPartner *)arg1 ;
-(double)skipOffset;
-(void)registerFriendlyObstruction:(id)arg1 ;
-(id)initWithDict:(id)arg1 adSession:(id)arg2 ;
-(void)initializeSession:(id)arg1 ;
-(id)getViewabilityVendor;
-(void)injectJsResources;
-(id)injectJsResourcesInAdResponse:(id)arg1 ;
-(void)registerAdViews:(id)arg1 ;
-(void)startSession:(id)arg1 ;
-(void)recordReady;
-(void)recordLoaded;
-(void)recordStart:(double)arg1 ;
-(void)recordBufferStart;
-(void)recordBufferFinish;
-(void)recordFirstQuartile;
-(void)recordMidpoint;
-(void)recordThirdQuartile;
-(void)recordComplete;
-(void)recordContinue;
-(void)recordClickThrough;
-(void)recordSkip;
-(void)recordMute;
-(void)recordUnmute;
-(void)recordVolumeChanged:(double)arg1 ;
-(void)recordPause;
-(void)recordResume;
-(void)recordSkipToDec;
-(id)viewabilityCustomMessageCallback;
-(void)setViewabilityCustomMessageCallback:(id)arg1 ;
-(void)setSkipOffset:(double)arg1 ;
-(void)setAdUnitType:(unsigned long long)arg1 ;
-(void)setOmidAdSessionType:(long long)arg1 ;
-(unsigned long long)adUnitType;
-(long long)omidAdSessionType;
-(void)setOmidSession:(OMIDAdcolonyAdSession *)arg1 ;
-(OMIDAdcolonyAdSession *)omidSession;
-(void)setOmidAdEvents:(OMIDAdcolonyAdEvents *)arg1 ;
-(OMIDAdcolonyAdEvents *)omidAdEvents;
-(void)setOmidVideoEvents:(OMIDAdcolonyVideoEvents *)arg1 ;
-(OMIDAdcolonyVideoEvents *)omidVideoEvents;
-(void)setVideoFinished:(BOOL)arg1 ;
-(BOOL)videoFinished;
-(BOOL)initialized;
-(NSString *)script;
-(void)setScript:(NSString *)arg1 ;
-(void)setInitialized:(BOOL)arg1 ;
-(double)videoDuration;
-(void)setVideoDuration:(double)arg1 ;
-(NSMutableArray *)scripts;
-(void)setVideoPaused:(BOOL)arg1 ;
-(void)setScripts:(NSMutableArray *)arg1 ;
-(NSString *)adType;
-(void)setAdType:(NSString *)arg1 ;
-(BOOL)videoPaused;
-(void)stopSession:(/*^block*/id)arg1 ;
-(void)setSkippable:(BOOL)arg1 ;
@end
