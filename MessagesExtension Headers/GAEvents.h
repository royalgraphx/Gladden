/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer, NSString, NSNumber;

@interface GAEvents : NSObject {

	NSTimer* _eventQueueTimer;
	NSString* _categorySessionStart;
	NSString* _categorySessionEnd;
	NSString* _categoryDesign;
	NSString* _categoryBusiness;
	NSString* _categoryProgression;
	NSString* _categoryResource;
	NSString* _categoryError;
	NSString* _categorySdkError;
	NSNumber* _queueTimerWaitSeconds;

}

@property (nonatomic,retain) NSTimer * eventQueueTimer;                     //@synthesize eventQueueTimer=_eventQueueTimer - In the implementation block
@property (nonatomic,retain) NSString * categorySessionStart;               //@synthesize categorySessionStart=_categorySessionStart - In the implementation block
@property (nonatomic,retain) NSString * categorySessionEnd;                 //@synthesize categorySessionEnd=_categorySessionEnd - In the implementation block
@property (nonatomic,retain) NSString * categoryDesign;                     //@synthesize categoryDesign=_categoryDesign - In the implementation block
@property (nonatomic,retain) NSString * categoryBusiness;                   //@synthesize categoryBusiness=_categoryBusiness - In the implementation block
@property (nonatomic,retain) NSString * categoryProgression;                //@synthesize categoryProgression=_categoryProgression - In the implementation block
@property (nonatomic,retain) NSString * categoryResource;                   //@synthesize categoryResource=_categoryResource - In the implementation block
@property (nonatomic,retain) NSString * categoryError;                      //@synthesize categoryError=_categoryError - In the implementation block
@property (nonatomic,retain) NSString * categorySdkError;                   //@synthesize categorySdkError=_categorySdkError - In the implementation block
@property (nonatomic,retain) NSNumber * queueTimerWaitSeconds;              //@synthesize queueTimerWaitSeconds=_queueTimerWaitSeconds - In the implementation block
+(void)startEventQueue;
+(void)addBusinessEventWithCurrency:(id)arg1 andAmount:(long long)arg2 andItemType:(id)arg3 andItemId:(id)arg4 andCartType:(id)arg5 andReceipt:(id)arg6 ;
+(void)addResourceEventWithFlowType:(long long)arg1 andCurrency:(id)arg2 andAmount:(id)arg3 andItemType:(id)arg4 andItemId:(id)arg5 ;
+(void)addProgressionEventWithProgressionStatus:(long long)arg1 andProgression01:(id)arg2 andProgression02:(id)arg3 andProgression03:(id)arg4 andScore:(id)arg5 ;
+(void)addDesignEventWithEventId:(id)arg1 andValue:(id)arg2 ;
+(void)addErrorEventWithSeverity:(long long)arg1 andMessage:(id)arg2 ;
+(void)stopEventQueue;
+(void)processEventQueue:(id)arg1 ;
+(void)processEventsWithCategory:(id)arg1 andPerformCleanup:(BOOL)arg2 ;
+(void)cleanupEvents;
+(void)fixMissingSessionEndEvents;
+(void)addEventToStoreWithEventData:(id)arg1 ;
+(void)addDimensionsToEventWithEventData:(id)arg1 ;
+(void)sendSdkErrorEventWithType:(long long)arg1 ;
+(id)resourceFlowTypeString:(long long)arg1 ;
+(id)progressionStatusString:(long long)arg1 ;
+(id)errorSeverityString:(long long)arg1 ;
+(id)sdkErrorTypeString:(long long)arg1 ;
+(void)deleteAllEvents;
+(void)addSessionStartEvent;
+(void)addSessionEndEvent;
+(id)sharedInstance;
+(void)setSharedInstance:(id)arg1 ;
-(void)setCategorySessionStart:(NSString *)arg1 ;
-(void)setCategorySessionEnd:(NSString *)arg1 ;
-(void)setCategoryDesign:(NSString *)arg1 ;
-(void)setCategoryBusiness:(NSString *)arg1 ;
-(void)setCategoryProgression:(NSString *)arg1 ;
-(void)setCategoryResource:(NSString *)arg1 ;
-(void)setCategoryError:(NSString *)arg1 ;
-(void)setCategorySdkError:(NSString *)arg1 ;
-(void)setQueueTimerWaitSeconds:(NSNumber *)arg1 ;
-(NSNumber *)queueTimerWaitSeconds;
-(void)setEventQueueTimer:(NSTimer *)arg1 ;
-(NSTimer *)eventQueueTimer;
-(NSString *)categorySessionEnd;
-(NSString *)categorySessionStart;
-(NSString *)categoryBusiness;
-(NSString *)categoryResource;
-(NSString *)categoryProgression;
-(NSString *)categoryDesign;
-(NSString *)categoryError;
-(NSString *)categorySdkError;
-(id)init;
@end

