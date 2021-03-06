/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class ALAdSize, NSString;


@protocol ALAdViewProtocol
@property (retain) id<ALAdLoadDelegate> adLoadDelegate; 
@property (retain) id<ALAdDisplayDelegate> adDisplayDelegate; 
@property (retain) id<ALAdViewEventDelegate> adEventDelegate; 
@property (retain) id<ALAdVideoPlaybackDelegate> adVideoPlaybackDelegate; 
@property (retain) ALAdSize * adSize; 
@property (nonatomic,copy,readonly) NSString * zoneIdentifier; 
@property (setter=setAutoloadEnabled:,getter=isAutoloadEnabled) BOOL autoload; 
@property (setter=setAutoloadEnabled:,getter=isAutoloadEnabled) BOOL shouldAutoload; 
@required
-(id<ALAdDisplayDelegate>)adDisplayDelegate;
-(id<ALAdVideoPlaybackDelegate>)adVideoPlaybackDelegate;
-(void)setAdDisplayDelegate:(id)arg1;
-(void)setAdVideoPlaybackDelegate:(id)arg1;
-(id<ALAdLoadDelegate>)adLoadDelegate;
-(void)setAdLoadDelegate:(id)arg1;
-(id<ALAdViewEventDelegate>)adEventDelegate;
-(id)initWithSize:(id)arg1 zoneIdentifier:(id)arg2;
-(void)setAdSize:(id)arg1;
-(void)setAdEventDelegate:(id)arg1;
-(ALAdSize *)adSize;
-(void)loadNextAd;
-(id)initWithSdk:(id)arg1 size:(id)arg2;
-(id)initWithFrame:(CGRect)arg1 size:(id)arg2 sdk:(id)arg3;
-(BOOL)isAutoloadEnabled;
-(void)setAutoloadEnabled:(BOOL)arg1;
-(id)init;
-(void)render:(id)arg1;
-(id)initWithSize:(id)arg1;
-(NSString *)zoneIdentifier;

@end

