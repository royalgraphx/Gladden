/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <SpriteKit/SKNode.h>

@class SKSpriteNode, MancalaSpot;

@interface MancalaPiece : SKNode {

	BOOL instant;
	BOOL up;
	int player;
	float vy;
	int num;
	SKSpriteNode* sprite;
	SKSpriteNode* shadow;
	SKSpriteNode* shade;
	MancalaSpot* spot;
	CGPoint pos;

}

@property (retain) MancalaSpot * spot; 
@property (retain) SKSpriteNode * shadow; 
@property (retain) SKSpriteNode * sprite; 
@property (retain) SKSpriteNode * shade; 
@property (assign) int player; 
@property (assign) CGPoint pos; 
@property (assign) float vy; 
@property (assign) BOOL instant; 
@property (assign) int num; 
@property (assign) BOOL up; 
-(int)num;
-(SKSpriteNode *)sprite;
-(void)setVy:(float)arg1 ;
-(void)unblink;
-(void)setNum:(int)arg1 ;
-(void)blinkWin;
-(void)setSprite:(SKSpriteNode *)arg1 ;
-(float)vy;
-(BOOL)instant;
-(void)setInstant:(BOOL)arg1 ;
-(void)setPiece:(int)arg1 ;
-(void)setSpot:(MancalaSpot *)arg1 ;
-(void)setPiece:(int)arg1 style:(int)arg2 ;
-(MancalaSpot *)spot;
-(id)init;
-(SKSpriteNode *)shadow;
-(void)setShadow:(SKSpriteNode *)arg1 ;
-(int)player;
-(void)setPlayer:(int)arg1 ;
-(void)blink;
-(void)setUp:(BOOL)arg1 ;
-(BOOL)up;
-(CGPoint)pos;
-(void)setPos:(CGPoint)arg1 ;
-(SKSpriteNode *)shade;
-(void)setShade:(SKSpriteNode *)arg1 ;
@end

