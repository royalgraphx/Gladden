/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBAdSettings : NSObject
+(long long)getLogLevel;
+(void)setMediationService:(id)arg1 ;
+(id)testDeviceHash;
+(void)addTestDevice:(id)arg1 ;
+(void)clearTestDevice:(id)arg1 ;
+(id)bidderToken;
+(id)testDevices;
+(void)persistTestDevices;
+(void)addTestDevices:(id)arg1 ;
+(void)clearTestDevices;
+(void)setIsChildDirected:(BOOL)arg1 ;
+(BOOL)isChildDirected;
+(BOOL)isMixedAudience;
+(void)setMixedAudience:(BOOL)arg1 ;
+(void)setBtExtras:(id)arg1 ;
+(id)btExtras;
+(void)setPersistentUserAgent:(id)arg1 ;
+(id)persistentUserAgent;
+(BOOL)isBackgroundVideoPlaybackAllowed;
+(void)setBackgroundVideoPlaybackAllowed:(BOOL)arg1 ;
+(id)getMediationService;
+(void)setUrlPrefix:(id)arg1 ;
+(id)deliveryEndpointURL;
+(id)webviewBaseURL;
+(id)baseURLWithDefault:(id)arg1 withFormat:(id)arg2 ;
+(id)baseEventURL;
+(id)baseBiddingURL;
+(id)crashReportingEndpointForAppIdentifier:(id)arg1 ;
+(id)synchronizationEndpointURL;
+(void)resetSessionID;
+(long long)testAdType;
+(void)setTestAdType:(long long)arg1 ;
+(id)loggingDelegate;
+(void)setLoggingDelegate:(id)arg1 ;
+(BOOL)assertionsEnabled;
+(id)internalToExternalLogMap;
+(long long)internalToExternalLogLevel:(long long)arg1 ;
+(long long)externalToInternalLogLevel:(long long)arg1 ;
+(void)initialize;
+(id)baseURL;
+(id)sessionID;
+(void)setLogLevel:(long long)arg1 ;
+(id)urlSession;
+(id)sessionInfo;
+(id)routingToken;
+(id)urlPrefix;
+(id)sessionStartTime;
+(BOOL)isTestMode;
@end

