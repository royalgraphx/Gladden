/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/ALMediationAdapterConfiguration.h>

@class ALSdk, ALLogManager, NSString, NSObject, NSDictionary, NSMutableDictionary, NSMutableSet;

@interface ALMediationAdapterConfigurationWrapper : NSObject <ALMediationAdapterConfiguration> {

	ALSdk* _sdk;
	ALLogManager* _logger;
	NSString* _adapterName;
	NSString* _lastKnownConfigurationKey;
	NSObject* _configLock;
	NSDictionary* _lastKnownConfiguration;
	NSMutableDictionary* _cachedConfigurationKeys;
	NSMutableSet* _missingConfigurationKeys;

}

@property (nonatomic,retain) ALSdk * sdk;                                                //@synthesize sdk=_sdk - In the implementation block
@property (nonatomic,retain) ALLogManager * logger;                                      //@synthesize logger=_logger - In the implementation block
@property (nonatomic,copy) NSString * adapterName;                                       //@synthesize adapterName=_adapterName - In the implementation block
@property (nonatomic,copy) NSString * lastKnownConfigurationKey;                         //@synthesize lastKnownConfigurationKey=_lastKnownConfigurationKey - In the implementation block
@property (nonatomic,retain) NSObject * configLock;                                      //@synthesize configLock=_configLock - In the implementation block
@property (nonatomic,retain) NSDictionary * lastKnownConfiguration;                      //@synthesize lastKnownConfiguration=_lastKnownConfiguration - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedConfigurationKeys;              //@synthesize cachedConfigurationKeys=_cachedConfigurationKeys - In the implementation block
@property (nonatomic,retain) NSMutableSet * missingConfigurationKeys;                    //@synthesize missingConfigurationKeys=_missingConfigurationKeys - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSdk:(ALSdk *)arg1 ;
-(ALSdk *)sdk;
-(void)setLastKnownConfigurationKey:(NSString *)arg1 ;
-(void)setConfigLock:(NSObject *)arg1 ;
-(void)setCachedConfigurationKeys:(NSMutableDictionary *)arg1 ;
-(void)setMissingConfigurationKeys:(NSMutableSet *)arg1 ;
-(NSObject *)configLock;
-(void)setLastKnownConfiguration:(NSDictionary *)arg1 ;
-(void)updateLastKnownConfiguration:(id)arg1 ;
-(id)loadLastKnownConfiguration;
-(NSString *)lastKnownConfigurationKey;
-(NSDictionary *)lastKnownConfiguration;
-(NSMutableDictionary *)cachedConfigurationKeys;
-(NSMutableSet *)missingConfigurationKeys;
-(id)initWithAdapterName:(id)arg1 sdk:(id)arg2 ;
-(id)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)numberForKey:(id)arg1 ;
-(ALLogManager *)logger;
-(id)boolForKey:(id)arg1 defaultValue:(id)arg2 ;
-(NSString *)adapterName;
-(void)setAdapterName:(NSString *)arg1 ;
-(void)setLogger:(ALLogManager *)arg1 ;
-(id)stringForKey:(id)arg1 defaultValue:(id)arg2 ;
-(id)numberForKey:(id)arg1 defaultValue:(id)arg2 ;
-(void)initialize:(id)arg1 ;
@end
