/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSMutableArray;

@interface FBAdUtilityUserAgentProvider : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	long long _state;
	NSString* _userAgent;
	NSMutableArray* _handlers;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) long long state;                                 //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * userAgent;                              //@synthesize userAgent=_userAgent - In the implementation block
@property (nonatomic,retain) NSMutableArray * handlers;                       //@synthesize handlers=_handlers - In the implementation block
+(void)retrieveUserAgentWithHandler:(/*^block*/id)arg1 transformBlock:(/*^block*/id)arg2 ;
+(void)fbad_internalClearUserAgent;
+(id)shared;
-(void)retrieveUserAgentWithHandler:(/*^block*/id)arg1 transformBlock:(/*^block*/id)arg2 ;
-(void)enqueueCallback:(/*^block*/id)arg1 ;
-(void)invokeCallbacks;
-(void)retriveUserAgentOnMainThreadComplete:(/*^block*/id)arg1 transformBlock:(/*^block*/id)arg2 ;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSMutableArray *)handlers;
-(void)setHandlers:(NSMutableArray *)arg1 ;
@end

