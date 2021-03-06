/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <SpriteKit/SKNode.h>

@class NSMutableArray, SKSpriteNode;

@interface SeaShip : SKNode {

	NSMutableArray* glows;
	BOOL dead;
	int rot;
	int num;
	int dir;
	SKSpriteNode* sprite;
	NSMutableArray* hit;
	SKSpriteNode* shadow;
	CGPoint pos;

}

@property (retain) SKSpriteNode * sprite; 
@property (retain) SKSpriteNode * shadow; 
@property (assign) CGPoint pos; 
@property (assign) int rot; 
@property (assign) int num; 
@property (assign) int dir; 
@property (retain) NSMutableArray * hit; 
@property (assign) BOOL dead; 
-(int)num;
-(SKSpriteNode *)sprite;
-(void)setNum:(int)arg1 ;
-(void)setSprite:(SKSpriteNode *)arg1 ;
-(NSMutableArray *)hit;
-(void)setHit:(NSMutableArray *)arg1 ;
-(void)setRot:(int)arg1 ;
-(int)rot;
-(void)Die;
-(int)hitPointWhere:(CGPoint)arg1 ;
-(void)Hit:(int)arg1 ;
-(BOOL)hit:(id)arg1 ;
-(BOOL)hitPoint:(CGPoint)arg1 ;
-(void)setRotation:(int)arg1 instant:(BOOL)arg2 ;
-(void)setShip:(int)arg1 ;
-(BOOL)hitPoint2:(CGPoint)arg1 ;
-(BOOL)Bombed:(CGPoint)arg1 ;
-(BOOL)hit:(id)arg1 pos:(CGPoint)arg2 ;
-(id)hit2:(id)arg1 ;
-(void)setTwitchRotation;
-(id)init;
-(CGPoint)min:(CGPoint)arg1 ;
-(CGPoint)max:(CGPoint)arg1 ;
-(int)dir;
-(SKSpriteNode *)shadow;
-(void)setRotation:(int)arg1 ;
-(void)setShadow:(SKSpriteNode *)arg1 ;
-(void)setDead:(BOOL)arg1 ;
-(BOOL)dead;
-(void)setDir:(int)arg1 ;
-(CGPoint)pos;
-(void)setPos:(CGPoint)arg1 ;
@end

