/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ALSdk, NSMutableArray, NSObject, NSOperationQueue, ALLogManager;

@interface ALTaskManager : NSObject {

	BOOL _initCompleted;
	ALSdk* _sdk;
	NSMutableArray* _scheduledPreInitOperations;
	NSObject* _preInitOperationsLock;
	NSOperationQueue* _mainQueue;
	NSOperationQueue* _backgroundQueue;
	NSOperationQueue* _postbackQueue;

}

@property (nonatomic,retain) NSMutableArray * scheduledPreInitOperations;              //@synthesize scheduledPreInitOperations=_scheduledPreInitOperations - In the implementation block
@property (nonatomic,retain) NSObject * preInitOperationsLock;                         //@synthesize preInitOperationsLock=_preInitOperationsLock - In the implementation block
@property (assign,nonatomic) BOOL initCompleted;                                       //@synthesize initCompleted=_initCompleted - In the implementation block
@property (nonatomic,retain) NSOperationQueue * mainQueue;                             //@synthesize mainQueue=_mainQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * backgroundQueue;                       //@synthesize backgroundQueue=_backgroundQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * postbackQueue;                         //@synthesize postbackQueue=_postbackQueue - In the implementation block
@property (nonatomic,retain) ALSdk * sdk;                                              //@synthesize sdk=_sdk - In the implementation block
@property (nonatomic,readonly) ALLogManager * logger; 
-(void)setSdk:(ALSdk *)arg1 ;
-(ALSdk *)sdk;
-(void)execute:(id)arg1 onQueue:(unsigned long long)arg2 withPriority:(long long)arg3 ;
-(id)initWithSdk:(id)arg1 ;
-(void)execute:(id)arg1 onQueue:(unsigned long long)arg2 ;
-(void)execute:(id)arg1 onQueue:(unsigned long long)arg2 withDelay:(double)arg3 ;
-(void)executeImmediately:(id)arg1 ;
-(void)markInitialized;
-(void)markInitializing;
-(BOOL)queuePreInitOperationIfNeeded:(id)arg1 ;
-(unsigned long long)pendingOperationsInQueue:(unsigned long long)arg1 ;
-(id)nameForQueue:(unsigned long long)arg1 ;
-(NSOperationQueue *)postbackQueue;
-(void)delayExecutionFor:(id)arg1 ;
-(NSObject *)preInitOperationsLock;
-(void)setInitCompleted:(BOOL)arg1 ;
-(NSMutableArray *)scheduledPreInitOperations;
-(BOOL)initCompleted;
-(void)setPostbackQueue:(NSOperationQueue *)arg1 ;
-(void)setScheduledPreInitOperations:(NSMutableArray *)arg1 ;
-(void)setPreInitOperationsLock:(NSObject *)arg1 ;
-(NSOperationQueue *)mainQueue;
-(ALLogManager *)logger;
-(void)execute:(id)arg1 ;
-(NSOperationQueue *)backgroundQueue;
-(void)setBackgroundQueue:(NSOperationQueue *)arg1 ;
-(void)setMainQueue:(NSOperationQueue *)arg1 ;
@end

