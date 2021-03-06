/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ALNativeAdVideoView, AVPlayerItem, AVAsset, NSURL, AVPlayer;

@interface ALNativeAdVideoPlayer : NSObject {

	ALNativeAdVideoView* _videoView;
	AVPlayerItem* _playerItem;
	AVAsset* _playerAsset;
	NSURL* _mediaSource;
	AVPlayer* _player;

}

@property (nonatomic,retain) ALNativeAdVideoView * videoView;              //@synthesize videoView=_videoView - In the implementation block
@property (nonatomic,retain) AVPlayerItem * playerItem;                    //@synthesize playerItem=_playerItem - In the implementation block
@property (nonatomic,retain) AVAsset * playerAsset;                        //@synthesize playerAsset=_playerAsset - In the implementation block
@property (nonatomic,retain) AVPlayer * player;                            //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) NSURL * mediaSource;                          //@synthesize mediaSource=_mediaSource - In the implementation block
-(AVAsset *)playerAsset;
-(void)setMediaSource:(NSURL *)arg1 ;
-(id)createVideoView;
-(NSURL *)mediaSource;
-(void)setPlayerAsset:(AVAsset *)arg1 ;
-(id)initWithMediaSource:(id)arg1 ;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(void)setVideoView:(ALNativeAdVideoView *)arg1 ;
-(ALNativeAdVideoView *)videoView;
-(AVPlayerItem *)playerItem;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(void)playVideo;
-(void)stopVideo;
@end

