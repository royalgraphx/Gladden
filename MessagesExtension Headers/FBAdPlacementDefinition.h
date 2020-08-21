/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessagesExtension/MessagesExtension-Structs.h>
@class NSNumber;

@interface FBAdPlacementDefinition : NSObject {

	BOOL _cacheable;
	long long _type;
	long long _minViewabilityPercentage;
	long long _minViewabilityTicks;
	long long _refreshInterval;
	long long _refreshThreshold;
	long long _requestTimeout;
	NSNumber* _requestTime;
	long long _invalidationDuration;
	long long _clientMaxRetryCount;
	double _viewabilityCheckInitialDelay;
	double _viewabilityCheckInterval;
	double _videoTimePollingInterval;
	FBAdSize _placementSize;

}

@property (assign,nonatomic) long long type;                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long minViewabilityPercentage;               //@synthesize minViewabilityPercentage=_minViewabilityPercentage - In the implementation block
@property (assign,nonatomic) long long minViewabilityTicks;                    //@synthesize minViewabilityTicks=_minViewabilityTicks - In the implementation block
@property (assign,nonatomic) long long refreshInterval;                        //@synthesize refreshInterval=_refreshInterval - In the implementation block
@property (assign,nonatomic) long long refreshThreshold;                       //@synthesize refreshThreshold=_refreshThreshold - In the implementation block
@property (assign,nonatomic) long long requestTimeout;                         //@synthesize requestTimeout=_requestTimeout - In the implementation block
@property (nonatomic,retain) NSNumber * requestTime;                           //@synthesize requestTime=_requestTime - In the implementation block
@property (assign,nonatomic) long long invalidationDuration;                   //@synthesize invalidationDuration=_invalidationDuration - In the implementation block
@property (assign,nonatomic) long long clientMaxRetryCount;                    //@synthesize clientMaxRetryCount=_clientMaxRetryCount - In the implementation block
@property (assign,nonatomic) double viewabilityCheckInitialDelay;              //@synthesize viewabilityCheckInitialDelay=_viewabilityCheckInitialDelay - In the implementation block
@property (assign,nonatomic) double viewabilityCheckInterval;                  //@synthesize viewabilityCheckInterval=_viewabilityCheckInterval - In the implementation block
@property (assign,nonatomic) double videoTimePollingInterval;                  //@synthesize videoTimePollingInterval=_videoTimePollingInterval - In the implementation block
@property (assign,nonatomic) FBAdSize placementSize;                           //@synthesize placementSize=_placementSize - In the implementation block
@property (assign,getter=isCacheable,nonatomic) BOOL cacheable;                //@synthesize cacheable=_cacheable - In the implementation block
+(void)initialize;
-(id)initWithPlacementData:(id)arg1 ;
-(void)ingestPlacementData:(id)arg1 ;
-(long long)minViewabilityPercentage;
-(void)setMinViewabilityPercentage:(long long)arg1 ;
-(long long)minViewabilityTicks;
-(void)setMinViewabilityTicks:(long long)arg1 ;
-(long long)refreshThreshold;
-(void)setRefreshThreshold:(long long)arg1 ;
-(long long)clientMaxRetryCount;
-(void)setClientMaxRetryCount:(long long)arg1 ;
-(double)viewabilityCheckInitialDelay;
-(void)setViewabilityCheckInitialDelay:(double)arg1 ;
-(double)viewabilityCheckInterval;
-(void)setViewabilityCheckInterval:(double)arg1 ;
-(double)videoTimePollingInterval;
-(void)setVideoTimePollingInterval:(double)arg1 ;
-(FBAdSize)placementSize;
-(void)setPlacementSize:(FBAdSize)arg1 ;
-(id)init;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(long long)invalidationDuration;
-(void)setInvalidationDuration:(long long)arg1 ;
-(long long)refreshInterval;
-(long long)requestTimeout;
-(BOOL)isCacheable;
-(NSNumber *)requestTime;
-(void)setRequestTime:(NSNumber *)arg1 ;
-(void)setCacheable:(BOOL)arg1 ;
-(void)setRefreshInterval:(long long)arg1 ;
-(void)setRequestTimeout:(long long)arg1 ;
@end
