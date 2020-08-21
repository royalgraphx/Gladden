/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <MessagesExtension/ALInterstitialControlProxy.h>

@protocol ALAdLoadDelegate, ALAdDisplayDelegate, ALAdVideoPlaybackDelegate, ALInterstitialControlProxy;
@class ALSdk, ALLogManager, ALAdDelegateCollection, NSString;

@interface ALInterstitialAd : NSObject <ALInterstitialControlProxy> {

	BOOL _hidden;
	id<ALAdLoadDelegate> _adLoadDelegate;
	id<ALAdDisplayDelegate> _adDisplayDelegate;
	id<ALAdVideoPlaybackDelegate> _adVideoPlaybackDelegate;
	ALSdk* _sdk;
	ALLogManager* _logger;
	id<ALInterstitialControlProxy> _currentInterstitialController;
	ALAdDelegateCollection* _delegatesForMediation;
	CGRect _frame;

}

@property (nonatomic,retain) ALSdk * sdk;                                                        //@synthesize sdk=_sdk - In the implementation block
@property (assign,nonatomic,__weak) ALLogManager * logger;                                       //@synthesize logger=_logger - In the implementation block
@property (retain) id<ALInterstitialControlProxy> currentInterstitialController;                 //@synthesize currentInterstitialController=_currentInterstitialController - In the implementation block
@property (nonatomic,retain) ALAdDelegateCollection * delegatesForMediation;                     //@synthesize delegatesForMediation=_delegatesForMediation - In the implementation block
@property (nonatomic,retain) id<ALAdLoadDelegate> adLoadDelegate;                                //@synthesize adLoadDelegate=_adLoadDelegate - In the implementation block
@property (nonatomic,retain) id<ALAdDisplayDelegate> adDisplayDelegate;                          //@synthesize adDisplayDelegate=_adDisplayDelegate - In the implementation block
@property (nonatomic,retain) id<ALAdVideoPlaybackDelegate> adVideoPlaybackDelegate;              //@synthesize adVideoPlaybackDelegate=_adVideoPlaybackDelegate - In the implementation block
@property (assign,nonatomic) CGRect frame;                                                       //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) BOOL hidden;                                                        //@synthesize hidden=_hidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) BOOL dismissesOnClick; 
+(id)showOverPlacement:(id)arg1 ;
+(id)showOver:(id)arg1 ;
+(id)showOver:(id)arg1 placement:(id)arg2 ;
+(id)show;
+(id)shared;
+(BOOL)isReadyForDisplay;
-(void)setSdk:(ALSdk *)arg1 ;
-(id<ALAdDisplayDelegate>)adDisplayDelegate;
-(ALSdk *)sdk;
-(id<ALAdVideoPlaybackDelegate>)adVideoPlaybackDelegate;
-(id)initWithSdk:(id)arg1 ;
-(void)setAdDisplayDelegate:(id<ALAdDisplayDelegate>)arg1 ;
-(void)setAdVideoPlaybackDelegate:(id<ALAdVideoPlaybackDelegate>)arg1 ;
-(id<ALAdLoadDelegate>)adLoadDelegate;
-(void)setAdLoadDelegate:(id<ALAdLoadDelegate>)arg1 ;
-(void)setDelegatesForMediation:(ALAdDelegateCollection *)arg1 ;
-(void)showOver:(id)arg1 placement:(id)arg2 andRender:(id)arg3 ;
-(void)showOverPlacement:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 sdk:(id)arg2 ;
-(void)showOver:(id)arg1 ;
-(void)showOver:(id)arg1 placement:(id)arg2 ;
-(void)failShow:(id)arg1 window:(id)arg2 ;
-(void)showInterstitialInViewController:(id)arg1 overWindow:(id)arg2 withPlacement:(id)arg3 ;
-(id<ALInterstitialControlProxy>)currentInterstitialController;
-(void)setCurrentInterstitialController:(id<ALInterstitialControlProxy>)arg1 ;
-(ALAdDelegateCollection *)delegatesForMediation;
-(id)initInterstitialAdWithSdk:(id)arg1 ;
-(void)showOver:(id)arg1 andRender:(id)arg2 ;
-(ALLogManager *)logger;
-(CGRect)frame;
-(void)setHidden:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)show;
-(void)dismiss;
-(BOOL)hidden;
-(void)setLogger:(ALLogManager *)arg1 ;
-(BOOL)isReadyForDisplay;
-(void)dismissWithCompletionHandler:(/*^block*/id)arg1 ;
@end

