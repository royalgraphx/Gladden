/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SKNode.h>

@class SKSpriteNode;

@interface CartCar : SKNode {

	float vx;
	float vy;
	float slip;
	float speed;
	float rot;
	float max_speed;
	SKSpriteNode* shadow;
	SKSpriteNode* body;

}

@property (retain) SKSpriteNode * body; 
@property (retain) SKSpriteNode * shadow; 
@property (assign) float rot; 
@property (assign) float vx; 
@property (assign) float vy; 
@property (assign) float slip; 
@property (assign) float speed; 
@property (assign) float max_speed; 
-(void)setVx:(float)arg1 ;
-(void)setVy:(float)arg1 ;
-(float)vy;
-(float)vx;
-(void)setRot:(float)arg1 ;
-(float)rot;
-(float)max_speed;
-(void)setMax_speed:(float)arg1 ;
-(float)slip;
-(void)setSlip:(float)arg1 ;
-(id)init;
-(SKSpriteNode *)shadow;
-(float)speed;
-(void)setSpeed:(float)arg1 ;
-(void)setBody:(SKSpriteNode *)arg1 ;
-(SKSpriteNode *)body;
-(void)setShadow:(SKSpriteNode *)arg1 ;
@end

