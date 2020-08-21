/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <MessagesExtension/GameScene.h>

@class NSString, SKSpriteNode, SKNode, SKAudioNode, NSMutableArray, ShufflePuck, PoolSkipButton, NSMutableString, SKLabelNode, ActionButton, TipNode, GoalNode, NSDate, SKShapeNode;

@interface ShuffleScene : GameScene {

	NSString* mode;
	SKSpriteNode* mtip;
	SKNode* move_tip;
	SKNode* stick1;
	SKNode* stick2;
	SKSpriteNode* stick1_sprite;
	SKSpriteNode* stick2_sprite;
	SKNode* stick1_shadow;
	SKNode* stick2_shadow;
	SKSpriteNode* stick1_sprite_shadow;
	SKSpriteNode* stick2_sprite_shadow;
	NSString* map;
	SKNode* pucks_left;
	SKNode* walle;
	SKSpriteNode* walle_shadow;
	SKAudioNode* counting;
	NSMutableArray* particles;
	SKNode* board;
	SKSpriteNode* board2;
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
	SKSpriteNode* arrow;
	int state;
	int player;
	NSString* player_id1;
	NSString* player_id2;
	int score1;
	int score2;
	BOOL shot;
	ShufflePuck* puck1;
	ShufflePuck* puck2;
	NSMutableString* replay_send;
	NSMutableArray* nums;
	NSMutableArray* segments;
	NSMutableString* pre_send;
	NSMutableArray* replay;
	SKLabelNode* score1_label;
	SKLabelNode* score2_label;
	NSMutableArray* nuke;
	ActionButton* actionButton;
	TipNode* tip;
	float left;
	float right;
	SKLabelNode* marker1;
	SKLabelNode* marker2;
	BOOL shown;
	GoalNode* goal;
	SKSpriteNode* bg_node;
	ShufflePuck* tip_penguin;
	SKAudioNode* drag_sound;
	shared_ptr<chameleon::Sound>* drag_sound2;
	int melt;
	int win;
	NSDate* last_hit;
	ShuffleContactListener* listener;
	SKShapeNode* _spinnyNode;
	SKLabelNode* _label;

}
-(void)ball_hit:(float)arg1 ;
-(id)initWithMain:(id)arg1 msg:(id)arg2 ;
-(void)createSceneContents;
-(void)receiveMessage:(id)arg1 ;
-(void)Skip;
-(void)ActionShoot;
-(id)exportBoard:(BOOL)arg1 ;
-(void)Shoot;
-(void)Splash:(id)arg1 ;
-(BOOL)testWin;
-(void)playReplay;
-(CGPoint)Slerp:(CGPoint)arg1 pos2:(CGPoint)arg2 ratio:(float)arg3 ;
-(id)generatePreview;
-(void)savePlaceBack:(id)arg1 what:(id)arg2 ;
-(void)placeBack:(id)arg1 ;
-(void)ShootShoot;
-(void)touchDownAtPoint:(CGPoint)arg1 ;
-(void)touchMovedToPoint:(CGPoint)arg1 ;
-(void)touchUpAtPoint:(CGPoint)arg1 ;
-(id)parseReplay:(id)arg1 ;
-(void)setBoard:(id)arg1 ;
-(BOOL)new_round;
-(void)closeGoal;
-(id)getPreview;
-(id)exportBoard;
-(unsigned*)makeFixture:(unsigned*)arg1 ;
-(void)updateLeft;
-(int)getScore:(CGPoint)arg1 ;
-(void)unload;
-(id)create;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)didMoveToView:(id)arg1 ;
-(void)removeAll;
-(void)update:(double)arg1 ;
-(void)blink;
-(void)sendMessage;
-(void)didChangeSize:(CGSize)arg1 ;
-(void)skip;
-(void)resize;
@end

