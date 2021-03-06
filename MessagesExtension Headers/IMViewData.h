/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMViewabilityDelegate;
#import <MessagesExtension/MessagesExtension-Structs.h>
@class UIView, UIWindow;

@interface IMViewData : NSObject {

	BOOL _hidden;
	UIView* _view;
	id<IMViewabilityDelegate> _delegate;
	double _startTrackingTS;
	double _processingStartTS;
	UIWindow* _window;
	long long _state;
	CGRect _frame;
	CGRect _windowBounds;
	CGRect _absoluteRect;

}

@property (assign,nonatomic,__weak) UIView * view;                                   //@synthesize view=_view - In the implementation block
@property (assign,nonatomic,__weak) id<IMViewabilityDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double startTrackingTS;                                 //@synthesize startTrackingTS=_startTrackingTS - In the implementation block
@property (assign,nonatomic) double processingStartTS;                               //@synthesize processingStartTS=_processingStartTS - In the implementation block
@property (assign,nonatomic,__weak) UIWindow * window;                               //@synthesize window=_window - In the implementation block
@property (assign,nonatomic) CGRect frame;                                           //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) BOOL hidden;                                            //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) CGRect windowBounds;                                    //@synthesize windowBounds=_windowBounds - In the implementation block
@property (assign,nonatomic) long long state;                                        //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) CGRect absoluteRect;                                    //@synthesize absoluteRect=_absoluteRect - In the implementation block
-(double)startTrackingTS;
-(void)setStartTrackingTS:(double)arg1 ;
-(double)processingStartTS;
-(void)setProcessingStartTS:(double)arg1 ;
-(CGRect)windowBounds;
-(void)setWindowBounds:(CGRect)arg1 ;
-(CGRect)absoluteRect;
-(void)setAbsoluteRect:(CGRect)arg1 ;
-(id<IMViewabilityDelegate>)delegate;
-(void)setDelegate:(id<IMViewabilityDelegate>)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(CGRect)frame;
-(UIView *)view;
-(void)setHidden:(BOOL)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(UIWindow *)window;
-(void)setWindow:(UIWindow *)arg1 ;
-(BOOL)hidden;
@end

