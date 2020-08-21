/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SKNode.h>

@class NSMutableArray, SKLabelNode;

@interface MancalaSpot : SKNode {

	int num;
	int player;
	NSMutableArray* drop;
	NSMutableArray* pieces;
	SKLabelNode* number;
	SKLabelNode* number2;

}

@property (retain) NSMutableArray * drop; 
@property (retain) NSMutableArray * pieces; 
@property (assign) int num; 
@property (assign) int player; 
@property (retain) SKLabelNode * number; 
@property (retain) SKLabelNode * number2; 
-(int)num;
-(void)setNum:(int)arg1 ;
-(id)initWithRand:(int)arg1 ;
-(void)big_drop:(int)arg1 ;
-(SKLabelNode *)number2;
-(NSMutableArray *)pieces;
-(void)setPieces:(NSMutableArray *)arg1 ;
-(void)setNumber2:(SKLabelNode *)arg1 ;
-(SKLabelNode *)number;
-(void)setNumber:(SKLabelNode *)arg1 ;
-(int)player;
-(void)setPlayer:(int)arg1 ;
-(NSMutableArray *)drop;
-(void)setDrop:(NSMutableArray *)arg1 ;
@end
