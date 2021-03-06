/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, ALSdk, NSString;

@interface ALGlobalStatsManager : NSObject {

	NSMutableDictionary* _stats;
	ALSdk* _sdk;
	NSString* _userDataKey;

}

@property (nonatomic,retain) ALSdk * sdk;                         //@synthesize sdk=_sdk - In the implementation block
@property (nonatomic,retain) NSString * userDataKey;              //@synthesize userDataKey=_userDataKey - In the implementation block
@property (retain) NSMutableDictionary * stats;                   //@synthesize stats=_stats - In the implementation block
-(void)setSdk:(ALSdk *)arg1 ;
-(ALSdk *)sdk;
-(id)initWithSdk:(id)arg1 ;
-(id)valueOfKey:(id)arg1 ;
-(void)persistAll;
-(void)setUserDataKey:(NSString *)arg1 ;
-(NSString *)userDataKey;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)incrementKey:(id)arg1 ;
-(void)clearAll;
-(NSMutableDictionary *)stats;
-(void)setStats:(NSMutableDictionary *)arg1 ;
-(void)loadAll;
-(void)clearKey:(id)arg1 ;
@end

