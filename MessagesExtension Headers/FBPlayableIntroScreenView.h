/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIImageView, FBAdLabel, FBNativeAdDataModel;

@interface FBPlayableIntroScreenView : UIView {

	UIView* _adDetailsView;
	UIView* _gameplayView;
	UIImageView* _gameplayIconView;
	FBAdLabel* _gameplayTextView;
	UIImageView* _iconView;
	FBNativeAdDataModel* _nativeAdDataModel;
	FBAdLabel* _subtitleView;
	FBAdLabel* _titleView;

}

@property (assign,nonatomic,__weak) UIView * adDetailsView;                        //@synthesize adDetailsView=_adDetailsView - In the implementation block
@property (assign,nonatomic,__weak) UIView * gameplayView;                         //@synthesize gameplayView=_gameplayView - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * gameplayIconView;                //@synthesize gameplayIconView=_gameplayIconView - In the implementation block
@property (assign,nonatomic,__weak) FBAdLabel * gameplayTextView;                  //@synthesize gameplayTextView=_gameplayTextView - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * iconView;                        //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) FBNativeAdDataModel * nativeAdDataModel;              //@synthesize nativeAdDataModel=_nativeAdDataModel - In the implementation block
@property (assign,nonatomic,__weak) FBAdLabel * subtitleView;                      //@synthesize subtitleView=_subtitleView - In the implementation block
@property (assign,nonatomic,__weak) FBAdLabel * titleView;                         //@synthesize titleView=_titleView - In the implementation block
-(UIView *)adDetailsView;
-(void)setAdDetailsView:(UIView *)arg1 ;
-(void)setFrameOnShow:(CGRect)arg1 ;
-(FBNativeAdDataModel *)nativeAdDataModel;
-(void)setupAdDetailsView;
-(void)setupIconView;
-(void)setupSubtitleView;
-(void)setupGameplayView;
-(void)setupGameplayIconView;
-(void)setupGameplayTextView;
-(void)setNativeAdDataModel:(FBNativeAdDataModel *)arg1 ;
-(void)initView;
-(UIView *)gameplayView;
-(void)setGameplayView:(UIView *)arg1 ;
-(UIImageView *)gameplayIconView;
-(void)setGameplayIconView:(UIImageView *)arg1 ;
-(FBAdLabel *)gameplayTextView;
-(void)setGameplayTextView:(FBAdLabel *)arg1 ;
-(void)layoutSubviews;
-(FBAdLabel *)titleView;
-(void)setTitleView:(FBAdLabel *)arg1 ;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(FBAdLabel *)subtitleView;
-(void)setupTitleView;
-(void)setSubtitleView:(FBAdLabel *)arg1 ;
-(id)initWithAdData:(id)arg1 ;
@end
