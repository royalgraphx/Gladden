/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMUIAction;
#import <MessagesExtension/MessagesExtension-Structs.h>
@class NSString, UIColor, UIFont, NSDictionary;

@interface IMUIProperties : NSObject {

	BOOL _isAutoPlay;
	NSString* _name;
	NSString* _type;
	UIColor* _backgroundColor;
	long long _border;
	double _borderWidth;
	UIColor* _borderColor;
	long long _corner;
	double _cornerRadius;
	double _fontSize;
	UIFont* _font;
	UIColor* _textColor;
	long long _textAlignment;
	long long _contentMode;
	NSString* _value;
	NSDictionary* _onClickAction;
	NSDictionary* _attributesDictionary;
	NSString* _reuseIdentifier;
	unsigned long long _orientation;
	id<IMUIAction> _actionDelegate;
	CGRect _frame;
	CGRect _finalGeometry;

}

@property (nonatomic,retain) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                         //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) long long border;                                  //@synthesize border=_border - In the implementation block
@property (assign,nonatomic) double borderWidth;                                //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                             //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) long long corner;                                  //@synthesize corner=_corner - In the implementation block
@property (assign,nonatomic) double cornerRadius;                               //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double fontSize;                                   //@synthesize fontSize=_fontSize - In the implementation block
@property (nonatomic,retain) UIFont * font;                                     //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                               //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) long long textAlignment;                           //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) long long contentMode;                             //@synthesize contentMode=_contentMode - In the implementation block
@property (assign,nonatomic) CGRect frame;                                      //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) CGRect finalGeometry;                              //@synthesize finalGeometry=_finalGeometry - In the implementation block
@property (nonatomic,retain) NSString * value;                                  //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSDictionary * onClickAction;                      //@synthesize onClickAction=_onClickAction - In the implementation block
@property (nonatomic,retain) NSDictionary * attributesDictionary;               //@synthesize attributesDictionary=_attributesDictionary - In the implementation block
@property (nonatomic,retain) NSString * reuseIdentifier;                        //@synthesize reuseIdentifier=_reuseIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isAutoPlay;                                   //@synthesize isAutoPlay=_isAutoPlay - In the implementation block
@property (assign,nonatomic) unsigned long long orientation;                    //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic,__weak) id<IMUIAction> actionDelegate;              //@synthesize actionDelegate=_actionDelegate - In the implementation block
-(NSDictionary *)onClickAction;
-(CGRect)finalGeometry;
-(void)setFinalGeometry:(CGRect)arg1 ;
-(void)setOnClickAction:(NSDictionary *)arg1 ;
-(void)setAttributesDictionary:(NSDictionary *)arg1 ;
-(void)transformWithScale:(double)arg1 ;
-(NSDictionary *)attributesDictionary;
-(NSString *)name;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(unsigned long long)orientation;
-(void)setOrientation:(unsigned long long)arg1 ;
-(CGRect)frame;
-(double)fontSize;
-(void)setFontSize:(double)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(UIFont *)font;
-(double)cornerRadius;
-(double)borderWidth;
-(void)setBorderWidth:(double)arg1 ;
-(UIColor *)textColor;
-(NSString *)reuseIdentifier;
-(long long)textAlignment;
-(void)setReuseIdentifier:(NSString *)arg1 ;
-(UIColor *)borderColor;
-(long long)contentMode;
-(id<IMUIAction>)actionDelegate;
-(void)setActionDelegate:(id<IMUIAction>)arg1 ;
-(void)setBorder:(long long)arg1 ;
-(long long)border;
-(void)setIsAutoPlay:(BOOL)arg1 ;
-(BOOL)isAutoPlay;
-(long long)corner;
-(void)setCorner:(long long)arg1 ;
@end
