/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SKSpriteNode.h>

@class SKSpriteNode;

@interface RenjuStone : SKSpriteNode {

	BOOL down;
	int x;
	int y;
	int num;
	float z;
	SKSpriteNode* shadow;
	SKSpriteNode* stone;

}

@property (assign) int x; 
@property (assign) int y; 
@property (assign) float z; 
@property (assign) int num; 
@property (retain) SKSpriteNode * shadow; 
@property (retain) SKSpriteNode * stone; 
@property (assign) BOOL down; 
-(int)num;
-(void)setNum:(int)arg1 ;
-(SKSpriteNode *)stone;
-(id)initWithWhite;
-(id)initWithBlack;
-(void)setStone:(SKSpriteNode *)arg1 ;
-(id)init;
-(SKSpriteNode *)shadow;
-(int)x;
-(int)y;
-(float)z;
-(void)setShadow:(SKSpriteNode *)arg1 ;
-(void)setX:(int)arg1 ;
-(void)setY:(int)arg1 ;
-(void)setZ:(float)arg1 ;
-(id)toString;
-(void)white;
-(void)black;
-(BOOL)down;
-(void)setDown:(BOOL)arg1 ;
@end
