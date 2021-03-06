/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURLSessionTask;

@interface MPNativePositionSource : NSObject {

	BOOL _loading;
	NSString* _adUnitIdentifier;
	NSURLSessionTask* _task;
	/*^block*/id _completionHandler;
	double _maximumRetryInterval;
	double _minimumRetryInterval;
	double _retryInterval;
	unsigned long long _retryCount;

}

@property (assign,nonatomic) BOOL loading;                               //@synthesize loading=_loading - In the implementation block
@property (nonatomic,copy) NSString * adUnitIdentifier;                  //@synthesize adUnitIdentifier=_adUnitIdentifier - In the implementation block
@property (nonatomic,retain) NSURLSessionTask * task;                    //@synthesize task=_task - In the implementation block
@property (nonatomic,copy) id completionHandler;                         //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) double maximumRetryInterval;                //@synthesize maximumRetryInterval=_maximumRetryInterval - In the implementation block
@property (assign,nonatomic) double minimumRetryInterval;                //@synthesize minimumRetryInterval=_minimumRetryInterval - In the implementation block
@property (assign,nonatomic) double retryInterval;                       //@synthesize retryInterval=_retryInterval - In the implementation block
@property (assign,nonatomic) unsigned long long retryCount;              //@synthesize retryCount=_retryCount - In the implementation block
-(id)httpTaskWithRequest:(id)arg1 ;
-(void)setMaximumRetryInterval:(double)arg1 ;
-(void)setMinimumRetryInterval:(double)arg1 ;
-(double)minimumRetryInterval;
-(void)parsePositioningData:(id)arg1 ;
-(double)maximumRetryInterval;
-(void)retryLoadingPositions;
-(void)loadPositionsWithAdUnitIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)cancel;
-(NSURLSessionTask *)task;
-(void)setTask:(NSURLSessionTask *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(unsigned long long)retryCount;
-(void)setRetryCount:(unsigned long long)arg1 ;
-(BOOL)loading;
-(void)setLoading:(BOOL)arg1 ;
-(double)retryInterval;
-(void)setRetryInterval:(double)arg1 ;
-(NSString *)adUnitIdentifier;
-(void)setAdUnitIdentifier:(NSString *)arg1 ;
@end

