/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <UIKitCore/UIView.h>
#import <MessagesExtension/FBNativeAdDelegate.h>
#import <MessagesExtension/FBNativeAdBaseView.h>
@class NSArray;


@protocol FBNativeAdBaseView <NSObject>
@property (nonatomic,copy,readonly) NSArray * allInteractableTargets; 
@required
-(NSArray *)allInteractableTargets;
-(void)populate:(id)arg1;

@end

#import <MessagesExtension/FBAdUpdatableView.h>

@class NSArray, UIViewController, FBNativeAdViewAttributes, UIButton, UILabel, FBAdIconView, FBAdOptionsView, UIView, NSHashTable, FBNativeAdBase, NSString;

@interface FBNativeAdBaseView : UIView <FBNativeAdDelegate, FBNativeAdBaseView, FBAdUpdatableView> {

	BOOL _loaded;
	UIViewController* _rootViewController;
	long long _type;
	FBNativeAdViewAttributes* _attributes;
	UIButton* _callToActionButton;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UILabel* _socialContextLabel;
	UILabel* _advertiserNameLabel;
	FBAdIconView* _iconView;
	FBAdOptionsView* _adOptionsView;
	UIView* _containerView;
	NSHashTable* _clickableViews;
	NSHashTable* _excludedClickableViews;

}

@property (nonatomic,readonly) FBNativeAdBase * nativeAdBase; 
@property (assign,nonatomic) long long type;                                            //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) FBNativeAdViewAttributes * attributes;                       //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic,__weak) UIButton * callToActionButton;                      //@synthesize callToActionButton=_callToActionButton - In the implementation block
@property (assign,nonatomic,__weak) UILabel * titleLabel;                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * descriptionLabel;                         //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * socialContextLabel;                       //@synthesize socialContextLabel=_socialContextLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * advertiserNameLabel;                      //@synthesize advertiserNameLabel=_advertiserNameLabel - In the implementation block
@property (assign,nonatomic,__weak) FBAdIconView * iconView;                            //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic,__weak) FBAdOptionsView * adOptionsView;                    //@synthesize adOptionsView=_adOptionsView - In the implementation block
@property (assign,nonatomic,__weak) UIView * containerView;                             //@synthesize containerView=_containerView - In the implementation block
@property (assign,getter=isLoaded,nonatomic) BOOL loaded;                               //@synthesize loaded=_loaded - In the implementation block
@property (nonatomic,retain) NSHashTable * clickableViews;                              //@synthesize clickableViews=_clickableViews - In the implementation block
@property (nonatomic,retain) NSHashTable * excludedClickableViews;                      //@synthesize excludedClickableViews=_excludedClickableViews - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * rootViewController;              //@synthesize rootViewController=_rootViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * allInteractableTargets; 
+(double)defaultDescriptionFontSize;
+(id)defaultAttributes;
+(id)defaultTextColor;
-(FBAdOptionsView *)adOptionsView;
-(void)setCallToActionButton:(UIButton *)arg1 ;
-(void)updateView:(BOOL)arg1 ;
-(FBNativeAdBase *)nativeAdBase;
-(void)setAdOptionsView:(FBAdOptionsView *)arg1 ;
-(NSHashTable *)clickableViews;
-(UILabel *)socialContextLabel;
-(void)setSocialContextLabel:(UILabel *)arg1 ;
-(void)setClickableViews:(NSHashTable *)arg1 ;
-(NSArray *)allInteractableTargets;
-(void)registerView;
-(void)constructCallToActionButton;
-(void)constructIconView;
-(void)constructBodyView;
-(void)updateClickableViews;
-(void)constructView;
-(void)resetViews;
-(UILabel *)advertiserNameLabel;
-(void)setAdvertiserNameLabel:(UILabel *)arg1 ;
-(NSHashTable *)excludedClickableViews;
-(void)setExcludedClickableViews:(NSHashTable *)arg1 ;
-(id)init;
-(void)dealloc;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(FBNativeAdViewAttributes *)attributes;
-(BOOL)isLoaded;
-(BOOL)implementsSelector:(SEL)arg1 ;
-(void)setAttributes:(FBNativeAdViewAttributes *)arg1 ;
-(void)reset;
-(CGRect)bounds;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(void)setRootViewController:(UIViewController *)arg1 ;
-(UIViewController *)rootViewController;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(UILabel *)descriptionLabel;
-(FBAdIconView *)iconView;
-(void)setIconView:(FBAdIconView *)arg1 ;
-(void)initializeView;
-(id)fixedHeight;
-(void)setLoaded:(BOOL)arg1 ;
-(void)updateAttributes:(id)arg1 ;
-(UIButton *)callToActionButton;
-(void)populate:(id)arg1 ;
@end
