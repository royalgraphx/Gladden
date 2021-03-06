/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <MessagesExtension/FNFDecompressionSession.h>

@protocol OS_dispatch_queue, FNFDecompressionSessionDelegate;
@class NSObject, NSMutableDictionary, FNFDecompressionSessionDebuggerForAVC1, FNFDecompressionSessionWeakHolder, NSString;

@interface FNFDecompressionSessionForAVC1 : NSObject <FNFDecompressionSession> {

	OpaqueVTDecompressionSessionRef _decompressionSession;
	NSObject*<OS_dispatch_queue> _decompressionSessionQueue;
	CGSize _inputSize;
	BOOL _firstFrameEnqueued;
	NSMutableDictionary* _destinationPixelBufferAttributes;
	opaqueCMFormatDescriptionRef _format;
	FNFDecompressionSessionDebuggerForAVC1* _debugger;
	BOOL _firstFrameDecoded;
	fnf_avc1_frame_check_t _firstFrameCheck;
	FNFDecompressionSessionWeakHolder* _weakSelfHolder;
	BOOL _didErrorOut;
	BOOL _didWarnOut;
	BOOL _invalidated;
	FNFDecompressionConfig _config;
	vector<std::__1::tuple<unsigned long long, opaqueCMSampleBuffer *>, std::__1::allocator<std::__1::tuple<unsigned long long, opaqueCMSampleBuffer *> > >* _gopFrames;
	BOOL _gopOverflow;
	id<FNFDecompressionSessionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FNFDecompressionSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) opaqueCMFormatDescriptionRef format; 
+(id)errorDomain;
-(id)initWithDelegate:(id)arg1 sampleBufferFormatDescription:(opaqueCMFormatDescriptionRef)arg2 videoSize:(CGSize)arg3 numOfDecoderThreads:(unsigned)arg4 async:(BOOL)arg5 config:(FNFDecompressionConfig)arg6 ;
-(void)enqueueSampleBuffer:(opaqueCMSampleBufferRef)arg1 iFrame:(unsigned long long)arg2 enqueueInfo:(id)arg3 ;
-(unsigned char)canAcceptFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(void)_delegateErrorOut:(id)arg1 frameIndex:(const unsigned long long*)arg2 ;
-(void)_delegateWarning:(int)arg1 isFirstFrame:(BOOL)arg2 sanityCheck:(fnf_avc1_frame_sanity_t)arg3 fixResult:(BOOL)arg4 ;
-(int)_decodeFrame:(opaqueCMSampleBufferRef)arg1 index:(unsigned long long)arg2 fixResult:(id)arg3 ;
-(void)_handleDecodeResult:(int)arg1 imageBuffer:(CVBufferRef)arg2 frameIndex:(unsigned long long)arg3 presentationTimeStamp:(SCD_Struct_IM9)arg4 presentationDuration:(SCD_Struct_IM9)arg5 frameFixResult:(id)arg6 ;
-(void)_destroyDecompressionSession;
-(int)_resetDecompressionSession;
-(void)_storeGopFrame:(opaqueCMSampleBufferRef)arg1 index:(unsigned long long)arg2 isKeyframe:(BOOL)arg3 ;
-(void)_clearGopFrames;
-(int)_feedGopFramesForRecovery;
-(int)_recoverDecodeFrameFailure;
-(id<FNFDecompressionSessionDelegate>)delegate;
-(void)setDelegate:(id<FNFDecompressionSessionDelegate>)arg1 ;
-(opaqueCMFormatDescriptionRef)format;
-(CGSize)inputSize;
-(void)closeSession;
@end

