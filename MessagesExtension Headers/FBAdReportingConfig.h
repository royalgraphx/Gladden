/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSDictionary, NSArray, NSDate;

@interface FBAdReportingConfig : NSObject {

	NSURL* _adConfigFileURL;
	NSDictionary* _adReportingConfig;

}

@property (nonatomic,readonly) NSURL * adConfigFileURL;                     //@synthesize adConfigFileURL=_adConfigFileURL - In the implementation block
@property (copy) NSDictionary * adReportingConfig;                          //@synthesize adReportingConfig=_adReportingConfig - In the implementation block
@property (nonatomic,readonly) NSArray * reportingItems; 
@property (nonatomic,readonly) NSArray * hidingItems; 
@property (nonatomic,readonly) NSURL * manageAdPreferencesURL; 
@property (nonatomic,readonly) NSURL * adChoicesURL; 
@property (nonatomic,readonly) NSDate * lastUpdateTime; 
+(id)sharedConfigAsync:(BOOL)arg1 ;
+(id)sharedConfig;
-(NSDictionary *)adReportingConfig;
-(void)setAdReportingConfig:(NSDictionary *)arg1 ;
-(id)initWithAsyncLoad:(BOOL)arg1 ;
-(NSURL *)manageAdPreferencesURL;
-(id)manageAdPreferencesURLFromDict:(id)arg1 ;
-(NSURL *)adChoicesURL;
-(id)adChoicesURLFromDict:(id)arg1 ;
-(id)loadFromDict:(id)arg1 error:(id*)arg2 ;
-(id)deleteConfig;
-(BOOL)isReadyForFullscreen;
-(BOOL)isReadyForNonFullscreen;
-(NSArray *)reportingItems;
-(NSArray *)hidingItems;
-(id)reportingItemsFromDict:(id)arg1 ;
-(id)hidingItemsFromDict:(id)arg1 ;
-(BOOL)validateConfigDict:(id)arg1 ;
-(id)extractItemsFromArray:(id)arg1 ;
-(id)loadConfigFromPlist:(id)arg1 ;
-(id)loadFromDiskAsync:(BOOL)arg1 ;
-(id)saveAsync:(BOOL)arg1 ;
-(NSURL *)adConfigFileURL;
-(id)init;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(BOOL)isLoaded;
-(id)save;
-(NSDate *)lastUpdateTime;
@end

