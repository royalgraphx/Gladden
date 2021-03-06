/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/ALTask.h>
#import <MessagesExtension/ALAdFetching.h>

@class NSString, NSMutableDictionary, ALAdZone, ALConnectionStatsTracker;

@interface ALTaskFetchNextAd : ALTask <ALAdFetching> {

	BOOL _isPreloading;
	id _delegate;
	ALAdZone* _requiredZone;
	ALConnectionStatsTracker* _statsTracker;

}

@property (nonatomic,retain) ALAdZone * requiredZone;                                          //@synthesize requiredZone=_requiredZone - In the implementation block
@property (nonatomic,retain) ALConnectionStatsTracker * statsTracker;                          //@synthesize statsTracker=_statsTracker - In the implementation block
@property (assign,nonatomic) BOOL isPreloading;                                                //@synthesize isPreloading=_isPreloading - In the implementation block
@property (nonatomic,retain) id delegate;                                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long source; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * adEndpointDomain; 
@property (nonatomic,copy,readonly) NSString * adBackupEndpointDomain; 
@property (nonatomic,readonly) NSMutableDictionary * fetchTaskSpecificParameters; 
-(id)initWithZone:(id)arg1 sdk:(id)arg2 ;
-(void)setIsPreloading:(BOOL)arg1 ;
-(void)setRequiredZone:(ALAdZone *)arg1 ;
-(BOOL)isPreloading;
-(ALAdZone *)requiredZone;
-(void)updateSessionStats;
-(NSMutableDictionary *)fetchTaskSpecificParameters;
-(NSString *)adEndpointDomain;
-(id)createAdEndpointWithDomain:(id)arg1 adParameters:(id)arg2 ;
-(NSString *)adBackupEndpointDomain;
-(id)createRenderTaskWithResponse:(id)arg1 ;
-(void)notifyLoadDelegateOfFailureWithResponseCode:(long long)arg1 ;
-(void)connectionVia:(id)arg1 didSucceedWith:(long long)arg2 responseBody:(id)arg3 ;
-(void)connectionVia:(id)arg1 didFailWith:(long long)arg2 ;
-(BOOL)isVideoTask;
-(void)run;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(unsigned long long)source;
-(double)defaultTimeout;
-(void)setStatsTracker:(ALConnectionStatsTracker *)arg1 ;
-(ALConnectionStatsTracker *)statsTracker;
@end

