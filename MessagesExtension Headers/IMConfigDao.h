/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMKeyValueStore;

@interface IMConfigDao : NSObject {

	IMKeyValueStore* _configStore;

}

@property (nonatomic,retain) IMKeyValueStore * configStore;              //@synthesize configStore=_configStore - In the implementation block
-(void)setConfigStore:(IMKeyValueStore *)arg1 ;
-(id)mutableConfigsForAccountId:(id)arg1 ;
-(id)configKeyForAccountId:(id)arg1 ;
-(IMKeyValueStore *)configStore;
-(void)setLastUpdatedTimeStamp:(double)arg1 forConfig:(id)arg2 forAccountId:(id)arg3 ;
-(void)putConfig:(id)arg1 forAccountId:(id)arg2 ;
-(void)getConfig:(id)arg1 forAccountId:(id)arg2 ;
-(BOOL)isConfigInCache:(id)arg1 forAccountId:(id)arg2 ;
-(double)lastUpdatedTimeStamp:(id)arg1 forAccountId:(id)arg2 ;
-(id)init;
@end

