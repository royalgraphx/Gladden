/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, UIFont, NSNumber;

@interface FBNativeAdViewAttributes : NSObject <NSCopying> {

	BOOL _autoplayEnabled;
	BOOL _adChoicesIsHidden;
	UIColor* _backgroundColor;
	UIColor* _titleColor;
	UIColor* _advertiserNameColor;
	UIColor* _adChoicesForegroundColor;
	UIFont* _titleFont;
	UIColor* _descriptionColor;
	UIFont* _descriptionFont;
	UIColor* _buttonColor;
	UIColor* _buttonTitleColor;
	UIFont* _buttonTitleFont;
	UIColor* _buttonBorderColor;
	NSNumber* _bypassAdLoad;
	NSNumber* _skipRegistration;
	NSNumber* _shouldClip;
	NSNumber* _borderRadius;
	NSNumber* _buttonBorderRadius;
	NSNumber* _iconBorderRadius;
	UIColor* _adChoicesTitleColor;
	UIColor* _adChoicesBackgroundColor;
	NSNumber* _ratingEnabled;
	NSNumber* _socialContextEnabled;

}

@property (nonatomic,copy) NSNumber * bypassAdLoad;                                      //@synthesize bypassAdLoad=_bypassAdLoad - In the implementation block
@property (nonatomic,copy) NSNumber * skipRegistration;                                  //@synthesize skipRegistration=_skipRegistration - In the implementation block
@property (nonatomic,copy) NSNumber * shouldClip;                                        //@synthesize shouldClip=_shouldClip - In the implementation block
@property (nonatomic,copy) NSNumber * borderRadius;                                      //@synthesize borderRadius=_borderRadius - In the implementation block
@property (nonatomic,copy) NSNumber * buttonBorderRadius;                                //@synthesize buttonBorderRadius=_buttonBorderRadius - In the implementation block
@property (nonatomic,copy) NSNumber * iconBorderRadius;                                  //@synthesize iconBorderRadius=_iconBorderRadius - In the implementation block
@property (nonatomic,retain) UIColor * adChoicesTitleColor;                              //@synthesize adChoicesTitleColor=_adChoicesTitleColor - In the implementation block
@property (nonatomic,retain) UIColor * adChoicesBackgroundColor;                         //@synthesize adChoicesBackgroundColor=_adChoicesBackgroundColor - In the implementation block
@property (assign,nonatomic) BOOL adChoicesIsHidden;                                     //@synthesize adChoicesIsHidden=_adChoicesIsHidden - In the implementation block
@property (nonatomic,copy) NSNumber * ratingEnabled;                                     //@synthesize ratingEnabled=_ratingEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * socialContextEnabled;                              //@synthesize socialContextEnabled=_socialContextEnabled - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColor;                                    //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) UIColor * titleColor;                                         //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,copy) UIColor * advertiserNameColor;                                //@synthesize advertiserNameColor=_advertiserNameColor - In the implementation block
@property (nonatomic,copy) UIColor * adChoicesForegroundColor;                           //@synthesize adChoicesForegroundColor=_adChoicesForegroundColor - In the implementation block
@property (nonatomic,copy) UIFont * titleFont;                                           //@synthesize titleFont=_titleFont - In the implementation block
@property (nonatomic,copy) UIColor * descriptionColor;                                   //@synthesize descriptionColor=_descriptionColor - In the implementation block
@property (nonatomic,copy) UIFont * descriptionFont;                                     //@synthesize descriptionFont=_descriptionFont - In the implementation block
@property (nonatomic,copy) UIColor * buttonColor;                                        //@synthesize buttonColor=_buttonColor - In the implementation block
@property (nonatomic,copy) UIColor * buttonTitleColor;                                   //@synthesize buttonTitleColor=_buttonTitleColor - In the implementation block
@property (nonatomic,copy) UIFont * buttonTitleFont;                                     //@synthesize buttonTitleFont=_buttonTitleFont - In the implementation block
@property (nonatomic,copy) UIColor * buttonBorderColor;                                  //@synthesize buttonBorderColor=_buttonBorderColor - In the implementation block
@property (assign,getter=isAutoplayEnabled,nonatomic) BOOL autoplayEnabled;              //@synthesize autoplayEnabled=_autoplayEnabled - In the implementation block
+(id)internalAttributesForType:(long long)arg1 ;
+(id)internalAttributesForAttributes:(id)arg1 ;
+(id)defaultAttributesForBannerType:(long long)arg1 ;
+(id)defaultAttributesForType:(long long)arg1 ;
-(BOOL)isAutoplayEnabled;
-(void)setAutoplayEnabled:(BOOL)arg1 ;
-(UIColor *)advertiserNameColor;
-(void)setAdvertiserNameColor:(UIColor *)arg1 ;
-(UIColor *)adChoicesForegroundColor;
-(void)setAdChoicesForegroundColor:(UIColor *)arg1 ;
-(void)setDescriptionColor:(UIColor *)arg1 ;
-(void)setButtonTitleFont:(UIFont *)arg1 ;
-(UIColor *)buttonBorderColor;
-(void)setButtonBorderColor:(UIColor *)arg1 ;
-(NSNumber *)bypassAdLoad;
-(void)setBypassAdLoad:(NSNumber *)arg1 ;
-(NSNumber *)skipRegistration;
-(void)setSkipRegistration:(NSNumber *)arg1 ;
-(NSNumber *)shouldClip;
-(void)setShouldClip:(NSNumber *)arg1 ;
-(NSNumber *)buttonBorderRadius;
-(void)setButtonBorderRadius:(NSNumber *)arg1 ;
-(NSNumber *)iconBorderRadius;
-(void)setIconBorderRadius:(NSNumber *)arg1 ;
-(UIColor *)adChoicesTitleColor;
-(void)setAdChoicesTitleColor:(UIColor *)arg1 ;
-(UIColor *)adChoicesBackgroundColor;
-(void)setAdChoicesBackgroundColor:(UIColor *)arg1 ;
-(BOOL)adChoicesIsHidden;
-(void)setAdChoicesIsHidden:(BOOL)arg1 ;
-(NSNumber *)ratingEnabled;
-(void)setRatingEnabled:(NSNumber *)arg1 ;
-(NSNumber *)socialContextEnabled;
-(void)setSocialContextEnabled:(NSNumber *)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)titleColor;
-(void)setTitleColor:(UIColor *)arg1 ;
-(UIFont *)titleFont;
-(void)setTitleFont:(UIFont *)arg1 ;
-(UIFont *)buttonTitleFont;
-(UIFont *)descriptionFont;
-(UIColor *)buttonColor;
-(NSNumber *)borderRadius;
-(void)setButtonColor:(UIColor *)arg1 ;
-(void)setButtonTitleColor:(UIColor *)arg1 ;
-(void)setDescriptionFont:(UIFont *)arg1 ;
-(void)setBorderRadius:(NSNumber *)arg1 ;
-(UIColor *)descriptionColor;
-(UIColor *)buttonTitleColor;
@end

