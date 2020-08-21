/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <SpriteKit/SKSpriteNode.h>

@interface SeaJet : SKSpriteNode {

	BOOL bombed;
	BOOL rotate;
	float speed;
	float angle;
	CGPoint pos;

}

@property (assign) CGPoint pos; 
@property (assign) BOOL bombed; 
@property (assign) BOOL rotate; 
@property (assign) float speed; 
@property (assign) float angle; 
-(BOOL)bombed;
-(void)setBombed:(BOOL)arg1 ;
-(void)setRotate:(BOOL)arg1 ;
-(id)init;
-(void)setType:(int)arg1 ;
-(float)angle;
-(void)setAngle:(float)arg1 ;
-(float)speed;
-(void)setSpeed:(float)arg1 ;
-(CGPoint)pos;
-(void)setPos:(CGPoint)arg1 ;
-(BOOL)rotate;
@end

