/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CALayer;

@interface MPUBMoatHitTestResult : NSObject {

	BOOL _isVisible;
	CALayer* _hitLayer;

}

@property (assign) BOOL isVisible;                  //@synthesize isVisible=_isVisible - In the implementation block
@property (__weak) CALayer * hitLayer;              //@synthesize hitLayer=_hitLayer - In the implementation block
-(void)setHitLayer:(CALayer *)arg1 ;
-(id)initWithVis:(BOOL)arg1 withHitLayer:(id)arg2 ;
-(CALayer *)hitLayer;
-(BOOL)isVisible;
-(void)setIsVisible:(BOOL)arg1 ;
@end

