/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/FBAdPlayableLoggerService.h>

@class NSString;

@interface FBAdPlayableLogger : NSObject <FBAdPlayableLoggerService> {

	NSString* _token;
	NSString* _endpoint;
	NSString* _playableName;
	NSString* _logSessionID;
	long long _placementType;

}

@property (nonatomic,copy) NSString * token;                        //@synthesize token=_token - In the implementation block
@property (nonatomic,copy) NSString * endpoint;                     //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,copy) NSString * playableName;                 //@synthesize playableName=_playableName - In the implementation block
@property (nonatomic,copy) NSString * logSessionID;                 //@synthesize logSessionID=_logSessionID - In the implementation block
@property (assign,nonatomic) long long placementType;               //@synthesize placementType=_placementType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loggerForToken:(id)arg1 endpoint:(id)arg2 playableName:(id)arg3 placementType:(long long)arg4 ;
-(void)setPlacementType:(long long)arg1 ;
-(BOOL)isPlayableLoggingEnabled;
-(void)logPlayableGameLoaded;
-(void)logPlayableButtonClicked:(id)arg1 x:(long long)arg2 y:(long long)arg3 ;
-(void)logPlayableLevelCompleted:(id)arg1 ;
-(void)logPlayableEndCardShown;
-(id)playableEventLogDataForEventType:(id)arg1 withExtraData:(id)arg2 ;
-(void)logPlayableEventOfType:(id)arg1 withData:(id)arg2 ;
-(NSString *)playableName;
-(void)setPlayableName:(NSString *)arg1 ;
-(NSString *)logSessionID;
-(void)setLogSessionID:(NSString *)arg1 ;
-(NSString *)token;
-(NSString *)endpoint;
-(id)logger;
-(void)setEndpoint:(NSString *)arg1 ;
-(void)setToken:(NSString *)arg1 ;
-(long long)placementType;
-(id)stringWithNumber:(long long)arg1 ;
@end
