/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBAdMovingAverage;
@class NSObject;

@interface FBAdNetworkQuality : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<FBAdMovingAverage> _downloadBandwidthMovingAverage;
	id<FBAdMovingAverage> _uploadBandwidthMovingAverage;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id<FBAdMovingAverage> downloadBandwidthMovingAverage;              //@synthesize downloadBandwidthMovingAverage=_downloadBandwidthMovingAverage - In the implementation block
@property (nonatomic,readonly) id<FBAdMovingAverage> uploadBandwidthMovingAverage;                //@synthesize uploadBandwidthMovingAverage=_uploadBandwidthMovingAverage - In the implementation block
@property (nonatomic,readonly) double downloadBandwidthEstimate; 
@property (nonatomic,readonly) unsigned long long downloadBandwidthState; 
@property (nonatomic,readonly) double uploadBandwidthEstimate; 
@property (nonatomic,readonly) unsigned long long uploadBandwidthState; 
-(void)updateUsingTask:(id)arg1 metrics:(id)arg2 ;
-(void)updateUsingCountOfBytesSent:(unsigned long long)arg1 requestDurationInMiliseconds:(unsigned long long)arg2 ;
-(double)downloadBandwidthEstimate;
-(unsigned long long)downloadBandwidthState;
-(double)uploadBandwidthEstimate;
-(unsigned long long)uploadBandwidthState;
-(void)updateDownloadBandwidthEstimate:(double)arg1 ;
-(void)updateUploadBandwidthEstimate:(double)arg1 ;
-(id<FBAdMovingAverage>)downloadBandwidthMovingAverage;
-(id<FBAdMovingAverage>)uploadBandwidthMovingAverage;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithFactory:(/*^block*/id)arg1 ;
@end
