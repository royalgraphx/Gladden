/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SKNode.h>

@class SKLabelNode, SKSpriteNode;

@interface AnagramsBlock : SKNode {

	SKLabelNode* letter;
	SKLabelNode* letter_white;
	BOOL selected;
	BOOL _visited;
	int y;
	int x;
	SKSpriteNode* bg;

}

@property (retain) SKSpriteNode * bg; 
@property (assign) BOOL selected; 
@property (assign) int y; 
@property (assign) int x; 
@property (assign) BOOL visited;                   //@synthesize visited=_visited - In the implementation block
-(void)setBlue;
-(void)setGreen;
-(SKSpriteNode *)bg;
-(void)setBg:(SKSpriteNode *)arg1 ;
-(void)setRepeat;
-(void)setWhite;
-(void)setLetter:(id)arg1 ;
-(id)getLetter;
-(void)setYellow;
-(void)setOrange;
-(BOOL)visited;
-(void)setVisited:(BOOL)arg1 ;
-(id)init;
-(void)setType:(int)arg1 ;
-(int)x;
-(int)y;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(void)setX:(int)arg1 ;
-(void)setY:(int)arg1 ;
@end

