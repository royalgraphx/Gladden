/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <SpriteKit/SKNode.h>

@class SKSpriteNode, ChessPiece;

@interface ChessTip : SKNode {

	BOOL _force;
	SKSpriteNode* tip;
	ChessPiece* castle;
	SKSpriteNode* mc;
	CGPoint pos;

}

@property (retain) ChessPiece * castle; 
@property (retain) SKSpriteNode * tip; 
@property (retain) SKSpriteNode * mc; 
@property (assign) CGPoint pos; 
@property (assign) BOOL force;                       //@synthesize force=_force - In the implementation block
-(void)unblink;
-(SKSpriteNode *)mc;
-(void)setMc:(SKSpriteNode *)arg1 ;
-(ChessPiece *)castle;
-(void)setCastle:(ChessPiece *)arg1 ;
-(id)init;
-(BOOL)force;
-(void)setForce:(BOOL)arg1 ;
-(SKSpriteNode *)tip;
-(void)setTip:(SKSpriteNode *)arg1 ;
-(void)blink;
-(CGPoint)pos;
-(void)setPos:(CGPoint)arg1 ;
@end

