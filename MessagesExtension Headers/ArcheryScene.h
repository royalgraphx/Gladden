/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <MessagesExtension/GameScene.h>

@class NSMutableString, NSMutableArray, NSString, SKNode, SKSpriteNode, SKLabelNode, NSDate, SKShapeNode, ArcheryView;

@interface ArcheryScene : GameScene {

	NSMutableString* replay_send;
	NSMutableArray* replay;
	int state;
	int player;
	int player2;
	NSString* player_id1;
	NSString* player_id2;
	int seed;
	BOOL sent;
	SKNode* selected;
	SKSpriteNode* rect;
	SKSpriteNode* wind_rect;
	SKSpriteNode* wind_circle;
	SKSpriteNode* wind_arrow;
	SKLabelNode* wind_label;
	SKLabelNode* wind_value_label;
	SKSpriteNode* aim_mask2;
	SKSpriteNode* aim_mask;
	SKSpriteNode* top_ui_background;
	SKLabelNode* top_ui_set;
	SKLabelNode* top_ui_score;
	SKLabelNode* top_ui_set_score1;
	SKLabelNode* top_ui_set_score2;
	float score_display1;
	float score_display2;
	NSDate* counter_date;
	SKSpriteNode* medal1;
	SKSpriteNode* medal2;
	SKLabelNode* medal_label1;
	SKLabelNode* medal_label2;
	SKNode* notice;
	SKSpriteNode* notice_background;
	SKSpriteNode* notice_line;
	SKNode* notice_hand;
	SKSpriteNode* notice_hand2;
	SKSpriteNode* notice_circle;
	BOOL center_ui;
	int shots;
	SKShapeNode* _spinnyNode;
	SKLabelNode* _label;
	float wind_angle;
	float wind_power;
	int score1;
	int score2;
	int total_score1;
	int total_score2;
	int set_num;
	float _ratio;
	ArcheryView* scene3d;
	SKNode* wind_ui;
	SKNode* aim;
	SKNode* aim_countdown;
	SKNode* top_ui;

}

@property (assign) int set_num; 
@property (assign) int score1; 
@property (assign) int score2; 
@property (assign) int total_score1; 
@property (assign) int total_score2; 
@property (retain) SKNode * top_ui; 
@property (retain) SKNode * aim_countdown; 
@property (retain) SKNode * aim; 
@property (assign) float wind_power; 
@property (assign) float wind_angle; 
@property (retain) SKNode * wind_ui; 
@property (assign) float ratio;                         //@synthesize ratio=_ratio - In the implementation block
@property (retain) ArcheryView * scene3d; 
-(id)initWithMain:(id)arg1 msg:(id)arg2 ;
-(void)createSceneContents;
-(void)receiveMessage:(id)arg1 ;
-(void)playReplay;
-(CGPoint)Slerp:(CGPoint)arg1 pos2:(CGPoint)arg2 ratio:(float)arg3 ;
-(void)touchDownAtPoint:(CGPoint)arg1 ;
-(void)touchMovedToPoint:(CGPoint)arg1 ;
-(void)touchUpAtPoint:(CGPoint)arg1 ;
-(id)parseReplay:(id)arg1 ;
-(int)score1;
-(int)score2;
-(void)checkWin;
-(void)setScore1:(int)arg1 ;
-(void)setScore2:(int)arg1 ;
-(ArcheryView *)scene3d;
-(void)setScene3d:(ArcheryView *)arg1 ;
-(void)hideNotice;
-(void)sco;
-(void)sco2;
-(void)setWind:(float)arg1 angle:(float)arg2 ;
-(void)showPlus:(id)arg1 ;
-(void)playCounter;
-(void)showNotice;
-(void)saveMove:(SCNVector3)arg1 type:(int)arg2 ;
-(void)addAim;
-(void)showScore:(int)arg1 ;
-(void)setWind;
-(void)feedback:(int)arg1 ;
-(void)endShot:(int)arg1 x:(float)arg2 y:(float)arg3 z:(float)arg4 score:(int)arg5 ;
-(CGSize)stageSize2;
-(SKNode *)wind_ui;
-(void)setWind_ui:(SKNode *)arg1 ;
-(float)wind_angle;
-(void)setWind_angle:(float)arg1 ;
-(float)wind_power;
-(void)setWind_power:(float)arg1 ;
-(SKNode *)aim;
-(void)setAim:(SKNode *)arg1 ;
-(SKNode *)aim_countdown;
-(void)setAim_countdown:(SKNode *)arg1 ;
-(SKNode *)top_ui;
-(void)setTop_ui:(SKNode *)arg1 ;
-(int)total_score1;
-(void)setTotal_score1:(int)arg1 ;
-(int)total_score2;
-(void)setTotal_score2:(int)arg1 ;
-(int)set_num;
-(void)setSet_num:(int)arg1 ;
-(void)unload;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)didMoveToView:(id)arg1 ;
-(void)update:(double)arg1 ;
-(float)ratio;
-(void)setRatio:(float)arg1 ;
-(void)setCountdown:(float)arg1 ;
-(void)sendMessage;
-(void)didChangeSize:(CGSize)arg1 ;
-(void)endReplay;
-(void)skip;
-(void)resize;
@end

