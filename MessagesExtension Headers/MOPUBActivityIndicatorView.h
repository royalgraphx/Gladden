/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <UIKitCore/UIView.h>

@class UIActivityIndicatorView, UIView;

@interface MOPUBActivityIndicatorView : UIView {

	UIActivityIndicatorView* _activityIndicator;
	UIView* _bgView;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) UIView * bgView;                                          //@synthesize bgView=_bgView - In the implementation block
-(UIView *)bgView;
-(void)setBgView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isAnimating;
-(void)startAnimating;
-(void)stopAnimating;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
@end

