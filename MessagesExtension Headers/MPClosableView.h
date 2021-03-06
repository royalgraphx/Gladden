/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MPClosableViewDelegate;
@class UIButton, UIImage, MPUserInteractionGestureRecognizer, NSString;

@interface MPClosableView : UIView <UIGestureRecognizerDelegate> {

	BOOL _wasTapped;
	id<MPClosableViewDelegate> _delegate;
	long long _closeButtonType;
	long long _closeButtonLocation;
	UIButton* _closeButton;
	UIImage* _closeButtonImage;
	MPUserInteractionGestureRecognizer* _userInteractionRecognizer;

}

@property (nonatomic,retain) UIButton * closeButton;                                                      //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) UIImage * closeButtonImage;                                                  //@synthesize closeButtonImage=_closeButtonImage - In the implementation block
@property (nonatomic,retain) MPUserInteractionGestureRecognizer * userInteractionRecognizer;              //@synthesize userInteractionRecognizer=_userInteractionRecognizer - In the implementation block
@property (assign,nonatomic) BOOL wasTapped;                                                              //@synthesize wasTapped=_wasTapped - In the implementation block
@property (assign,nonatomic,__weak) id<MPClosableViewDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long closeButtonType;                                                   //@synthesize closeButtonType=_closeButtonType - In the implementation block
@property (assign,nonatomic) long long closeButtonLocation;                                               //@synthesize closeButtonLocation=_closeButtonLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleInteraction:(id)arg1 ;
-(void)setUserInteractionRecognizer:(MPUserInteractionGestureRecognizer *)arg1 ;
-(MPUserInteractionGestureRecognizer *)userInteractionRecognizer;
-(void)setCloseButtonType:(long long)arg1 ;
-(long long)closeButtonLocation;
-(id)initWithFrame:(CGRect)arg1 contentView:(id)arg2 delegate:(id)arg3 ;
-(void)setCloseButtonLocation:(long long)arg1 ;
-(long long)closeButtonType;
-(void)dealloc;
-(id<MPClosableViewDelegate>)delegate;
-(void)setDelegate:(id<MPClosableViewDelegate>)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(UIButton *)closeButton;
-(void)setCloseButton:(UIButton *)arg1 ;
-(void)closeButtonPressed;
-(void)setWasTapped:(BOOL)arg1 ;
-(BOOL)wasTapped;
-(UIImage *)closeButtonImage;
-(void)setCloseButtonImage:(UIImage *)arg1 ;
@end

