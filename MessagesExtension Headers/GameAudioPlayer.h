/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVAudioPlayer;

@interface GameAudioPlayer : NSObject {

	BOOL _playing;
	float _volume;
	AVAudioPlayer* _player;

}

@property (assign) float volume;                        //@synthesize volume=_volume - In the implementation block
@property (assign) BOOL playing;                        //@synthesize playing=_playing - In the implementation block
@property (retain) AVAudioPlayer * player;              //@synthesize player=_player - In the implementation block
-(BOOL)playing;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(void)setPlaying:(BOOL)arg1 ;
-(AVAudioPlayer *)player;
-(void)setPlayer:(AVAudioPlayer *)arg1 ;
@end
