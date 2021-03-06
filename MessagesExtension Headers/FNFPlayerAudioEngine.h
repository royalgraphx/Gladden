/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FNFPlayerAudioEngine <NSObject>
@required
-(void)setLoggingContext:(id)arg1;
-(void)setAudioStreamBasicDescription:(AudioStreamBasicDescription)arg1 extraParameters:(id)arg2 putDataCallback:(/*^block*/id)arg3 enqueueCallback:(/*^block*/id)arg4 outputCallback:(/*^block*/id)arg5 bufferUnderrunCallback:(/*^block*/id)arg6 errorCallback:(/*^block*/id)arg7 logWarningCallback:(/*^block*/id)arg8 sampleFrameSize:(unsigned)arg9 minSampleFrameSize:(unsigned)arg10;
-(BOOL)isReadyToPlayWithStartTime:(SCD_Struct_IM9)arg1;
-(void)playWithStartTime:(SCD_Struct_IM9)arg1;
-(void)stopLoadingData;
-(void)resumeEnqueuingData;
-(void)setVolume:(float)arg1 rampTime:(float)arg2;
-(void)enableLevelMeteringWithCallback:(/*^block*/id)arg1;
-(void)sendCurrentAudioLevelToCallback;
-(void)removeLevelMetering;
-(void)invalidate;
-(void)pause;
-(void)stop;
-(void)reset;
-(void)flush;
-(void)setRate:(float)arg1;
-(void)prepareToPlay;
-(SCD_Struct_IM9*)getCurrentTime;

@end

