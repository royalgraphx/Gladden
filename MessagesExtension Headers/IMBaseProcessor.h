/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMRichMediaDelegate;
@class IMRenderView;

@interface IMBaseProcessor : NSObject {

	id<IMRichMediaDelegate> _delegate;
	IMRenderView* _renderView;

}

@property (assign,nonatomic,__weak) id<IMRichMediaDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) IMRenderView * renderView;                     //@synthesize renderView=_renderView - In the implementation block
-(void)executeJavascript:(id)arg1 ;
-(void)sendCallbackForRichMediaAdIncentActionComplete:(id)arg1 ;
-(void)sendCallbackForRichMediaAdDidPerformUserInteraction:(id)arg1 ;
-(id)initWithRenderView:(id)arg1 ;
-(void)sendCallbackForRichMediaAdWillPresentScreen;
-(void)sendCallbackForRichMediaAdDidPresentScreen;
-(void)sendCallbackForRichMediaAdWillLeaveApplication;
-(void)sendCallbackForRichMediaAdWillDismissScreen;
-(void)sendCallbackForRichMediaAdDidDismissScreen;
-(void)showAlertWithMessage:(id)arg1 ;
-(id<IMRichMediaDelegate>)delegate;
-(void)setDelegate:(id<IMRichMediaDelegate>)arg1 ;
-(IMRenderView *)renderView;
-(void)setRenderView:(IMRenderView *)arg1 ;
@end

