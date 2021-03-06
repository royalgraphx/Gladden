/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <MessagesExtension/GameScene.h>

@class HuntWord, SKShapeNode, SKAudioNode, SKNode, ActionButton, NSMutableArray, SKSpriteNode, SKLabelNode, TipNode, NSDate, NSMutableDictionary, SKMultilineLabel, AnagramsScore, NSString, ShuffleButton;

@interface NoodleScene : GameScene {

	HuntWord* wordie;
	SKShapeNode* canvas;
	SKAudioNode* counting;
	SKAudioNode* ticker;
	SKNode* board;
	ActionButton* enter;
	NSMutableArray* blocks;
	NSMutableArray* answer;
	NSMutableArray* chain;
	SKNode* selected;
	int words;
	int score;
	SKSpriteNode* paper;
	SKLabelNode* score_node;
	SKLabelNode* word_node;
	SKSpriteNode* timer_node;
	SKLabelNode* timer_label;
	SKSpriteNode* timer_arrow;
	SKSpriteNode* timer_arrow2;
	TipNode* tip;
	NSDate* start_time;
	NSMutableArray* words_ar;
	NSMutableDictionary* dict;
	int state;
	SKNode* how;
	SKMultilineLabel* how_label;
	SKMultilineLabel* how_timer;
	ActionButton* start;
	SKSpriteNode* start_timer;
	ActionButton* send;
	AnagramsScore* result;
	AnagramsScore* result2;
	BOOL sent;
	int player;
	BOOL mine;
	NSString* letters;
	NSString* player_id1;
	NSString* player_id2;
	ShuffleButton* shuffle;
	SKNode* glows;
	NSMutableArray* marks;
	NSString* lang;
	SKLabelNode* sc;
	SKSpriteNode* sc2;
	int size;
	NSString* mode;
	BOOL created;

}
-(id)initWithMain:(id)arg1 msg:(id)arg2 ;
-(void)createSceneContents;
-(void)receiveMessage:(id)arg1 ;
-(CGPoint)Slerp:(CGPoint)arg1 pos2:(CGPoint)arg2 ratio:(float)arg3 ;
-(id)generatePreview;
-(void)savePlaceBack:(id)arg1 what:(id)arg2 ;
-(void)placeBack:(id)arg1 ;
-(void)touchDownAtPoint:(CGPoint)arg1 ;
-(void)touchMovedToPoint:(CGPoint)arg1 ;
-(void)touchUpAtPoint:(CGPoint)arg1 ;
-(void)Shuffle;
-(void)enterWord;
-(void)big;
-(void)saveScore;
-(void)toResult;
-(void)winGame;
-(id)generateWord:(id)arg1 ;
-(void)unload;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)didMoveToView:(id)arg1 ;
-(void)update:(double)arg1 ;
-(void)sendMessage;
-(void)didChangeSize:(CGSize)arg1 ;
-(void)resize;
-(void)startGame;
-(void)small;
@end

