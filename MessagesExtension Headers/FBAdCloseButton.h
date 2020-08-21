/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface FBAdCloseButton : UIView {

	BOOL _forcedViewDisabled;
	SCD_Struct_IM9 _forcedViewTime;
	BOOL _fillup;
	BOOL _shouldScaleToFill;
	UIColor* _progressColor;
	UIColor* _strokeColor;
	double _contentPadding;
	long long _style;
	SCD_Struct_IM9 _currentTime;

}

@property (assign,nonatomic) SCD_Struct_IM9 currentTime;                            //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,readonly) double currentTimeMs; 
@property (nonatomic,readonly) SCD_Struct_IM9 forcedViewRemainingTime; 
@property (getter=isCloseable,nonatomic,readonly) BOOL closeable; 
@property (nonatomic,retain) UIColor * progressColor;                               //@synthesize progressColor=_progressColor - In the implementation block
@property (nonatomic,retain) UIColor * strokeColor;                                 //@synthesize strokeColor=_strokeColor - In the implementation block
@property (assign,nonatomic) double contentPadding;                                 //@synthesize contentPadding=_contentPadding - In the implementation block
@property (assign,nonatomic) long long style;                                       //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL fillup;                                           //@synthesize fillup=_fillup - In the implementation block
@property (assign,nonatomic) SCD_Struct_IM9 forcedViewTime;                         //@synthesize forcedViewTime=_forcedViewTime - In the implementation block
@property (assign,nonatomic) BOOL shouldScaleToFill;                                //@synthesize shouldScaleToFill=_shouldScaleToFill - In the implementation block
-(SCD_Struct_IM9)forcedViewTime;
-(void)setForcedViewTime:(SCD_Struct_IM9)arg1 ;
-(id)initWithForcedViewTime:(SCD_Struct_IM9)arg1 style:(long long)arg2 ;
-(void)drawProgressInRect:(CGRect)arg1 ;
-(void)drawXInRect:(CGRect)arg1 ;
-(void)drawArrowsInRect:(CGRect)arg1 ;
-(void)disableForcedView;
-(SCD_Struct_IM9)forcedViewRemainingTime;
-(BOOL)isCloseable;
-(double)completeRatio;
-(BOOL)fillup;
-(void)setFillup:(BOOL)arg1 ;
-(BOOL)shouldScaleToFill;
-(void)setShouldScaleToFill:(BOOL)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setProgressColor:(UIColor *)arg1 ;
-(UIColor *)progressColor;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(SCD_Struct_IM9)currentTime;
-(UIColor *)strokeColor;
-(void)setCurrentTime:(SCD_Struct_IM9)arg1 ;
-(double)contentPadding;
-(void)setContentPadding:(double)arg1 ;
-(double)currentTimeMs;
@end
