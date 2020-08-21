/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <UIKitCore/UISlider.h>

@class UIView;

@interface FBAdVideoScrubber : UISlider {

	UIView* _trackView;
	UIView* _trackMinView;
	UIView* _trackLoadingView;
	UIView* _trackMaxView;
	double _currentScrubberHeight;
	double _currentInset;
	double _playableDuration;
	double _trackInsetWhileScrubbing;
	double _hitAreaBelowScrubber;

}

@property (assign,nonatomic) double playableDuration;                      //@synthesize playableDuration=_playableDuration - In the implementation block
@property (assign,nonatomic) double trackInsetWhileScrubbing;              //@synthesize trackInsetWhileScrubbing=_trackInsetWhileScrubbing - In the implementation block
@property (assign,nonatomic) double hitAreaBelowScrubber;                  //@synthesize hitAreaBelowScrubber=_hitAreaBelowScrubber - In the implementation block
+(void)initialize;
-(void)setPlayableDuration:(double)arg1 animated:(BOOL)arg2 ;
-(void)_updateTrackLoadingViewFrame;
-(id)_imageWithColor:(id)arg1 andSize:(CGRect)arg2 ;
-(id)_imageWithColor:(id)arg1 ;
-(void)_scrubberIsBeingUsed:(id)arg1 ;
-(void)_scrubberIsNotBeingUsed:(id)arg1 ;
-(double)trackInsetWhileScrubbing;
-(void)setTrackInsetWhileScrubbing:(double)arg1 ;
-(double)hitAreaBelowScrubber;
-(void)setHitAreaBelowScrubber:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(double)playableDuration;
-(void)setPlayableDuration:(double)arg1 ;
@end

