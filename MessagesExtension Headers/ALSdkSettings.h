/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ALSdkSettings : NSObject {

	BOOL _isTestAdsEnabled;
	BOOL _muted;
	BOOL _verboseLoggingEnabled;
	BOOL _createdInternally;
	NSString* _autoPreloadAdSizes;
	NSString* _autoPreloadAdTypes;

}

@property (assign) BOOL verboseLoggingEnabled;                                               //@synthesize verboseLoggingEnabled=_verboseLoggingEnabled - In the implementation block
@property (copy) NSString * autoPreloadAdSizes;                                              //@synthesize autoPreloadAdSizes=_autoPreloadAdSizes - In the implementation block
@property (copy) NSString * autoPreloadAdTypes;                                              //@synthesize autoPreloadAdTypes=_autoPreloadAdTypes - In the implementation block
@property (assign,getter=isCreatedInternally,nonatomic) BOOL createdInternally;              //@synthesize createdInternally=_createdInternally - In the implementation block
@property (assign) BOOL isTestAdsEnabled;                                                    //@synthesize isTestAdsEnabled=_isTestAdsEnabled - In the implementation block
@property (assign) BOOL isVerboseLogging; 
@property (assign) BOOL muted;                                                               //@synthesize muted=_muted - In the implementation block
+(id)internalSettings;
-(void)setCreatedInternally:(BOOL)arg1 ;
-(void)setIsTestAdsEnabled:(BOOL)arg1 ;
-(void)setAutoPreloadAdSizes:(NSString *)arg1 ;
-(void)setAutoPreloadAdTypes:(NSString *)arg1 ;
-(void)setIsVerboseLogging:(BOOL)arg1 ;
-(BOOL)isVerboseLogging;
-(BOOL)isTestAdsEnabled;
-(NSString *)autoPreloadAdSizes;
-(NSString *)autoPreloadAdTypes;
-(BOOL)isCreatedInternally;
-(id)init;
-(BOOL)muted;
-(void)setMuted:(BOOL)arg1 ;
-(void)setVerboseLoggingEnabled:(BOOL)arg1 ;
-(BOOL)verboseLoggingEnabled;
@end

