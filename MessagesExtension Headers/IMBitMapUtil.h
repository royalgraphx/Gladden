/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIView, UIColor, NSNumber;

@interface IMBitMapUtil : NSObject {

	UIView* _focusedView;
	UIColor* _viewBgColor;
	NSNumber* _resultNum;
	NSNumber* _shouldContinue;
	double _timeout;

}

@property (assign,nonatomic,__weak) UIView * focusedView;              //@synthesize focusedView=_focusedView - In the implementation block
@property (nonatomic,retain) UIColor * viewBgColor;                    //@synthesize viewBgColor=_viewBgColor - In the implementation block
@property (nonatomic,retain) NSNumber * resultNum;                     //@synthesize resultNum=_resultNum - In the implementation block
@property (nonatomic,retain) NSNumber * shouldContinue;                //@synthesize shouldContinue=_shouldContinue - In the implementation block
@property (assign,nonatomic) double timeout;                           //@synthesize timeout=_timeout - In the implementation block
-(void)setViewBgColor:(UIColor *)arg1 ;
-(void)setResultNum:(NSNumber *)arg1 ;
-(UIColor *)viewBgColor;
-(NSNumber *)resultNum;
-(void)scanImage;
-(void)setShouldContinue:(NSNumber *)arg1 ;
-(id)initWithView:(id)arg1 andTimeout:(double)arg2 ;
-(void)runBitMapCheckWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)stopCheck;
-(void)dealloc;
-(NSNumber *)shouldContinue;
-(double)timeout;
-(void)setTimeout:(double)arg1 ;
-(UIView *)focusedView;
-(void)setFocusedView:(UIView *)arg1 ;
@end

