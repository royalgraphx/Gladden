/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString, NSMutableDictionary;

@interface MPMoPubConfiguration : NSObject {

	BOOL _allowLegitimateInterest;
	NSArray* _additionalNetworks;
	NSString* _adUnitIdForAppInitialization;
	NSArray* _globalMediationSettings;
	unsigned long long _loggingLevel;
	NSMutableDictionary* _mediatedNetworkConfigurations;
	NSMutableDictionary* _moPubRequestOptions;

}

@property (nonatomic,retain) NSArray * additionalNetworks;                                     //@synthesize additionalNetworks=_additionalNetworks - In the implementation block
@property (nonatomic,retain) NSString * adUnitIdForAppInitialization;                          //@synthesize adUnitIdForAppInitialization=_adUnitIdForAppInitialization - In the implementation block
@property (assign,nonatomic) BOOL allowLegitimateInterest;                                     //@synthesize allowLegitimateInterest=_allowLegitimateInterest - In the implementation block
@property (nonatomic,retain) NSArray * globalMediationSettings;                                //@synthesize globalMediationSettings=_globalMediationSettings - In the implementation block
@property (assign,nonatomic) unsigned long long loggingLevel;                                  //@synthesize loggingLevel=_loggingLevel - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mediatedNetworkConfigurations;              //@synthesize mediatedNetworkConfigurations=_mediatedNetworkConfigurations - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * moPubRequestOptions;                        //@synthesize moPubRequestOptions=_moPubRequestOptions - In the implementation block
-(NSMutableDictionary *)moPubRequestOptions;
-(BOOL)allowLegitimateInterest;
-(void)setAllowLegitimateInterest:(BOOL)arg1 ;
-(NSMutableDictionary *)mediatedNetworkConfigurations;
-(void)setMediatedNetworkConfigurations:(NSMutableDictionary *)arg1 ;
-(void)setMoPubRequestOptions:(NSMutableDictionary *)arg1 ;
-(id)initWithAdUnitIdForAppInitialization:(id)arg1 ;
-(void)setNetworkConfiguration:(id)arg1 forMediationAdapter:(id)arg2 ;
-(void)setMoPubRequestOptions:(id)arg1 forMediationAdapter:(id)arg2 ;
-(NSArray *)additionalNetworks;
-(void)setAdditionalNetworks:(NSArray *)arg1 ;
-(NSString *)adUnitIdForAppInitialization;
-(void)setAdUnitIdForAppInitialization:(NSString *)arg1 ;
-(NSArray *)globalMediationSettings;
-(void)setGlobalMediationSettings:(NSArray *)arg1 ;
-(void)setLoggingLevel:(unsigned long long)arg1 ;
-(unsigned long long)loggingLevel;
@end

