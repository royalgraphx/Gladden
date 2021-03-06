/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <MessagesExtension/FBAdSessionProvider.h>

@class FBAdNetworkQuality, NSURLSession, FBAdConcurrentQueue, NSString;

@interface FBAdURLSession : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate, FBAdSessionProvider> {

	BOOL _SSLValidationDisabled;
	long long _customRequestTimeout;
	FBAdNetworkQuality* _networkQuality;
	NSURLSession* _session;
	FBAdConcurrentQueue* _queue;

}

@property (retain) NSURLSession * session;                                                                                       //@synthesize session=_session - In the implementation block
@property (retain) FBAdConcurrentQueue * queue;                                                                                  //@synthesize queue=_queue - In the implementation block
@property (assign,setter=SLValidationDisabled,getter=isSSLValidationDisabled,nonatomic) BOOL SSLValidationDisabled;              //@synthesize SSLValidationDisabled=_SSLValidationDisabled - In the implementation block
@property (assign,nonatomic) long long customRequestTimeout;                                                                     //@synthesize customRequestTimeout=_customRequestTimeout - In the implementation block
@property (nonatomic,readonly) FBAdNetworkQuality * networkQuality;                                                              //@synthesize networkQuality=_networkQuality - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSession;
+(double)timeoutIntervalForRequest;
-(void)clearCustomRequestTimeout;
-(void)setCustomRequestTimeout:(long long)arg1 ;
-(void)updateSession;
-(void)setupSessionWithUserAgent:(id)arg1 ;
-(void)enqueueOrExecuteRequest:(/*^block*/id)arg1 ;
-(void)emptyQueue;
-(id)requestWithURLRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(id)requestWithURL:(id)arg1 HTTPMethod:(id)arg2 queryParameters:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(id)urlRequestWithURL:(id)arg1 HTTPMethod:(id)arg2 queryParameters:(id)arg3 ;
-(BOOL)isSandboxHost:(id)arg1 ;
-(void)setupNetworkQualityMeasurementIfNeeded;
-(BOOL)isSSLValidationDisabled;
-(void)setSSLValidationDisabled:(BOOL)arg1 ;
-(long long)customRequestTimeout;
-(id)init;
-(void)setQueue:(FBAdConcurrentQueue *)arg1 ;
-(FBAdConcurrentQueue *)queue;
-(id)context;
-(NSURLSession *)session;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3 ;
-(id)defaultConfiguration;
-(BOOL)valid;
-(FBAdNetworkQuality *)networkQuality;
@end

