/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSDictionary, ALSdk, ALAdZone, NSArray;

@interface ALVASTContext : NSObject {

	NSMutableArray* _aggregatedVASTResponses;
	NSDictionary* _appLovinAdResponse;
	NSDictionary* _fullAdResponse;
	long long _createdAtMillis;
	unsigned long long _source;
	ALSdk* _sdk;

}

@property (assign,nonatomic,__weak) ALSdk * sdk;                                                                           //@synthesize sdk=_sdk - In the implementation block
@property (nonatomic,retain) NSDictionary * appLovinAdResponse;                                                            //@synthesize appLovinAdResponse=_appLovinAdResponse - In the implementation block
@property (nonatomic,retain) NSDictionary * fullAdResponse;                                                                //@synthesize fullAdResponse=_fullAdResponse - In the implementation block
@property (assign,nonatomic) unsigned long long source;                                                                    //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSMutableArray * aggregatedVASTResponses;                                                     //@synthesize aggregatedVASTResponses=_aggregatedVASTResponses - In the implementation block
@property (assign,nonatomic) long long createdAtMillis;                                                                    //@synthesize createdAtMillis=_createdAtMillis - In the implementation block
@property (nonatomic,readonly) unsigned long long currentWrapperDepth; 
@property (nonatomic,readonly) ALAdZone * adZone; 
@property (getter=shouldValidateVideoTypeWithOS,nonatomic,readonly) BOOL validateVideoTypeWithOS; 
@property (nonatomic,readonly) NSArray * sdkSupportedVideoTypes; 
@property (nonatomic,readonly) NSArray * streamingExtensions; 
@property (getter=shouldValidateWithExtensionIfNoType,nonatomic,readonly) BOOL validateWithExtensionIfNoType; 
@property (nonatomic,readonly) unsigned long long videoCompletionPercent; 
-(void)setSdk:(ALSdk *)arg1 ;
-(ALSdk *)sdk;
-(unsigned long long)videoCompletionPercent;
-(ALAdZone *)adZone;
-(void)setCreatedAtMillis:(long long)arg1 ;
-(long long)createdAtMillis;
-(NSDictionary *)fullAdResponse;
-(unsigned long long)currentWrapperDepth;
-(NSDictionary *)appLovinAdResponse;
-(NSMutableArray *)aggregatedVASTResponses;
-(BOOL)shouldValidateVideoTypeWithOS;
-(NSArray *)sdkSupportedVideoTypes;
-(BOOL)shouldValidateWithExtensionIfNoType;
-(NSArray *)streamingExtensions;
-(void)setFullAdResponse:(NSDictionary *)arg1 ;
-(void)setAppLovinAdResponse:(NSDictionary *)arg1 ;
-(void)setAggregatedVASTResponses:(NSMutableArray *)arg1 ;
-(id)initWithAppLovinAdResponse:(id)arg1 fullAdResponse:(id)arg2 source:(unsigned long long)arg3 sdk:(id)arg4 ;
-(void)setSource:(unsigned long long)arg1 ;
-(unsigned long long)source;
@end

