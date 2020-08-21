/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessagesExtension/MessagesExtension-Structs.h>
@class ALSdk, NSDictionary, NSString, ALVASTSystemInfo, ALVASTVideoCreative, ALVASTCompanionAd, NSMutableSet;

@interface ALVASTAdBuilder : NSObject {

	ALSdk* _sdk;
	NSDictionary* _adObject;
	NSDictionary* _fullResponse;
	unsigned long long _source;
	long long _createdAtMillis;
	NSString* _title;
	NSString* _adDescription;
	ALVASTSystemInfo* _systemInfo;
	ALVASTVideoCreative* _videoCreative;
	ALVASTCompanionAd* _companionAd;
	NSMutableSet* _impressionTrackers;
	NSMutableSet* _errorTrackers;

}

@property (nonatomic,retain) ALSdk * sdk;                                      //@synthesize sdk=_sdk - In the implementation block
@property (nonatomic,retain) NSDictionary * adObject;                          //@synthesize adObject=_adObject - In the implementation block
@property (nonatomic,retain) NSDictionary * fullResponse;                      //@synthesize fullResponse=_fullResponse - In the implementation block
@property (assign,nonatomic) unsigned long long source;                        //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) long long createdAtMillis;                        //@synthesize createdAtMillis=_createdAtMillis - In the implementation block
@property (nonatomic,copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * adDescription;                           //@synthesize adDescription=_adDescription - In the implementation block
@property (nonatomic,retain) ALVASTSystemInfo * systemInfo;                    //@synthesize systemInfo=_systemInfo - In the implementation block
@property (nonatomic,retain) ALVASTVideoCreative * videoCreative;              //@synthesize videoCreative=_videoCreative - In the implementation block
@property (nonatomic,retain) ALVASTCompanionAd * companionAd;                  //@synthesize companionAd=_companionAd - In the implementation block
@property (nonatomic,retain) NSMutableSet * impressionTrackers;                //@synthesize impressionTrackers=_impressionTrackers - In the implementation block
@property (nonatomic,retain) NSMutableSet * errorTrackers;                     //@synthesize errorTrackers=_errorTrackers - In the implementation block
-(void)setSdk:(ALSdk *)arg1 ;
-(ALSdk *)sdk;
-(ALVASTVideoCreative *)videoCreative;
-(void)setAdObject:(NSDictionary *)arg1 ;
-(void)setFullResponse:(NSDictionary *)arg1 ;
-(void)setCreatedAtMillis:(long long)arg1 ;
-(NSDictionary *)adObject;
-(NSDictionary *)fullResponse;
-(long long)createdAtMillis;
-(ALVASTCompanionAd *)companionAd;
-(void)setAdDescription:(NSString *)arg1 ;
-(void)setVideoCreative:(ALVASTVideoCreative *)arg1 ;
-(void)setCompanionAd:(ALVASTCompanionAd *)arg1 ;
-(void)setImpressionTrackers:(NSMutableSet *)arg1 ;
-(void)setErrorTrackers:(NSMutableSet *)arg1 ;
-(NSString *)adDescription;
-(NSMutableSet *)impressionTrackers;
-(NSMutableSet *)errorTrackers;
-(void)setSource:(unsigned long long)arg1 ;
-(unsigned long long)source;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(ALVASTSystemInfo *)systemInfo;
-(void)setSystemInfo:(ALVASTSystemInfo *)arg1 ;
@end

