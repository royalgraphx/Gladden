/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GALogger : NSObject {

	BOOL _verboseLogEnabled;
	BOOL _orbitLogEnabled;
	BOOL _analyticsLogEnabled;
	BOOL _debugEnabled;

}

@property (assign,nonatomic) BOOL verboseLogEnabled;                //@synthesize verboseLogEnabled=_verboseLogEnabled - In the implementation block
@property (assign,nonatomic) BOOL orbitLogEnabled;                  //@synthesize orbitLogEnabled=_orbitLogEnabled - In the implementation block
@property (assign,nonatomic) BOOL analyticsLogEnabled;              //@synthesize analyticsLogEnabled=_analyticsLogEnabled - In the implementation block
@property (assign,nonatomic) BOOL debugEnabled;                     //@synthesize debugEnabled=_debugEnabled - In the implementation block
+(void)w:(long long)arg1 format:(id)arg2 ;
+(void)i:(long long)arg1 format:(id)arg2 ;
+(void)setAnalyticsLog:(BOOL)arg1 ;
+(void)setVerboseLog:(BOOL)arg1 ;
+(void)ii:(long long)arg1 format:(id)arg2 ;
+(id)getMessageTagForDomain:(long long)arg1 ;
+(void)sendNotificationMessage:(id)arg1 ofType:(long long)arg2 ;
+(void)setOrbitLog:(BOOL)arg1 ;
+(void)e:(long long)arg1 format:(id)arg2 ;
+(void)d:(long long)arg1 format:(id)arg2 ;
+(id)sharedInstance;
+(void)setSharedInstance:(id)arg1 ;
-(void)setAnalyticsLogEnabled:(BOOL)arg1 ;
-(void)setOrbitLogEnabled:(BOOL)arg1 ;
-(void)setVerboseLogEnabled:(BOOL)arg1 ;
-(BOOL)analyticsLogEnabled;
-(BOOL)verboseLogEnabled;
-(BOOL)orbitLogEnabled;
-(id)init;
-(void)setDebugEnabled:(BOOL)arg1 ;
-(BOOL)debugEnabled;
@end

