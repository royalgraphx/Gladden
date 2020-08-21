/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SKNode, NSString, AvatarNode, SKLabelNode, NSMutableArray, SKSpriteNode, PokerChat;

@interface CrazyPlayer : NSObject {

	BOOL ready;
	BOOL live;
	int id2;
	int dir;
	SKNode* avatar;
	NSString* nick;
	AvatarNode* avatar2;
	SKLabelNode* nickname;
	SKLabelNode* ready_label;
	NSMutableArray* cards;
	SKSpriteNode* bg;
	PokerChat* chat;

}

@property (retain) PokerChat * chat; 
@property (retain) SKSpriteNode * bg; 
@property (retain) NSMutableArray * cards; 
@property (retain) SKLabelNode * nickname; 
@property (retain) SKLabelNode * ready_label; 
@property (assign) int id2; 
@property (retain) NSString * nick; 
@property (assign) BOOL ready; 
@property (retain) SKNode * avatar; 
@property (retain) AvatarNode * avatar2; 
@property (assign) BOOL live; 
@property (assign) int dir; 
-(SKSpriteNode *)bg;
-(void)setBg:(SKSpriteNode *)arg1 ;
-(AvatarNode *)avatar2;
-(void)setId2:(int)arg1 ;
-(void)setNick:(NSString *)arg1 ;
-(NSString *)nick;
-(int)id2;
-(void)gameState;
-(void)setCards:(NSMutableArray *)arg1 ;
-(void)lobbyState;
-(SKLabelNode *)ready_label;
-(void)setAvatar2:(AvatarNode *)arg1 ;
-(void)setReady_label:(SKLabelNode *)arg1 ;
-(id)init;
-(SKLabelNode *)nickname;
-(void)setNickname:(SKLabelNode *)arg1 ;
-(int)dir;
-(BOOL)ready;
-(SKNode *)avatar;
-(void)setAvatar:(SKNode *)arg1 ;
-(void)setReady:(BOOL)arg1 ;
-(void)setDir:(int)arg1 ;
-(BOOL)live;
-(void)setLive:(BOOL)arg1 ;
-(void)setChat:(PokerChat *)arg1 ;
-(PokerChat *)chat;
-(NSMutableArray *)cards;
@end
