/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <MessagesExtension/GameScene.h>

@class GolfZoomButton, SKSpriteNode, SKNode, SKLabelNode, GolfCounter, GolfBall, NSString, SKAudioNode, NSMutableArray, ShufflePuck, PoolSkipButton, NSMutableString, ActionButton, TipNode, GoalNode, NSDate, SKShapeNode;

@interface GolfScene : GameScene {

	GolfZoomButton* zoom_button;
	BOOL zoom;
	int shoot_state;
	float map_size;
	float map_size2;
	int map_num;
	int map_stroke;
	CGPoint move_start;
	SKSpriteNode* mtip;
	SKNode* hole_screen;
	SKSpriteNode* hole_screen_white;
	SKSpriteNode* hole_screen_flag;
	SKNode* hole_screen_title;
	SKLabelNode* hole_screen_label;
	GolfCounter* counter;
	GolfCounter* counter2;
	int strokes;
	int strokes2;
	SKNode* walls;
	SKNode* shadows;
	SKNode* camera;
	SKNode* top;
	SKNode* ground;
	SKNode* ground2;
	GolfBall* golf_ball;
	GolfBall* golf_ball1;
	GolfBall* golf_ball2;
	unsigned* golf_ball_body : 2Body;
	SKSpriteNode* hole;
	SKNode* move_tip;
	SKNode* stick1;
	SKNode* stick2;
	SKSpriteNode* stick1_sprite;
	SKSpriteNode* stick2_sprite;
	SKSpriteNode* golf_flag;
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
	int seed;
	ShufflePuck* puck1;
	ShufflePuck* puck2;
	NSMutableString* replay_send;
	NSMutableArray* nums;
	NSMutableArray* segments;
	NSMutableString* pre_send;
	NSMutableArray* replay;
	NSMutableArray* replay2;
	NSMutableString* replay_string;
	NSMutableString* replay_string2;
	SKLabelNode* score1_label;
	SKLabelNode* score2_label;
	NSMutableArray* nuke;
	ActionButton* actionButton;
	TipNode* tip;
	SKSpriteNode* tip_bg;
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
	GolfContactListener* listener;
	BOOL v2;
	BOOL sent;
	SKShapeNode* _spinnyNode;
	SKLabelNode* _label;
	NSString* mode;

}

@property (retain) NSString * mode; 
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
-(id)exportBoard;
-(unsigned*)makeFixture:(unsigned*)arg1 ;
-(unsigned*)makeFixture2:(unsigned*)arg1 ;
-(void)sendComplete;
-(void)updateLeft;
-(void)FinalSkip;
-(int)getScore:(CGPoint)arg1 ;
-(void)skipReplay;
-(void)Zoom;
-(int)grid_get:(id)arg1 x:(int)arg2 y:(int)arg3 ;
-(id)getLongest:(id)arg1 ;
-(void)grid_set:(id)arg1 x:(int)arg2 y:(int)arg3 num:(id)arg4 ;
-(unsigned*)makeFixture3:(unsigned*)arg1 ;
-(int)grid_get2:(id)arg1 x:(int)arg2 y:(int)arg3 ;
-(void)createMap;
-(void)UnZoom;
-(void)createMap:(BOOL)arg1 ;
-(void)setMode:(NSString *)arg1 ;
-(void)unload;
-(NSString *)mode;
-(id)create;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)didMoveToView:(id)arg1 ;
-(void)removeAll;
-(void)update:(double)arg1 ;
-(void)blink;
-(BOOL)check:(id)arg1 ;
-(void)sendMessage;
-(void)didChangeSize:(CGSize)arg1 ;
-(void)skip;
-(void)resize;
@end

