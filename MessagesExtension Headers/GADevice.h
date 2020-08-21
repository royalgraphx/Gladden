/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GAReachability, NSString, NSNumber;

@interface GADevice : NSObject {

	GAReachability* _hostReachability;
	NSString* _osPlatform;
	NSString* _osVersion;
	NSString* _deviceModel;
	NSString* _deviceMake;
	NSString* _connectionType;
	NSNumber* _jailBroken;
	NSNumber* _limitedAdTracking;
	NSNumber* _testflightBuild;
	NSNumber* _zeroIdfa;

}

@property (nonatomic,retain) NSString * osPlatform;                          //@synthesize osPlatform=_osPlatform - In the implementation block
@property (nonatomic,retain) NSString * osVersion;                           //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,retain) NSString * deviceModel;                         //@synthesize deviceModel=_deviceModel - In the implementation block
@property (nonatomic,retain) NSString * deviceMake;                          //@synthesize deviceMake=_deviceMake - In the implementation block
@property (nonatomic,retain) NSString * connectionType;                      //@synthesize connectionType=_connectionType - In the implementation block
@property (nonatomic,retain) NSNumber * jailBroken;                          //@synthesize jailBroken=_jailBroken - In the implementation block
@property (nonatomic,retain) NSNumber * limitedAdTracking;                   //@synthesize limitedAdTracking=_limitedAdTracking - In the implementation block
@property (nonatomic,retain) NSNumber * testflightBuild;                     //@synthesize testflightBuild=_testflightBuild - In the implementation block
@property (nonatomic,retain) NSNumber * zeroIdfa;                            //@synthesize zeroIdfa=_zeroIdfa - In the implementation block
@property (nonatomic,retain) GAReachability * hostReachability;              //@synthesize hostReachability=_hostReachability - In the implementation block
+(BOOL)deviceIsLowerOrEqualToIos6;
+(id)idfa;
+(id)deviceMake;
+(id)osPlatform;
+(id)idfv;
+(id)getBundleIdentifier;
+(BOOL)isLimitedAdTracking;
+(BOOL)isJailbroken;
+(BOOL)isTestflightBuild;
+(BOOL)isZeroIdfa;
+(id)sharedInstance;
+(id)connectionType;
+(void)setSharedInstance:(id)arg1 ;
+(id)osVersion;
+(id)deviceModel;
-(id)getOsPlatform;
-(id)getOsVersion;
-(id)getDeviceMake;
-(id)getConnectionType;
-(NSNumber *)limitedAdTracking;
-(void)setLimitedAdTracking:(NSNumber *)arg1 ;
-(NSNumber *)jailBroken;
-(void)setJailBroken:(NSNumber *)arg1 ;
-(BOOL)checkJailbroken;
-(NSNumber *)testflightBuild;
-(BOOL)isRunningInTestFlightEnvironment;
-(void)setTestflightBuild:(NSNumber *)arg1 ;
-(NSNumber *)zeroIdfa;
-(void)setZeroIdfa:(NSNumber *)arg1 ;
-(NSString *)deviceMake;
-(void)setDeviceMake:(NSString *)arg1 ;
-(BOOL)isAppStoreReceiptSandbox;
-(BOOL)hasEmbeddedMobileProvision;
-(NSString *)osPlatform;
-(void)setOsPlatform:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)connectionType;
-(void)setConnectionType:(NSString *)arg1 ;
-(void)reachabilityChanged:(id)arg1 ;
-(NSString *)osVersion;
-(void)setOsVersion:(NSString *)arg1 ;
-(NSString *)deviceModel;
-(void)setDeviceModel:(NSString *)arg1 ;
-(id)getDeviceModel;
-(GAReachability *)hostReachability;
-(void)setHostReachability:(GAReachability *)arg1 ;
@end
