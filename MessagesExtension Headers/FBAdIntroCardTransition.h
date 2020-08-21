/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class FBAdIntroScreenView, UIVisualEffectView, NSString;

@interface FBAdIntroCardTransition : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _showIntroCardTransition;
	FBAdIntroScreenView* _introScreenView;
	UIVisualEffectView* _blurEffectView;
	NSString* _token;
	NSString* _requestId;

}

@property (nonatomic,retain) FBAdIntroScreenView * introScreenView;              //@synthesize introScreenView=_introScreenView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * blurEffectView;                //@synthesize blurEffectView=_blurEffectView - In the implementation block
@property (assign,nonatomic) BOOL showIntroCardTransition;                       //@synthesize showIntroCardTransition=_showIntroCardTransition - In the implementation block
@property (nonatomic,copy) NSString * token;                                     //@synthesize token=_token - In the implementation block
@property (nonatomic,copy) NSString * requestId;                                 //@synthesize requestId=_requestId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)funnel;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 iconURL:(id)arg3 iconStyle:(unsigned long long)arg4 shouldShowIntroCardTransition:(BOOL)arg5 token:(id)arg6 requestId:(id)arg7 ;
-(void)blurInitialViewFromView:(id)arg1 toView:(id)arg2 toViewController:(id)arg3 transitionContext:(id)arg4 ;
-(void)introCardScaleUpFromView:(id)arg1 toView:(id)arg2 toViewController:(id)arg3 transitionContext:(id)arg4 ;
-(void)introCardScaleDownFromView:(id)arg1 toView:(id)arg2 introScreenView:(id)arg3 toViewController:(id)arg4 transitionContext:(id)arg5 ;
-(void)fadeInFinalViewFromView:(id)arg1 toView:(id)arg2 introScreenView:(id)arg3 toViewController:(id)arg4 transitionContext:(id)arg5 ;
-(FBAdIntroScreenView *)introScreenView;
-(void)setIntroScreenView:(FBAdIntroScreenView *)arg1 ;
-(BOOL)showIntroCardTransition;
-(void)setShowIntroCardTransition:(BOOL)arg1 ;
-(NSString *)token;
-(NSString *)requestId;
-(void)setToken:(NSString *)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)setBlurEffectView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)blurEffectView;
-(void)setRequestId:(NSString *)arg1 ;
@end

