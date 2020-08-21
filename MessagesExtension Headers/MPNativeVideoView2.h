/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIImageView, UIView;

@interface MPNativeVideoView2 : UIView {

	UILabel* _titleLabel;
	UILabel* _mainTextLabel;
	UIImageView* _iconImageView;
	UIImageView* _mainImageView;
	UIView* _videoView;
	UIImageView* _privacyInformationIconImageView;
	UILabel* _ctaLabel;
	UILabel* _sponsored;

}

@property (nonatomic,retain) UILabel * titleLabel;                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * mainTextLabel;                                    //@synthesize mainTextLabel=_mainTextLabel - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;                                //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UIImageView * mainImageView;                                //@synthesize mainImageView=_mainImageView - In the implementation block
@property (nonatomic,retain) UIView * videoView;                                         //@synthesize videoView=_videoView - In the implementation block
@property (nonatomic,retain) UIImageView * privacyInformationIconImageView;              //@synthesize privacyInformationIconImageView=_privacyInformationIconImageView - In the implementation block
@property (nonatomic,retain) UILabel * ctaLabel;                                         //@synthesize ctaLabel=_ctaLabel - In the implementation block
@property (nonatomic,retain) UILabel * sponsored;                                        //@synthesize sponsored=_sponsored - In the implementation block
-(UILabel *)sponsored;
-(void)setCtaLabel:(UILabel *)arg1 ;
-(UILabel *)ctaLabel;
-(void)setPrivacyInformationIconImageView:(UIImageView *)arg1 ;
-(UIImageView *)privacyInformationIconImageView;
-(id)nativeMainTextLabel;
-(id)nativeTitleTextLabel;
-(id)nativeIconImageView;
-(id)nativeMainImageView;
-(id)nativeVideoView;
-(id)nativeCallToActionTextLabel;
-(id)nativePrivacyInformationIconImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)layoutSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(void)setVideoView:(UIView *)arg1 ;
-(UIView *)videoView;
-(void)setSponsored:(UILabel *)arg1 ;
-(UILabel *)mainTextLabel;
-(void)setMainTextLabel:(UILabel *)arg1 ;
-(UIImageView *)mainImageView;
-(void)setMainImageView:(UIImageView *)arg1 ;
@end
