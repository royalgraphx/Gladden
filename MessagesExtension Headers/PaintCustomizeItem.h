/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SKNode.h>

@class MancalaSpot, SKNode, SKSpriteNode;

@interface PaintCustomizeItem : SKNode {

	MancalaSpot* spot;
	SKNode* container;
	int num;
	SKSpriteNode* cue;
	SKSpriteNode* cue_shadow;
	SKSpriteNode* enabled;
	SKSpriteNode* lock;
	SKSpriteNode* area;

}

@property (assign) int num; 
@property (retain) SKSpriteNode * cue; 
@property (retain) SKSpriteNode * cue_shadow; 
@property (retain) SKSpriteNode * lock; 
@property (retain) SKSpriteNode * enabled; 
@property (retain) SKSpriteNode * area; 
-(int)num;
-(SKSpriteNode *)cue_shadow;
-(void)setCue_shadow:(SKSpriteNode *)arg1 ;
-(void)setNum:(int)arg1 ;
-(id)init;
-(void)setType:(int)arg1 ;
-(SKSpriteNode *)enabled;
-(void)setEnabled:(SKSpriteNode *)arg1 ;
-(SKSpriteNode *)lock;
-(void)setLock:(SKSpriteNode *)arg1 ;
-(SKSpriteNode *)area;
-(void)setArea:(SKSpriteNode *)arg1 ;
-(SKSpriteNode *)cue;
-(void)setCue:(SKSpriteNode *)arg1 ;
@end

