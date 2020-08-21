/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ALSdk, NSDictionary;

@interface ALDataCollector : NSObject {

	ALSdk* _sdk;
	NSDictionary* _cachedDeviceInformation;
	NSDictionary* _cachedAppInformation;

}

@property (nonatomic,retain) ALSdk * sdk;                                          //@synthesize sdk=_sdk - In the implementation block
@property (nonatomic,retain) NSDictionary * cachedDeviceInformation;               //@synthesize cachedDeviceInformation=_cachedDeviceInformation - In the implementation block
@property (nonatomic,retain) NSDictionary * cachedAppInformation;                  //@synthesize cachedAppInformation=_cachedAppInformation - In the implementation block
@property (nonatomic,readonly) NSDictionary * requestParameters; 
@property (nonatomic,readonly) NSDictionary * applicationInformation; 
@property (nonatomic,readonly) NSDictionary * deviceInformation; 
+(void)initialize;
-(void)setSdk:(ALSdk *)arg1 ;
-(ALSdk *)sdk;
-(id)initWithSdk:(id)arg1 ;
-(id)base64RequestParametersWithMaxLength:(unsigned long long)arg1 ;
-(id)requestParametersForTaskSpecificParameters:(id)arg1 isPreloading:(BOOL)arg2 ;
-(void)populateMediationInfo:(id)arg1 ;
-(NSDictionary *)cachedDeviceInformation;
-(id)addEphemeralDeviceData:(id)arg1 ;
-(id)collectModelRevision;
-(id)collectTimeZoneOffset;
-(BOOL)isSimulator;
-(id)collectCarrierName;
-(id)collectCarrierCountryCode;
-(void)setCachedDeviceInformation:(NSDictionary *)arg1 ;
-(id)collectIdfa;
-(id)collectIdfv;
-(id)collectUserAgent;
-(NSDictionary *)cachedAppInformation;
-(void)setCachedAppInformation:(NSDictionary *)arg1 ;
-(NSDictionary *)requestParameters;
-(NSDictionary *)applicationInformation;
-(NSDictionary *)deviceInformation;
@end
