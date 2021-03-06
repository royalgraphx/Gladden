/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/OMIDInmobiJSExecutor.h>
#import <MessagesExtension/OMIDInmobiJSInvoker.h>

@protocol OS_dispatch_queue;
@class JSContext, OMIDInmobiJSTimer, OMIDInmobiJSNetworkBridge, NSObject, NSString;

@interface OMIDInmobiLightJSExecutor : NSObject <OMIDInmobiJSExecutor, OMIDInmobiJSInvoker> {

	JSContext* _jsContext;
	OMIDInmobiJSTimer* _timer;
	OMIDInmobiJSNetworkBridge* _networkBridge;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,readonly) JSContext * jsContext;                                   //@synthesize jsContext=_jsContext - In the implementation block
@property (nonatomic,readonly) OMIDInmobiJSTimer * timer;                               //@synthesize timer=_timer - In the implementation block
@property (nonatomic,readonly) OMIDInmobiJSNetworkBridge * networkBridge;               //@synthesize networkBridge=_networkBridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL supportBackgroundThread; 
@property (nonatomic,readonly) id jsEnvironment; 
+(id)lightJSExecutor;
-(void)invokeCallback:(id)arg1 ;
-(void)injectJavaScriptFromString:(id)arg1 ;
-(BOOL)supportBackgroundThread;
-(id)jsEnvironment;
-(id)initWithTimer:(id)arg1 networkBridge:(id)arg2 ;
-(void)invokeScript:(id)arg1 ;
-(void)invokeCallback:(id)arg1 argument:(id)arg2 ;
-(OMIDInmobiJSNetworkBridge *)networkBridge;
-(OMIDInmobiJSTimer *)timer;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(JSContext *)jsContext;
@end

