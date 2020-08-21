/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OMIDAdcolonyAdSession, OMIDAdcolonyMediaEvents;

@interface OMIDAdcolonyVideoEvents : NSObject {

	OMIDAdcolonyAdSession* _adSession;
	double _playerVolume;
	BOOL _observerIsRegistered;
	OMIDAdcolonyMediaEvents* _mediaEvents;

}
-(id)initWithAdSession:(id)arg1 error:(id*)arg2 ;
-(void)playerStateChangeTo:(unsigned long long)arg1 ;
-(void)loadedWithVastProperties:(id)arg1 ;
-(void)startWithDuration:(double)arg1 videoPlayerVolume:(double)arg2 ;
-(void)firstQuartile;
-(void)thirdQuartile;
-(void)volumeChangeTo:(double)arg1 ;
-(void)adUserInteractionWithType:(unsigned long long)arg1 ;
-(void)bufferStart;
-(void)bufferFinish;
-(void)pause;
-(void)resume;
-(void)complete;
-(void)midpoint;
-(void)skipped;
@end

