/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <MessagesExtension/GameScene.h>

@class SKSpriteNode, NSMutableArray, SKNode, SKLabelNode, TanksTank, TanksHp, TanksWind, ActionButton, ShufflePuck, PoolSkipButton, NSString, NSMutableString, SKShapeNode;

@interface TanksScene : GameScene {

	float high;
	double last_time;
	float wind_speed;
	SKSpriteNode* cloud1;
	SKSpriteNode* cloud2;
	SKSpriteNode* cloud3;
	TanksContactListener* listener;
	NSMutableArray* particles;
	SKNode* ground;
	SKSpriteNode* moon;
	SKSpriteNode* groundback;
	SKSpriteNode* ground1;
	SKSpriteNode* ground2;
	SKSpriteNode* ground3;
	SKSpriteNode* ground1_bot;
	SKSpriteNode* ground2_bot;
	SKSpriteNode* ground3_bot;
	SKSpriteNode* bg_node;
	SKSpriteNode* tower_sprite;
	SKNode* power_bar;
	SKSpriteNode* power_handle;
	SKLabelNode* power_label;
	TanksTank* tank1;
	TanksTank* tank2;
	TanksHp* hp1;
	TanksHp* hp2;
	TanksWind* wind;
	ActionButton* actionButton;
	SKSpriteNode* board;
	SKNode* table;
	unsigned* world : 2World;
	ShufflePuck* puck;
	SKNode* selected;
	CGPoint last_pos;
	CGPoint puck_pos;
	float speed;
	float board_size;
	float board_size_h;
	PoolSkipButton* skip_button;
	int state;
	int player;
	NSString* player_id1;
	NSString* player_id2;
	int score1;
	int score2;
	BOOL shot;
	NSMutableString* replay_send;
	NSMutableString* pre_send;
	NSMutableArray* replay;
	SKLabelNode* score1_label;
	SKLabelNode* score2_label;
	SKShapeNode* _spinnyNode;
	SKLabelNode* _label;
	NSMutableArray* nuke;

}

@property (retain) NSMutableArray * nuke; 
-(id)initWithMain:(id)arg1 msg:(id)arg2 ;
-(void)createSceneContents;
-(void)receiveMessage:(id)arg1 ;
-(void)Skip;
-(void)ActionShoot;
-(id)exportBoard:(BOOL)arg1 ;
-(void)playReplay;
-(id)generatePreview;
-(void)savePlaceBack:(id)arg1 what:(id)arg2 ;
-(void)placeBack:(id)arg1 ;
-(void)touchDownAtPoint:(CGPoint)arg1 ;
-(void)touchMovedToPoint:(CGPoint)arg1 ;
-(void)touchUpAtPoint:(CGPoint)arg1 ;
-(id)parseReplay:(id)arg1 ;
-(void)setBoard:(id)arg1 ;
-(void)new_round;
-(id)exportBoard;
-(NSMutableArray *)nuke;
-(unsigned*)makeFixture:(unsigned*)arg1 ;
-(unsigned*)makeFixture2:(unsigned*)arg1 ;
-(void)SetWind:(float)arg1 ;
-(void)Shoot:(float)arg1 player:(int)arg2 ;
-(BOOL)showWin;
-(BOOL)checkWin;
-(void)shakeCamera:(id)arg1 duration:(float)arg2 amp:(float)arg3 ;
-(void)PlayShoot;
-(void)setNuke:(NSMutableArray *)arg1 ;
-(void)unload;
-(id)create;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)didMoveToView:(id)arg1 ;
-(void)update:(double)arg1 ;
-(void)sendMessage;
-(void)didChangeSize:(CGSize)arg1 ;
-(void)skip;
-(void)resize;
@end

