/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessagesExtension/MessagesExtension-Structs.h>
@class NSString, NSMutableDictionary;

@interface FNFDecompressionSessionDebuggerForAVC1 : NSObject {

	CGSize _inputSize;
	NSString* _codec;
	map<unsigned long long, opaqueCMSampleBuffer *, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, opaqueCMSampleBuffer *> > >* _samples;
	NSMutableDictionary* _debugInfos;

}
-(void)incrementSessionCount;
-(void)decrementSessionCount;
-(void)addSample:(opaqueCMSampleBufferRef)arg1 index:(unsigned long long)arg2 debugInfo:(id)arg3 ;
-(void)removeSampleAt:(unsigned long long)arg1 ;
-(opaqueCMSampleBufferRef)sampleAt:(unsigned long long)arg1 ;
-(id)debugInfoAt:(unsigned long long)arg1 ;
-(void)reportWarning:(id)arg1 sample:(opaqueCMSampleBufferRef)arg2 isFirstFrame:(BOOL)arg3 supplemental:(id)arg4 ;
-(void)reportError:(int)arg1 sample:(opaqueCMSampleBufferRef)arg2 sampleIndex:(unsigned long long)arg3 isFirstFrame:(BOOL)arg4 supplemental:(id)arg5 ;
-(void)dealloc;
-(id)initWithFormat:(opaqueCMFormatDescriptionRef)arg1 ;
@end
