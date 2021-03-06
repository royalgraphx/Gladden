/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <SceneKit/SCNView.h>
#import <MessagesExtension/SCNPhysicsContactDelegate.h>
#import <libobjc.A.dylib/SCNSceneRendererDelegate.h>

@class SCNNode, SCNPhysicsBody, SCNScene, NSMutableArray, BasketballBall, SCNGeometry, NSDate, NSTimer, BeerBall, FeedbackGenerator, SCNMaterial, NSMutableString, NSString, SKScene;

@interface BeerView : SCNView <SCNPhysicsContactDelegate, SCNSceneRendererDelegate> {

	SCNNode* pole1;
	SCNNode* pole2;
	SCNNode* ball;
	SCNNode* basket;
	SCNNode* basket_main;
	SCNNode* net;
	SCNNode* net2;
	SCNNode* net_col;
	SCNNode* ball_shadow;
	SCNNode* selected;
	SCNPhysicsBody* selected_body;
	SCNScene* scene;
	float speed;
	float speed_x;
	CGPoint touch_start;
	CGPoint prev_pos;
	CGPoint touch_pos;
	CGPoint prev_pos2;
	CGVector vec;
	int last_shot;
	int last_shot2;
	int net_frame;
	NSMutableArray* balls;
	BasketballBall* game_ball2;
	SCNNode* count11;
	SCNNode* count12;
	SCNNode* count21;
	SCNNode* count22;
	SCNNode* time1;
	SCNNode* time2;
	SCNNode* table;
	int times1;
	int times2;
	SCNGeometry* mat2;
	NSDate* last_bounce;
	NSDate* last_rim;
	NSTimer* timer2;
	NSMutableArray* net4_textures;
	NSMutableArray* net3_textures;
	NSMutableArray* num_textures;
	float px;
	float ppx;
	SCNVector3 ppos;
	NSMutableArray* cups;
	NSMutableArray* cups2;
	BeerBall* game_ball;
	BeerBall* ball2;
	int ball_hits;
	SCNNode* cam;
	SCNNode* cameraNode;
	NSMutableArray* rep;
	NSMutableArray* reps;
	int rep_time;
	int ball_num;
	FeedbackGenerator* feedback1;
	int rep_moves;
	NSDate* fps;
	SCNNode* touchup_cup;
	SCNNode* touchup_max_cup;
	BOOL conv;
	SCNMaterial* material1_front;
	SCNMaterial* material1_back;
	SCNMaterial* material1_rim;
	SCNMaterial* material2_front;
	SCNMaterial* material2_back;
	SCNMaterial* material2_rim;
	SCNNode* cupp2;
	BOOL mine;
	int state;
	int seed;
	int score1;
	int score2;
	int player;
	int timer;
	int times;
	float ratio;
	int time;
	int number;
	int announce;
	NSMutableString* replay_send;
	NSDate* start_time;
	NSMutableArray* replay1;
	NSMutableArray* replay2;
	NSString* mode;
	NSMutableArray* replay;
	NSString* _id;
	SKScene* _sk_scene;

}

@property (retain) SKScene * sk_scene;                              //@synthesize sk_scene=_sk_scene - In the implementation block
@property (assign) BOOL mine; 
@property (retain) NSMutableArray * replay; 
@property (assign) int time; 
@property (assign) float ratio; 
@property (assign) int times; 
@property (assign) int player; 
@property (retain) NSMutableArray * replay1; 
@property (retain) NSMutableArray * replay2; 
@property (assign) int score1; 
@property (assign) int score2; 
@property (assign) int seed; 
@property (assign) int state; 
@property (assign) int announce; 
@property (assign) int timer; 
@property (retain) NSDate * start_time; 
@property (retain) NSMutableString * replay_send; 
@property (retain) NSString * mode; 
@property (retain) NSString * _id;                                  //@synthesize id=_id - In the implementation block
@property (assign) int number; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)Skip;
-(void)playReplay;
-(void)touchDownAtPoint:(CGPoint)arg1 ;
-(void)touchMovedToPoint:(CGPoint)arg1 ;
-(void)touchUpAtPoint:(CGPoint)arg1 ;
-(id)parseReplay:(id)arg1 ;
-(void)setBoard:(id)arg1 ;
-(id)exportBoard;
-(int)score1;
-(int)score2;
-(NSMutableString *)replay_send;
-(void)set_id:(NSString *)arg1 ;
-(void)setMine:(BOOL)arg1 ;
-(int)announce;
-(void)setAnnounce:(int)arg1 ;
-(void)changeMode:(id)arg1 ;
-(void)setScore1:(int)arg1 ;
-(void)setScore2:(int)arg1 ;
-(void)startRound;
-(void)displayDidRefresh3;
-(void)tes;
-(void)saveGame;
-(NSMutableArray *)replay2;
-(void)bounce:(float)arg1 ;
-(void)rim:(float)arg1 ;
-(void)rem:(id)arg1 ;
-(void)spawn;
-(void)setReplay_send:(NSMutableString *)arg1 ;
-(void)setStart_time:(NSDate *)arg1 ;
-(NSMutableArray *)replay1;
-(void)setReplay1:(NSMutableArray *)arg1 ;
-(void)setReplay2:(NSMutableArray *)arg1 ;
-(SKScene *)sk_scene;
-(void)setSk_scene:(SKScene *)arg1 ;
-(void)SetCupTextures;
-(void)continueGame;
-(void)spawn2;
-(void)setBoard;
-(void)continueGame2;
-(void)updateShadows;
-(void)overtime;
-(void)arrangeCups;
-(float)convback:(id)arg1 ;
-(void)killCup:(id)arg1 feedback:(BOOL)arg2 ;
-(void)arrangeCups0;
-(id)conv:(float)arg1 ;
-(void)killCup:(id)arg1 ;
-(void)updateThrow;
-(float)distanceToSegment:(CGPoint)arg1 p2:(CGPoint)arg2 p3:(CGPoint)arg3 ;
-(float)projectCamera:(id)arg1 withPoint:(SCNVector3)arg2 ;
-(void)setReplay:(NSMutableArray *)arg1 ;
-(void)setMode:(NSString *)arg1 ;
-(void)unload;
-(int)state;
-(int)time;
-(NSString *)mode;
-(int)timer;
-(void)setTimer:(int)arg1 ;
-(void)setState:(int)arg1 ;
-(void)setTime:(int)arg1 ;
-(int)number;
-(void)setNumber:(int)arg1 ;
-(void)update;
-(int)seed;
-(NSDate *)start_time;
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)didReceiveMemoryWarning;
-(BOOL)prefersStatusBarHidden;
-(void)setSeed:(int)arg1 ;
-(int)player;
-(void)setPlayer:(int)arg1 ;
-(float)ratio;
-(void)setRatio:(float)arg1 ;
-(NSString *)_id;
-(void)setTimes:(int)arg1 ;
-(int)times;
-(void)physicsWorld:(id)arg1 didBeginContact:(id)arg2 ;
-(void)physicsWorld:(id)arg1 didUpdateContact:(id)arg2 ;
-(void)renderer:(id)arg1 willRenderScene:(id)arg2 atTime:(double)arg3 ;
-(void)renderer:(id)arg1 updateAtTime:(double)arg2 ;
-(void)renderer:(id)arg1 didSimulatePhysicsAtTime:(double)arg2 ;
-(NSMutableArray *)replay;
-(void)startGame;
-(BOOL)mine;
-(void)createScene;
@end

