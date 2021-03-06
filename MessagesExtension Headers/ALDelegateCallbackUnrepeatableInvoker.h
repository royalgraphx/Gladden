/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:18 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ALSdk, ALBaseVideoViewController, ALAtomicBoolean;

@interface ALDelegateCallbackUnrepeatableInvoker : NSObject {

	ALSdk* _sdk;
	ALBaseVideoViewController* _parentViewController;
	ALAtomicBoolean* _adDisplayedFired;
	ALAtomicBoolean* _adHiddenFired;
	ALAtomicBoolean* _videoPlaybackBeganFired;
	ALAtomicBoolean* _videoPlaybackEndedFired;

}

@property (assign,nonatomic,__weak) ALSdk * sdk;                                                   //@synthesize sdk=_sdk - In the implementation block
@property (assign,nonatomic,__weak) ALBaseVideoViewController * parentViewController;              //@synthesize parentViewController=_parentViewController - In the implementation block
@property (__weak) id<ALAdDisplayDelegate> adDisplayDelegate; 
@property (retain) ALAtomicBoolean * adDisplayedFired;                                             //@synthesize adDisplayedFired=_adDisplayedFired - In the implementation block
@property (retain) ALAtomicBoolean * adHiddenFired;                                                //@synthesize adHiddenFired=_adHiddenFired - In the implementation block
@property (__weak) id<ALAdVideoPlaybackDelegate> adVideoPlaybackDelegate; 
@property (retain) ALAtomicBoolean * videoPlaybackBeganFired;                                      //@synthesize videoPlaybackBeganFired=_videoPlaybackBeganFired - In the implementation block
@property (retain) ALAtomicBoolean * videoPlaybackEndedFired;                                      //@synthesize videoPlaybackEndedFired=_videoPlaybackEndedFired - In the implementation block
-(void)setSdk:(ALSdk *)arg1 ;
-(void)setAdDisplayedFired:(ALAtomicBoolean *)arg1 ;
-(void)setAdHiddenFired:(ALAtomicBoolean *)arg1 ;
-(void)setVideoPlaybackBeganFired:(ALAtomicBoolean *)arg1 ;
-(void)setVideoPlaybackEndedFired:(ALAtomicBoolean *)arg1 ;
-(ALAtomicBoolean *)adDisplayedFired;
-(id<ALAdDisplayDelegate>)adDisplayDelegate;
-(ALSdk *)sdk;
-(ALAtomicBoolean *)adHiddenFired;
-(ALAtomicBoolean *)videoPlaybackBeganFired;
-(id<ALAdVideoPlaybackDelegate>)adVideoPlaybackDelegate;
-(ALAtomicBoolean *)videoPlaybackEndedFired;
-(id)initWithParentVideoViewController:(id)arg1 sdk:(id)arg2 ;
-(void)handleAd:(id)arg1 wasDisplayedIn:(id)arg2 ;
-(void)handleAd:(id)arg1 wasHiddenIn:(id)arg2 ;
-(void)handleAd:(id)arg1 wasClickedIn:(id)arg2 ;
-(void)handleVideoPlaybackBeganInAd:(id)arg1 ;
-(void)handleVideoPlaybackEndedInAd:(id)arg1 atPlaybackPercent:(id)arg2 fullyWatched:(BOOL)arg3 ;
-(ALBaseVideoViewController *)parentViewController;
-(void)setParentViewController:(ALBaseVideoViewController *)arg1 ;
@end

