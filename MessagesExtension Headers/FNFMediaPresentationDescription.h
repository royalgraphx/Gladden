/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessagesExtension/MessagesExtension-Structs.h>
@class NSString, NSDate, NSArray;

@interface FNFMediaPresentationDescription : NSObject {

	BOOL _isDynamic;
	BOOL _isFragmented;
	BOOL _isPredictive;
	BOOL _isManifestService;
	BOOL _containsUsingASRCaptions;
	BOOL _containsCompleteTimeline;
	unsigned _durationMS;
	long long _videoType;
	double _publishFrameTimeMS;
	NSString* _mpdAccessibilityDescription;
	NSDate* _availabilityEndTime;
	NSDate* _publishTime;
	long long _firstAvTimeMS;
	long long _currentServerTimeMs;
	long long _lastVideoFrameTimeMs;
	NSString* _liveTraceStreamId;
	NSString* _liveTraceStreamType;
	NSArray* _videoTracks;
	NSArray* _audioTracks;

}

@property (nonatomic,readonly) BOOL isDynamic;                                           //@synthesize isDynamic=_isDynamic - In the implementation block
@property (nonatomic,readonly) BOOL isFragmented;                                        //@synthesize isFragmented=_isFragmented - In the implementation block
@property (nonatomic,readonly) BOOL isPredictive;                                        //@synthesize isPredictive=_isPredictive - In the implementation block
@property (nonatomic,readonly) BOOL isManifestService;                                   //@synthesize isManifestService=_isManifestService - In the implementation block
@property (nonatomic,readonly) BOOL containsUsingASRCaptions;                            //@synthesize containsUsingASRCaptions=_containsUsingASRCaptions - In the implementation block
@property (nonatomic,readonly) BOOL containsCompleteTimeline;                            //@synthesize containsCompleteTimeline=_containsCompleteTimeline - In the implementation block
@property (nonatomic,readonly) unsigned durationMS;                                      //@synthesize durationMS=_durationMS - In the implementation block
@property (nonatomic,readonly) long long videoType;                                      //@synthesize videoType=_videoType - In the implementation block
@property (nonatomic,readonly) double publishFrameTimeMS;                                //@synthesize publishFrameTimeMS=_publishFrameTimeMS - In the implementation block
@property (nonatomic,copy,readonly) NSString * mpdAccessibilityDescription;              //@synthesize mpdAccessibilityDescription=_mpdAccessibilityDescription - In the implementation block
@property (nonatomic,copy,readonly) NSDate * availabilityEndTime;                        //@synthesize availabilityEndTime=_availabilityEndTime - In the implementation block
@property (nonatomic,copy,readonly) NSDate * publishTime;                                //@synthesize publishTime=_publishTime - In the implementation block
@property (nonatomic,readonly) long long firstAvTimeMS;                                  //@synthesize firstAvTimeMS=_firstAvTimeMS - In the implementation block
@property (nonatomic,readonly) long long currentServerTimeMs;                            //@synthesize currentServerTimeMs=_currentServerTimeMs - In the implementation block
@property (nonatomic,readonly) long long lastVideoFrameTimeMs;                           //@synthesize lastVideoFrameTimeMs=_lastVideoFrameTimeMs - In the implementation block
@property (nonatomic,copy,readonly) NSString * liveTraceStreamId;                        //@synthesize liveTraceStreamId=_liveTraceStreamId - In the implementation block
@property (nonatomic,copy,readonly) NSString * liveTraceStreamType;                      //@synthesize liveTraceStreamType=_liveTraceStreamType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * videoTracks;                               //@synthesize videoTracks=_videoTracks - In the implementation block
@property (nonatomic,copy,readonly) NSArray * audioTracks;                               //@synthesize audioTracks=_audioTracks - In the implementation block
+(id)presentationDescriptionWithContentsOfXml:(id)arg1 mpdUrl:(id)arg2 error:(id*)arg3 ;
+(id)presentationDescriptionWithContentsOfXml:(id)arg1 mpdUrl:(id)arg2 config:(FNFMpdConfig)arg3 error:(id*)arg4 ;
+(id)presentationDescriptionWithContentsOfXml:(id)arg1 mpdUrl:(id)arg2 config:(FNFMpdConfig)arg3 currentTime:(id)arg4 error:(id*)arg5 ;
+(id)urlFromBase:(id)arg1 suffix:(id)arg2 ;
+(NSRange)rangeFromStartToEndString:(id)arg1 ;
+(id)getPssh:(const node*)arg1 ;
+(id)getKeyId:(const node*)arg1 ;
+(id)prettyPrintXML:(id)arg1 ;
-(NSString *)mpdAccessibilityDescription;
-(BOOL)isPredictive;
-(id)initWithAudioTracks:(id)arg1 videoTracks:(id)arg2 isDynamic:(BOOL)arg3 isFragmented:(BOOL)arg4 durationMS:(unsigned)arg5 videoType:(long long)arg6 mpdAccessibilityDescription:(id)arg7 publishFrameTime:(unsigned long long)arg8 availabilityEndTime:(id)arg9 publishTime:(id)arg10 firstAvTimeMS:(long long)arg11 currentServerTimeMs:(long long)arg12 lastVideoFrameTimeMs:(long long)arg13 isPredictive:(BOOL)arg14 isManifestService:(BOOL)arg15 containsUsingASRCaptions:(BOOL)arg16 containsCompleteTimeline:(BOOL)arg17 liveTraceStreamId:(id)arg18 liveTraceStreamType:(id)arg19 ;
-(BOOL)isManifestService;
-(BOOL)containsUsingASRCaptions;
-(BOOL)containsCompleteTimeline;
-(double)publishFrameTimeMS;
-(NSDate *)availabilityEndTime;
-(long long)firstAvTimeMS;
-(long long)currentServerTimeMs;
-(long long)lastVideoFrameTimeMs;
-(NSString *)liveTraceStreamId;
-(NSString *)liveTraceStreamType;
-(BOOL)isDynamic;
-(NSDate *)publishTime;
-(NSArray *)audioTracks;
-(NSArray *)videoTracks;
-(BOOL)isFragmented;
-(long long)videoType;
-(unsigned)durationMS;
@end

