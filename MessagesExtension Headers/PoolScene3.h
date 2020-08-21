/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <MessagesExtension/GameScene.h>

@class SKSpriteNode, SKNode, SKShapeNode, PoolPower, NSMutableArray, YouNode, NSMutableString, NSString, TipNode, PoolGlow, SKCropNode, PoolSkipButton, NSDate, SKAudioNode;

@interface PoolScene3 : GameScene {

	BOOL made_walls;
	int v2;
	int v3;
	int v4;
	int v5;
	BOOL first_shot;
	int ENEMY;
	int BULLET;
	int WALL;
	float fric;
	float fric2;
	float rad;
	float sc;
	float yt;
	float pt;
	float hole_radius;
	int seed;
	unsigned center_ball : 2Vec2;
	unsigned table_center : 2Vec2;
	float board_size;
	float board_size_h;
	PoolContactListener3* listener;
	PoolGhostContactListener3* listener2;
	SKSpriteNode* line;
	SKNode* table;
	SKSpriteNode* board;
	SKSpriteNode* board_top;
	SKSpriteNode* board_black;
	SKShapeNode* canvas;
	SKSpriteNode* black;
	SKSpriteNode* cue;
	SKSpriteNode* cue_shadow;
	PoolPower* power_cue;
	SKSpriteNode* ball1;
	SKSpriteNode* ball2;
	SKSpriteNode* cue_ball;
	SKSpriteNode* cue_ball_dot;
	SKSpriteNode* move;
	unsigned* world : 2World;
	unsigned* ghost_world : 2World;
	unsigned* poly : 2PolygonShape;
	CGPoint touch;
	float direction;
	float rvel;
	float rspeed;
	float last_drag;
	float start_direction;
	unsigned* vec2 : 2Vec2;
	BOOL move_white;
	BOOL moving;
	unsigned* white : 2Body;
	unsigned* black_ball : 2Body;
	unsigned* ghost_white : 2Body;
	BOOL touchDown;
	unsigned holes : 2Vec2[6];
	unsigned glow_holes : 2Vec2[6];
	NSMutableArray* nuke;
	YouNode* you;
	SKNode* selected;
	NSMutableString* replay_send;
	NSMutableArray* replay;
	int player;
	int player2;
	NSString* player_id1;
	NSString* player_id2;
	BOOL mine;
	int state;
	TipNode* tip;
	int left;
	int right;
	int stripes;
	BOOL stripes_assigned;
	BOOL scored;
	NSMutableArray* glows;
	PoolGlow* pocket;
	int win_state;
	SKCropNode* cropNode;
	SKNode* crop;
	SKSpriteNode* crop1;
	SKSpriteNode* crop2;
	SKSpriteNode* crop3;
	PoolSkipButton* skip_button;
	NSDate* last_hit;
	NSDate* last_table_hit;
	SKAudioNode* drag_sound;
	shared_ptr<chameleon::Sound>* drag_sound2;
	NSString* mode;
	int style1;
	int style2;
	BOOL hit;
	BOOL first;
	int time;
	int first_hit;

}

@property (assign) int first_hit; 
@property (assign) BOOL first; 
@property (assign) BOOL hit; 
@property (assign) int time; 
-(void)ball_hit:(float)arg1 ;
-(int)first_hit;
-(void)setFirst_hit:(int)arg1 ;
-(void)table_hit:(float)arg1 ;
-(id)initWithMain:(id)arg1 msg:(id)arg2 ;
-(void)createSceneContents;
-(void)receiveMessage:(id)arg1 ;
-(void)playReplay;
-(id)generatePreview;
-(void)savePlaceBack:(id)arg1 what:(id)arg2 ;
-(void)placeBack:(id)arg1 ;
-(void)touchDownAtPoint:(CGPoint)arg1 ;
-(void)touchMovedToPoint:(CGPoint)arg1 ;
-(void)touchUpAtPoint:(CGPoint)arg1 ;
-(id)parseReplay:(id)arg1 ;
-(id)getPreview;
-(unsigned*)makeFixture:(unsigned*)arg1 ;
-(void)showWin;
-(void)mMove;
-(void)resetWhite;
-(void)resetBall:(unsigned*)arg1 ;
-(void)playNextReplay;
-(void)setBalls;
-(void)addGlows;
-(void)resetWhite:(BOOL)arg1 ;
-(void)fixWhiteConflict;
-(void)fixBallConflict:(unsigned*)arg1 ;
-(float)float_float:(float)arg1 ;
-(float)rminus:(float)arg1 with:(float)arg2 ;
-(void)shoot2;
-(void)makeWalls:(unsigned*)arg1 ;
-(unsigned*)create:(int)arg1 x:(float)arg2 y:(float)arg3 density:(float)arg4 type:(int)arg5 wrld:(unsigned*)arg6 ;
-(void)shoot:(float)arg1 power:(float)arg2 spin_x:(float)arg3 spin_y:(float)arg4 save:(BOOL)arg5 ;
-(id)string_float:(float)arg1 ;
-(BOOL)hit;
-(void)setHit:(BOOL)arg1 ;
-(void)unload;
-(void)reset;
-(int)time;
-(void)setTime:(int)arg1 ;
-(BOOL)first;
-(void)setFirst:(BOOL)arg1 ;
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

