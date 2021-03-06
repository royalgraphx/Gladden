/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessagesExtension/MessagesExtension-Structs.h>
@class SCNNode;

@interface ArcheryArrow : NSObject {

	BOOL _miss;
	BOOL _stopped;
	int _target_type;
	float _wave;
	float _wave_height;
	SCNNode* _arrow;
	SCNNode* _shadow;
	SCNVector3 _target;
	SCNVector3 _direction;

}

@property (assign) BOOL miss;                         //@synthesize miss=_miss - In the implementation block
@property (retain) SCNNode * arrow;                   //@synthesize arrow=_arrow - In the implementation block
@property (retain) SCNNode * shadow;                  //@synthesize shadow=_shadow - In the implementation block
@property (assign) SCNVector3 target;                 //@synthesize target=_target - In the implementation block
@property (assign) SCNVector3 direction;              //@synthesize direction=_direction - In the implementation block
@property (assign) int target_type;                   //@synthesize target_type=_target_type - In the implementation block
@property (assign) float wave;                        //@synthesize wave=_wave - In the implementation block
@property (assign) float wave_height;                 //@synthesize wave_height=_wave_height - In the implementation block
@property (assign) BOOL stopped;                      //@synthesize stopped=_stopped - In the implementation block
-(SCNNode *)arrow;
-(BOOL)miss;
-(void)setMiss:(BOOL)arg1 ;
-(int)target_type;
-(void)setTarget_type:(int)arg1 ;
-(float)wave;
-(void)setWave:(float)arg1 ;
-(float)wave_height;
-(void)setWave_height:(float)arg1 ;
-(void)setArrow:(SCNNode *)arg1 ;
-(id)init;
-(void)setTarget:(SCNVector3)arg1 ;
-(SCNVector3)target;
-(BOOL)stopped;
-(void)setStopped:(BOOL)arg1 ;
-(SCNVector3)direction;
-(void)setDirection:(SCNVector3)arg1 ;
-(SCNNode *)shadow;
-(void)setShadow:(SCNNode *)arg1 ;
@end

