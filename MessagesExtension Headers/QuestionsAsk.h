/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SKNode.h>

@class SKSpriteNode, SKMultilineLabel, SKNode, Sprite, QuestionsQuestion;

@interface QuestionsAsk : SKNode {

	SKSpriteNode* shadow;
	SKMultilineLabel* q;
	SKNode* container;
	Sprite* bg;
	QuestionsQuestion* _question;

}

@property (retain) QuestionsQuestion * question;              //@synthesize question=_question - In the implementation block
@property (retain) Sprite * bg; 
-(Sprite *)bg;
-(void)setBg:(Sprite *)arg1 ;
-(id)init;
-(void)setNumber:(int)arg1 ;
-(QuestionsQuestion *)question;
-(void)setQuestion:(QuestionsQuestion *)arg1 ;
@end

