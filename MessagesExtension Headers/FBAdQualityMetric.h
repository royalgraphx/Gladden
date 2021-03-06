/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBAdQualityMetric : NSObject {

	float _avg;
	float _current;
	float _eligibleThreshold;
	float _max;
	float _min;
	float _sum;
	double _continuousEligibleSeconds;
	double _eligibleSeconds;
	double _maxContinuousEligibleSeconds;
	long long _measurementCount;
	double _measurementSeconds;

}

@property (assign,nonatomic) float sum;                                          //@synthesize sum=_sum - In the implementation block
@property (nonatomic,readonly) float avg;                                        //@synthesize avg=_avg - In the implementation block
@property (nonatomic,readonly) double continuousEligibleSeconds;                 //@synthesize continuousEligibleSeconds=_continuousEligibleSeconds - In the implementation block
@property (nonatomic,readonly) float current;                                    //@synthesize current=_current - In the implementation block
@property (nonatomic,readonly) double eligibleSeconds;                           //@synthesize eligibleSeconds=_eligibleSeconds - In the implementation block
@property (nonatomic,readonly) float eligibleThreshold;                          //@synthesize eligibleThreshold=_eligibleThreshold - In the implementation block
@property (nonatomic,readonly) float max;                                        //@synthesize max=_max - In the implementation block
@property (nonatomic,readonly) double maxContinuousEligibleSeconds;              //@synthesize maxContinuousEligibleSeconds=_maxContinuousEligibleSeconds - In the implementation block
@property (nonatomic,readonly) long long measurementCount;                       //@synthesize measurementCount=_measurementCount - In the implementation block
@property (nonatomic,readonly) double measurementSeconds;                        //@synthesize measurementSeconds=_measurementSeconds - In the implementation block
@property (nonatomic,readonly) float min;                                        //@synthesize min=_min - In the implementation block
+(id)metricWithEligibleThreshold:(float)arg1 ;
-(id)initWithEligibleThreshold:(float)arg1 ;
-(void)registerProgress:(double)arg1 value:(float)arg2 ;
-(void)resetMetricsAndContinuity;
-(double)continuousEligibleSeconds;
-(double)eligibleSeconds;
-(float)eligibleThreshold;
-(double)maxContinuousEligibleSeconds;
-(double)measurementSeconds;
-(id)init;
-(float)max;
-(float)current;
-(float)min;
-(float)avg;
-(float)sum;
-(void)setSum:(float)arg1 ;
-(void)resetMetrics;
-(long long)measurementCount;
@end

