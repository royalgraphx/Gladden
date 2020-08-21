/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MPVASTTracking.h>

@protocol MPVASTTracking <NSObject>
@required
-(id)initWithVideoConfig:(id)arg1 videoURL:(id)arg2;
-(void)registerVideoViewForViewabilityTracking:(id)arg1;
-(void)handleVideoEvent:(id)arg1 videoTimeOffset:(double)arg2;
-(void)handleVideoProgressEvent:(double)arg1 videoDuration:(double)arg2;
-(void)uniquelySendURLs:(id)arg1;
-(void)stopViewabilityTracking;
-(void)handleVASTError:(unsigned long long)arg1 videoTimeOffset:(double)arg2;

@end


@protocol MPAnalyticsTracker;
@class MPVideoConfig, NSURL, MPViewabilityTracker, NSMutableDictionary, NSMutableSet, NSString;

@interface MPVASTTracking : NSObject <MPVASTTracking> {

	MPVideoConfig* _videoConfig;
	NSURL* _videoURL;
	id<MPAnalyticsTracker> _analyticsTracker;
	MPViewabilityTracker* _viewabilityTracker;
	NSMutableDictionary* _firedEventTable;
	NSMutableSet* _sentURLs;

}

@property (nonatomic,retain) MPVideoConfig * videoConfig;                            //@synthesize videoConfig=_videoConfig - In the implementation block
@property (nonatomic,retain) NSURL * videoURL;                                       //@synthesize videoURL=_videoURL - In the implementation block
@property (nonatomic,retain) id<MPAnalyticsTracker> analyticsTracker;                //@synthesize analyticsTracker=_analyticsTracker - In the implementation block
@property (nonatomic,retain) MPViewabilityTracker * viewabilityTracker;              //@synthesize viewabilityTracker=_viewabilityTracker - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * firedEventTable;                  //@synthesize firedEventTable=_firedEventTable - In the implementation block
@property (nonatomic,retain) NSMutableSet * sentURLs;                                //@synthesize sentURLs=_sentURLs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setVideoConfig:(MPVideoConfig *)arg1 ;
-(id)initWithVideoConfig:(id)arg1 videoURL:(id)arg2 ;
-(void)registerVideoViewForViewabilityTracking:(id)arg1 ;
-(MPVideoConfig *)videoConfig;
-(void)handleVideoEvent:(id)arg1 videoTimeOffset:(double)arg2 ;
-(void)handleVideoProgressEvent:(double)arg1 videoDuration:(double)arg2 ;
-(void)uniquelySendURLs:(id)arg1 ;
-(void)stopViewabilityTracking;
-(void)handleVASTError:(unsigned long long)arg1 videoTimeOffset:(double)arg2 ;
-(MPViewabilityTracker *)viewabilityTracker;
-(void)setViewabilityTracker:(MPViewabilityTracker *)arg1 ;
-(NSMutableSet *)sentURLs;
-(id<MPAnalyticsTracker>)analyticsTracker;
-(NSMutableDictionary *)firedEventTable;
-(void)processAndSendURLs:(id)arg1 disallowPreviouslySentURLs:(BOOL)arg2 errorCode:(id)arg3 videoTimeOffset:(double)arg4 ;
-(id)stringFromVASTError:(unsigned long long)arg1 ;
-(void)setAnalyticsTracker:(id<MPAnalyticsTracker>)arg1 ;
-(void)setFiredEventTable:(NSMutableDictionary *)arg1 ;
-(void)setSentURLs:(NSMutableSet *)arg1 ;
-(NSURL *)videoURL;
-(void)setVideoURL:(NSURL *)arg1 ;
@end

