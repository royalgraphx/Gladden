/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSError;


@protocol FNFPlayerDisplayEngine <NSObject>
@property (retain) OpaqueCMTimebaseRef controlTimebase; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
@property (assign,nonatomic,__weak) id<FNFPlayerDisplayEngineDelegate> displayEngineDelegate; 
@property (assign,nonatomic) CGAffineTransform preferredTransform; 
@required
-(void)setLoggingContext:(id)arg1;
-(void)setShouldApplyRotationTransform:(BOOL)arg1;
-(BOOL)allowRenderingWhileApplicationInactive;
-(BOOL)flushDisplayReadySampleBuffers;
-(BOOL)seekFrameUpdatesFinished;
-(BOOL)flushIfError;
-(void)enqueueSampleBuffer:(opaqueCMSampleBufferRef)arg1 attributes:(unsigned)arg2 codec:(unsigned long long)arg3 enqueueInfo:(id)arg4;
-(void)setNeedsDisplayFrame;
-(void)displayFrameAsApplicable;
-(void)setRenderingThreadPriority:(double)arg1;
-(void)dispatchAsyncOnRenderingThread:(/*^block*/id)arg1;
-(void)yieldDecompressedBuffer:(CVBufferRef)arg1 presentationTimeStamp:(SCD_Struct_IM9)arg2 presentationDuration:(SCD_Struct_IM9)arg3;
-(void)requestLastDisplayedSampleBuffer:(/*^block*/id)arg1 onQueue:(id)arg2;
-(id<FNFPlayerDisplayEngineDelegate>)displayEngineDelegate;
-(void)setDisplayEngineDelegate:(id)arg1;
-(void)invalidate;
-(NSError *)error;
-(void)resume;
-(long long)status;
-(void)flush;
-(void)didBecomeActive;
-(void)willResignActive;
-(CGAffineTransform)preferredTransform;
-(BOOL)isReadyForMoreMediaData;
-(void)stopRequestingMediaData;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2;
-(void)flushAndRemoveImage;
-(void)pause:(int)arg1;
-(void)setPreferredTransform:(CGAffineTransform)arg1;
-(void)setControlTimebase:(OpaqueCMTimebaseRef)arg1;
-(OpaqueCMTimebaseRef)controlTimebase;
-(void)pauseDisplayLink;

@end

