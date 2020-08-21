/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <UIKitCore/UIWindow.h>

@protocol ADCWindowClickThroughDelegate;
@class NSString, NSNumber, NSMutableArray;

@interface ADCWindow : UIWindow {

	BOOL _closing;
	/*^block*/id _showCompletion;
	/*^block*/id _hideCompletion;
	NSString* _sessionId;
	id<ADCWindowClickThroughDelegate> _clickThroughDelegate;
	NSNumber* _windowIdent;
	NSString* _innerControllerClassName;
	/*^block*/id _closeCallback;
	/*^block*/id _cancelOrientationListener;
	NSMutableArray* _onClose;

}

@property (nonatomic,copy) id closeCallback;                                                             //@synthesize closeCallback=_closeCallback - In the implementation block
@property (nonatomic,copy) id cancelOrientationListener;                                                 //@synthesize cancelOrientationListener=_cancelOrientationListener - In the implementation block
@property (assign,nonatomic) BOOL closing;                                                               //@synthesize closing=_closing - In the implementation block
@property (nonatomic,retain) NSMutableArray * onClose;                                                   //@synthesize onClose=_onClose - In the implementation block
@property (nonatomic,retain) NSString * sessionId;                                                       //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,copy) id showCompletion;                                                            //@synthesize showCompletion=_showCompletion - In the implementation block
@property (nonatomic,copy) id hideCompletion;                                                            //@synthesize hideCompletion=_hideCompletion - In the implementation block
@property (assign,nonatomic,__weak) id<ADCWindowClickThroughDelegate> clickThroughDelegate;              //@synthesize clickThroughDelegate=_clickThroughDelegate - In the implementation block
@property (nonatomic,retain) NSNumber * windowIdent;                                                     //@synthesize windowIdent=_windowIdent - In the implementation block
@property (nonatomic,retain) NSString * innerControllerClassName;                                        //@synthesize innerControllerClassName=_innerControllerClassName - In the implementation block
-(id)initWithFrame:(CGRect)arg1 andSessionId:(id)arg2 ;
-(void)setWindowIdent:(NSNumber *)arg1 ;
-(void)setHideCompletion:(id)arg1 ;
-(void)close:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setShowCompletion:(id)arg1 ;
-(void)showWithController:(id)arg1 animated:(BOOL)arg2 ;
-(id<ADCWindowClickThroughDelegate>)clickThroughDelegate;
-(void)setInnerControllerClassName:(NSString *)arg1 ;
-(void)setClickThroughDelegate:(id<ADCWindowClickThroughDelegate>)arg1 ;
-(void)setCancelOrientationListener:(id)arg1 ;
-(id)hideCompletion;
-(id)showCompletion;
-(void)closeSubcontroller:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(NSNumber *)windowIdent;
-(NSString *)innerControllerClassName;
-(id)closeCallback;
-(void)setCloseCallback:(id)arg1 ;
-(id)cancelOrientationListener;
-(void)dealloc;
-(void)cleanup;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(BOOL)closing;
-(NSMutableArray *)onClose;
-(void)setOnClose:(NSMutableArray *)arg1 ;
-(void)setClosing:(BOOL)arg1 ;
@end

