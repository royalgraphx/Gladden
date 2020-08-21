/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/ProtobufMessage.h>

@class NSString, PlayerInsightState, NSMutableArray;

@interface AuthenticateOutput : NSObject <ProtobufMessage> {

	int cachedSize;
	int cachedSizeId;
	BOOL showBranding;
	BOOL isSocialNetworkUser;
	BOOL isInstalledByYahoo;
	int apiSecurity;
	NSString* token;
	NSString* userId;
	NSString* gameFSRedirectMap;
	PlayerInsightState* playerInsightState;
	NSMutableArray* startDialogs;
	NSMutableArray* newPlayCodes;
	NSString* notificationClickPayload;
	NSMutableArray* deprecated1;
	NSMutableArray* apiServerHosts;

}

@property (retain) NSString * token; 
@property (retain) NSString * userId; 
@property (assign) BOOL showBranding; 
@property (retain) NSString * gameFSRedirectMap; 
@property (retain) PlayerInsightState * playerInsightState; 
@property (retain) NSMutableArray * startDialogs; 
@property (assign) BOOL isSocialNetworkUser; 
@property (retain) NSMutableArray * newPlayCodes; 
@property (retain) NSString * notificationClickPayload; 
@property (assign) BOOL isInstalledByYahoo; 
@property (retain) NSMutableArray * deprecated1; 
@property (assign) int apiSecurity; 
@property (retain) NSMutableArray * apiServerHosts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)authenticateOutputWithToken:(id)arg1 userId:(id)arg2 showBranding:(BOOL)arg3 gameFSRedirectMap:(id)arg4 playerInsightState:(id)arg5 startDialogs:(id)arg6 isSocialNetworkUser:(BOOL)arg7 newPlayCodes:(id)arg8 notificationClickPayload:(id)arg9 isInstalledByYahoo:(BOOL)arg10 deprecated1:(id)arg11 apiSecurity:(int)arg12 apiServerHosts:(id)arg13 ;
-(NSString *)gameFSRedirectMap;
-(BOOL)showBranding;
-(BOOL)isSocialNetworkUser;
-(PlayerInsightState *)playerInsightState;
-(NSMutableArray *)newPlayCodes;
-(NSMutableArray *)startDialogs;
-(BOOL)isInstalledByYahoo;
-(void)serializeToWriter:(id)arg1 sizeCacheId:(int)arg2 ;
-(void)deserializeFromReader:(id)arg1 ;
-(int)sizeWithCacheId:(int)arg1 ;
-(void)setShowBranding:(BOOL)arg1 ;
-(void)setGameFSRedirectMap:(NSString *)arg1 ;
-(void)setPlayerInsightState:(PlayerInsightState *)arg1 ;
-(id)initWithToken:(id)arg1 userId:(id)arg2 showBranding:(BOOL)arg3 gameFSRedirectMap:(id)arg4 playerInsightState:(id)arg5 startDialogs:(id)arg6 isSocialNetworkUser:(BOOL)arg7 newPlayCodes:(id)arg8 notificationClickPayload:(id)arg9 isInstalledByYahoo:(BOOL)arg10 deprecated1:(id)arg11 apiSecurity:(int)arg12 apiServerHosts:(id)arg13 ;
-(void)setStartDialogs:(NSMutableArray *)arg1 ;
-(void)setIsSocialNetworkUser:(BOOL)arg1 ;
-(void)setNewPlayCodes:(NSMutableArray *)arg1 ;
-(NSString *)notificationClickPayload;
-(void)setNotificationClickPayload:(NSString *)arg1 ;
-(void)setIsInstalledByYahoo:(BOOL)arg1 ;
-(NSMutableArray *)deprecated1;
-(void)setDeprecated1:(NSMutableArray *)arg1 ;
-(int)apiSecurity;
-(void)setApiSecurity:(int)arg1 ;
-(NSMutableArray *)apiServerHosts;
-(void)setApiServerHosts:(NSMutableArray *)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(NSString *)userId;
-(void)setUserId:(NSString *)arg1 ;
@end
