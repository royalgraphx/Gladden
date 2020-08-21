/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, UIFont, UILabel;

@interface ALCircularCountdownView : UIView {

	BOOL _hideWhenZeroRemainingTime;
	double _hideDelaySeconds;
	unsigned long long _remainingSeconds;
	unsigned long long _totalSeconds;
	UIColor* _countdownColor;
	double _strokeWidth;
	UIFont* _font;
	UILabel* _secondsLabel;

}

@property (nonatomic,retain) UILabel * secondsLabel;                           //@synthesize secondsLabel=_secondsLabel - In the implementation block
@property (readonly) double endDegrees; 
@property (assign,nonatomic) BOOL hideWhenZeroRemainingTime;                   //@synthesize hideWhenZeroRemainingTime=_hideWhenZeroRemainingTime - In the implementation block
@property (assign,nonatomic) double hideDelaySeconds;                          //@synthesize hideDelaySeconds=_hideDelaySeconds - In the implementation block
@property (assign,nonatomic) unsigned long long remainingSeconds;              //@synthesize remainingSeconds=_remainingSeconds - In the implementation block
@property (assign,nonatomic) unsigned long long totalSeconds;                  //@synthesize totalSeconds=_totalSeconds - In the implementation block
@property (nonatomic,retain) UIColor * countdownColor;                         //@synthesize countdownColor=_countdownColor - In the implementation block
@property (assign,nonatomic) double strokeWidth;                               //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (assign,nonatomic) UIFont * font;                                    //@synthesize font=_font - In the implementation block
@property (nonatomic,readonly) UIColor * defaultCountdownColor; 
-(void)baseInitWithFontSize:(double)arg1 strokeSize:(double)arg2 totalSeconds:(unsigned long long)arg3 ;
-(id)initWithFrame:(CGRect)arg1 fontSize:(double)arg2 strokeSize:(double)arg3 totalSeconds:(unsigned long long)arg4 ;
-(void)setTotalSeconds:(unsigned long long)arg1 ;
-(void)setHideWhenZeroRemainingTime:(BOOL)arg1 ;
-(void)setHideDelaySeconds:(double)arg1 ;
-(UIColor *)defaultCountdownColor;
-(void)setCountdownColor:(UIColor *)arg1 ;
-(UIColor *)countdownColor;
-(double)endDegrees;
-(unsigned long long)totalSeconds;
-(BOOL)hideWhenZeroRemainingTime;
-(double)hideDelaySeconds;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)layoutSubviews;
-(UIFont *)font;
-(void)drawRect:(CGRect)arg1 ;
-(double)strokeWidth;
-(void)setStrokeWidth:(double)arg1 ;
-(UILabel *)secondsLabel;
-(void)setSecondsLabel:(UILabel *)arg1 ;
-(void)setRemainingSeconds:(unsigned long long)arg1 ;
-(unsigned long long)remainingSeconds;
@end
