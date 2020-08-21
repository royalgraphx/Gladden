/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessagesExtension/MessagesExtension-Structs.h>
@class NSString;

@interface FNFAssetResourceLoadingDataRequest : NSObject {

	/*^block*/id _sendDataCallback;
	BOOL _isAudio;
	BOOL _firstRequest;
	BOOL _isForDiskCache;
	BOOL _isPredictive;
	BOOL _isHeaderOnly;
	int _sequenceIndex;
	unsigned _chunkDurationMs;
	long long _requestedOffset;
	long long _requestedLength;
	long long _currentOffset;
	NSString* _streamFormat;
	SCD_Struct_IM9 _startTime;
	SCD_Struct_IM9 _duration;
	SCD_Struct_IM9 _bufferDurationInSeconds;

}

@property (nonatomic,readonly) long long requestedOffset;                         //@synthesize requestedOffset=_requestedOffset - In the implementation block
@property (nonatomic,readonly) long long requestedLength;                         //@synthesize requestedLength=_requestedLength - In the implementation block
@property (nonatomic,readonly) long long currentOffset;                           //@synthesize currentOffset=_currentOffset - In the implementation block
@property (assign,nonatomic) BOOL isAudio;                                        //@synthesize isAudio=_isAudio - In the implementation block
@property (assign,nonatomic) BOOL firstRequest;                                   //@synthesize firstRequest=_firstRequest - In the implementation block
@property (assign,nonatomic) int sequenceIndex;                                   //@synthesize sequenceIndex=_sequenceIndex - In the implementation block
@property (assign,nonatomic) BOOL isForDiskCache;                                 //@synthesize isForDiskCache=_isForDiskCache - In the implementation block
@property (assign,nonatomic) BOOL isPredictive;                                   //@synthesize isPredictive=_isPredictive - In the implementation block
@property (assign,nonatomic) SCD_Struct_IM9 startTime;                            //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_IM9 duration;                             //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSString * streamFormat;                               //@synthesize streamFormat=_streamFormat - In the implementation block
@property (assign,nonatomic) SCD_Struct_IM9 bufferDurationInSeconds;              //@synthesize bufferDurationInSeconds=_bufferDurationInSeconds - In the implementation block
@property (assign,nonatomic) BOOL isHeaderOnly;                                   //@synthesize isHeaderOnly=_isHeaderOnly - In the implementation block
@property (assign,nonatomic) unsigned chunkDurationMs;                            //@synthesize chunkDurationMs=_chunkDurationMs - In the implementation block
-(id)initWithRequestedOffset:(long long)arg1 requestedLength:(long long)arg2 dataCallback:(/*^block*/id)arg3 isPredictive:(BOOL)arg4 ;
-(void)setIsAudio:(BOOL)arg1 ;
-(BOOL)firstRequest;
-(void)setFirstRequest:(BOOL)arg1 ;
-(BOOL)isForDiskCache;
-(void)setIsForDiskCache:(BOOL)arg1 ;
-(BOOL)isPredictive;
-(void)setIsPredictive:(BOOL)arg1 ;
-(NSString *)streamFormat;
-(void)setStreamFormat:(NSString *)arg1 ;
-(SCD_Struct_IM9)bufferDurationInSeconds;
-(void)setBufferDurationInSeconds:(SCD_Struct_IM9)arg1 ;
-(BOOL)isHeaderOnly;
-(void)setIsHeaderOnly:(BOOL)arg1 ;
-(unsigned)chunkDurationMs;
-(void)setChunkDurationMs:(unsigned)arg1 ;
-(SCD_Struct_IM9)duration;
-(void)setDuration:(SCD_Struct_IM9)arg1 ;
-(SCD_Struct_IM9)startTime;
-(void)setStartTime:(SCD_Struct_IM9)arg1 ;
-(long long)currentOffset;
-(int)sequenceIndex;
-(void)setSequenceIndex:(int)arg1 ;
-(BOOL)isAudio;
-(void)respondWithData:(id)arg1 ;
-(long long)requestedOffset;
-(long long)requestedLength;
@end

