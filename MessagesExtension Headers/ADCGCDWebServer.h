/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group, OS_dispatch_source, ADCGCDWebServerDelegate;
#import <MessagesExtension/MessagesExtension-Structs.h>
@class NSObject, NSMutableArray, NSDictionary, NSString, NSMutableDictionary, NSURL, NSArray;

@interface ADCGCDWebServer : NSObject {

	NSObject*<OS_dispatch_queue> _syncQueue;
	NSObject*<OS_dispatch_group> _sourceGroup;
	NSMutableArray* _handlers;
	long long _activeConnections;
	BOOL _connected;
	CFRunLoopTimerRef _disconnectTimer;
	NSDictionary* _options;
	NSString* _serverName;
	NSString* _authenticationRealm;
	NSMutableDictionary* _authenticationBasicAccounts;
	NSMutableDictionary* _authenticationDigestAccounts;
	Class _connectionClass;
	BOOL _mapHEADToGET;
	double _disconnectDelay;
	unsigned long long _port;
	NSObject*<OS_dispatch_source> _source4;
	NSObject*<OS_dispatch_source> _source6;
	CFNetServiceRef _registrationService;
	CFNetServiceRef _resolutionService;
	DNSServiceRef_tRef _dnsService;
	CFSocketRef _dnsSocket;
	CFRunLoopSourceRef _dnsSource;
	NSString* _dnsAddress;
	unsigned long long _dnsPort;
	BOOL _bindToLocalhost;
	BOOL _suspendInBackground;
	unsigned long long _backgroundTask;
	id<ADCGCDWebServerDelegate> _delegate;

}

@property (nonatomic,readonly) NSURL * serverURL; 
@property (nonatomic,readonly) NSURL * bonjourServerURL; 
@property (nonatomic,readonly) NSURL * publicServerURL; 
@property (nonatomic,readonly) NSArray * handlers;                                       //@synthesize handlers=_handlers - In the implementation block
@property (nonatomic,readonly) NSString * serverName;                                    //@synthesize serverName=_serverName - In the implementation block
@property (nonatomic,readonly) NSString * authenticationRealm;                           //@synthesize authenticationRealm=_authenticationRealm - In the implementation block
@property (nonatomic,readonly) NSDictionary * authenticationBasicAccounts;               //@synthesize authenticationBasicAccounts=_authenticationBasicAccounts - In the implementation block
@property (nonatomic,readonly) NSDictionary * authenticationDigestAccounts;              //@synthesize authenticationDigestAccounts=_authenticationDigestAccounts - In the implementation block
@property (nonatomic,readonly) BOOL shouldAutomaticallyMapHEADToGET;                     //@synthesize mapHEADToGET=_mapHEADToGET - In the implementation block
@property (assign,nonatomic,__weak) id<ADCGCDWebServerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (nonatomic,readonly) unsigned long long port;                                  //@synthesize port=_port - In the implementation block
@property (nonatomic,readonly) NSString * bonjourName; 
@property (nonatomic,readonly) NSString * bonjourType; 
+(void)initialize;
+(void)setLogLevel:(int)arg1 ;
-(void)addGETHandlerForBasePath:(id)arg1 directoryPath:(id)arg2 indexFilename:(id)arg3 cacheAge:(unsigned long long)arg4 allowRangeRequests:(BOOL)arg5 ;
-(BOOL)startWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)_startBackgroundTask;
-(void)_didConnect;
-(void)addHandlerWithMatchBlock:(/*^block*/id)arg1 asyncProcessBlock:(/*^block*/id)arg2 ;
-(int)_createListeningSocket:(BOOL)arg1 localAddress:(const void*)arg2 length:(unsigned)arg3 maxPendingConnections:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)_createDispatchSourceWithListeningSocket:(int)arg1 isIPv6:(BOOL)arg2 ;
-(void)willStartConnection:(id)arg1 ;
-(void)didEndConnection:(id)arg1 ;
-(void)addHandlerWithMatchBlock:(/*^block*/id)arg1 processBlock:(/*^block*/id)arg2 ;
-(NSString *)authenticationRealm;
-(NSDictionary *)authenticationBasicAccounts;
-(NSDictionary *)authenticationDigestAccounts;
-(BOOL)shouldAutomaticallyMapHEADToGET;
-(BOOL)startWithPort:(unsigned long long)arg1 bonjourName:(id)arg2 ;
-(NSURL *)bonjourServerURL;
-(NSURL *)publicServerURL;
-(void)addDefaultHandlerForMethod:(id)arg1 requestClass:(Class)arg2 asyncProcessBlock:(/*^block*/id)arg3 ;
-(void)addHandlerForMethod:(id)arg1 path:(id)arg2 requestClass:(Class)arg3 asyncProcessBlock:(/*^block*/id)arg4 ;
-(void)addHandlerForMethod:(id)arg1 pathRegex:(id)arg2 requestClass:(Class)arg3 asyncProcessBlock:(/*^block*/id)arg4 ;
-(void)addDefaultHandlerForMethod:(id)arg1 requestClass:(Class)arg2 processBlock:(/*^block*/id)arg3 ;
-(void)addHandlerForMethod:(id)arg1 path:(id)arg2 requestClass:(Class)arg3 processBlock:(/*^block*/id)arg4 ;
-(void)addHandlerForMethod:(id)arg1 pathRegex:(id)arg2 requestClass:(Class)arg3 processBlock:(/*^block*/id)arg4 ;
-(id)_responseWithContentsOfDirectory:(id)arg1 ;
-(void)addGETHandlerForPath:(id)arg1 staticData:(id)arg2 contentType:(id)arg3 cacheAge:(unsigned long long)arg4 ;
-(void)addGETHandlerForPath:(id)arg1 filePath:(id)arg2 isAttachment:(BOOL)arg3 cacheAge:(unsigned long long)arg4 allowRangeRequests:(BOOL)arg5 ;
-(void)logException:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id<ADCGCDWebServerDelegate>)delegate;
-(void)setDelegate:(id<ADCGCDWebServerDelegate>)arg1 ;
-(unsigned long long)port;
-(void)stop;
-(BOOL)start;
-(BOOL)isRunning;
-(void)_stop;
-(void)_didEnterBackground:(id)arg1 ;
-(void)_willEnterForeground:(id)arg1 ;
-(NSArray *)handlers;
-(void)_endBackgroundTask;
-(NSURL *)serverURL;
-(NSString *)bonjourName;
-(BOOL)_start:(id*)arg1 ;
-(NSString *)serverName;
-(void)removeAllHandlers;
-(void)_didDisconnect;
-(void)logVerbose:(id)arg1 ;
-(void)logInfo:(id)arg1 ;
-(void)logError:(id)arg1 ;
-(void)logWarning:(id)arg1 ;
-(NSString *)bonjourType;
@end

