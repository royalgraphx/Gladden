/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <MessagesExtension/ALAdViewForegroundClickTrackingProtocol.h>

@class ALClickTrackingOverlayView, ALSdk, AVPlayer, AVPlayerLayer, NSString;

@interface ALVideoView : UIView <ALAdViewForegroundClickTrackingProtocol> {

	BOOL _foregroundClickInvalidated;
	ALClickTrackingOverlayView* _trackingOverlay;
	ALSdk* _sdk;

}

@property (nonatomic,retain) ALSdk * sdk;                                               //@synthesize sdk=_sdk - In the implementation block
@property (nonatomic,retain) AVPlayer * player; 
@property (nonatomic,readonly) AVPlayerLayer * playerLayer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) BOOL foregroundClickInvalidated;                                     //@synthesize foregroundClickInvalidated=_foregroundClickInvalidated - In the implementation block
@property (nonatomic,retain) ALClickTrackingOverlayView * trackingOverlay;              //@synthesize trackingOverlay=_trackingOverlay - In the implementation block
+(Class)layerClass;
-(void)setSdk:(ALSdk *)arg1 ;
-(ALSdk *)sdk;
-(void)removeClickTrackingOverlay;
-(void)showClickTrackingOverlay;
-(BOOL)foregroundClickInvalidated;
-(ALClickTrackingOverlayView *)trackingOverlay;
-(void)setTrackingOverlay:(ALClickTrackingOverlayView *)arg1 ;
-(double)overlayFadeTime;
-(void)setForegroundClickInvalidated:(BOOL)arg1 ;
-(id)initWithSdk:(id)arg1 player:(id)arg2 ;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(AVPlayerLayer *)playerLayer;
@end
