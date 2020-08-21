/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/IMAVPlayerDelegate.h>

@protocol IMMediaManagerDelegate;
@class IMAVPlayer, IMRenderView;

@interface IMMediaManager : NSObject <IMAVPlayerDelegate> {

	id<IMMediaManagerDelegate> _delegate;
	IMAVPlayer* _imavPlayer;
	IMRenderView* _renderView;

}

@property (nonatomic,retain) IMAVPlayer * imavPlayer;                                 //@synthesize imavPlayer=_imavPlayer - In the implementation block
@property (assign,nonatomic,__weak) IMRenderView * renderView;                        //@synthesize renderView=_renderView - In the implementation block
@property (assign,nonatomic,__weak) id<IMMediaManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)closeAllMedia;
-(void)playVideoWithParams:(id)arg1 inRenderView:(id)arg2 withScheme:(id)arg3 ;
-(id)avVideoView;
-(void)setImavPlayer:(IMAVPlayer *)arg1 ;
-(IMAVPlayer *)imavPlayer;
-(void)dealloc;
-(id<IMMediaManagerDelegate>)delegate;
-(void)setDelegate:(id<IMMediaManagerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(IMRenderView *)renderView;
-(void)setRenderView:(IMRenderView *)arg1 ;
-(void)playVideo:(id)arg1 ;
@end

