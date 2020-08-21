/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, FBAdLabel;

@interface FBAdDetailsVerticalView : UIView {

	UIImageView* _iconView;
	FBAdLabel* _subtitleLabel;
	FBAdLabel* _titleLabel;
	unsigned long long _iconStyle;

}

@property (assign,nonatomic,__weak) UIImageView * iconView;                 //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic,__weak) FBAdLabel * subtitleLabel;              //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (assign,nonatomic,__weak) FBAdLabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) unsigned long long iconStyle;                  //@synthesize iconStyle=_iconStyle - In the implementation block
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 iconURL:(id)arg3 iconStyle:(unsigned long long)arg4 ;
-(void)setupSubtitleViewWithText:(id)arg1 fontSize:(double)arg2 ;
-(void)setupTitleViewWithText:(id)arg1 fontSize:(double)arg2 ;
-(void)setupIconViewWithIconUrl:(id)arg1 ;
-(id)init;
-(FBAdLabel *)titleLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setTitleLabel:(FBAdLabel *)arg1 ;
-(void)setSubtitleLabel:(FBAdLabel *)arg1 ;
-(FBAdLabel *)subtitleLabel;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(void)setIconStyle:(unsigned long long)arg1 ;
-(unsigned long long)iconStyle;
@end
