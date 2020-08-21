/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVPlayer, AVPlayerLayer, UIView;

@interface IMMoatVideoAssets : NSObject {

	AVPlayer* _videoPlayer;
	AVPlayerLayer* _videoPlayerLayer;
	UIView* _videoPlayerView;
	double _duration;

}

@property (assign) double duration;                                           //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) AVPlayer * videoPlayer;                        //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (nonatomic,readonly) AVPlayerLayer * videoPlayerLayer;              //@synthesize videoPlayerLayer=_videoPlayerLayer - In the implementation block
@property (nonatomic,readonly) UIView * videoPlayerView;                      //@synthesize videoPlayerView=_videoPlayerView - In the implementation block
-(id)initWithPlayer:(id)arg1 playerLayer:(id)arg2 playerContainerView:(id)arg3 withDuration:(double)arg4 ;
-(AVPlayerLayer *)videoPlayerLayer;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(double)videoDuration;
-(AVPlayer *)videoPlayer;
-(UIView *)videoPlayerView;
@end
