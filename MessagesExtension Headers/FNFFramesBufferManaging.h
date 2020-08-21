/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FNFFramesBufferManaging <NSObject>
@required
-(BOOL)seekFrameUpdatesFinished;
-(BOOL)doesIFrameBelongsToDecompressionSession:(unsigned long long)arg1;
-(CVBufferRef)findNextFrame:(SCD_Struct_IM9)arg1 withDrawingOn:(BOOL)arg2 isFirstFrame:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(BOOL)shouldRequestData;
-(void)setLastFrameDisplayed;
-(void)setFrameOnClose;
-(BOOL)isFrameOnClose:(unsigned long long)arg1;
-(void)setSampleBufferRequestThreshold:(int)arg1;
-(/*^block*/id)prepareFlush;
-(/*^block*/id)addBuffer:(CVBufferRef)arg1 presentationTimeStamp:(SCD_Struct_IM9)arg2;
-(/*^block*/id)addBuffer:(CVBufferRef)arg1 presentationTimeStamp:(SCD_Struct_IM9)arg2 iFrameEnqueued:(unsigned long long)arg3;
-(void)resetDecompressionSessionIndex;
-(void)enqueueSampleBuffer:(opaqueCMSampleBufferRef)arg1 decompressionSession:(id)arg2 enqueueInfo:(id)arg3;
-(void)clear;
-(BOOL)isFull;
-(void)advanceFrame;
-(id)initWithBufferSize:(int)arg1;

@end

