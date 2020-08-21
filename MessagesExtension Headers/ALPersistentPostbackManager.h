/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ALSdk, NSObject, NSMutableArray;

@interface ALPersistentPostbackManager : NSObject {

	ALSdk* _sdk;
	NSObject* _queueLock;
	NSMutableArray* _postbackQueue;
	NSMutableArray* _stalledPostbacks;

}

@property (nonatomic,retain) ALSdk * sdk;                                    //@synthesize sdk=_sdk - In the implementation block
@property (nonatomic,retain) NSObject * queueLock;                           //@synthesize queueLock=_queueLock - In the implementation block
@property (nonatomic,retain) NSMutableArray * postbackQueue;                 //@synthesize postbackQueue=_postbackQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * stalledPostbacks;              //@synthesize stalledPostbacks=_stalledPostbacks - In the implementation block
-(void)setSdk:(ALSdk *)arg1 ;
-(ALSdk *)sdk;
-(id)initWithSdk:(id)arg1 ;
-(void)submitPostback:(id)arg1 ;
-(void)submitPostback:(id)arg1 body:(id)arg2 appendTimestamp:(BOOL)arg3 backupURL:(id)arg4 ;
-(void)submitPostback:(id)arg1 body:(id)arg2 ;
-(void)submitPostback:(id)arg1 body:(id)arg2 appendTimestamp:(BOOL)arg3 ;
-(NSMutableArray *)postbackQueue;
-(void)setPostbackQueue:(NSMutableArray *)arg1 ;
-(void)setStalledPostbacks:(NSMutableArray *)arg1 ;
-(void)submitPostbackRequest:(id)arg1 ;
-(void)enqueuePostback:(id)arg1 ;
-(void)dispatchPostback:(id)arg1 ;
-(void)dequeuePostback:(id)arg1 ;
-(NSMutableArray *)stalledPostbacks;
-(void)handleStalledPostback:(id)arg1 ;
-(void)flushPostbackQueue;
-(void)flushStalledPostbacks;
-(void)writeQueue;
-(id)loadQueue;
-(NSObject *)queueLock;
-(void)setQueueLock:(NSObject *)arg1 ;
@end

