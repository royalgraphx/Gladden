/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPInterstitialAdapterDelegate;
@class MPAdConfiguration, MPTimer;

@interface MPBaseInterstitialAdapter : NSObject {

	id<MPInterstitialAdapterDelegate> _delegate;
	MPAdConfiguration* _configuration;
	MPTimer* _timeoutTimer;

}

@property (nonatomic,retain) MPAdConfiguration * configuration;                              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) MPTimer * timeoutTimer;                                         //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
@property (assign,nonatomic,__weak) id<MPInterstitialAdapterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)trackImpression;
-(void)trackClick;
-(void)didStopLoading;
-(void)showInterstitialFromViewController:(id)arg1 ;
-(void)_getAdWithConfiguration:(id)arg1 targeting:(id)arg2 ;
-(void)getAdWithConfiguration:(id)arg1 targeting:(id)arg2 ;
-(void)dealloc;
-(id<MPInterstitialAdapterDelegate>)delegate;
-(void)setDelegate:(id<MPInterstitialAdapterDelegate>)arg1 ;
-(void)timeout;
-(void)setConfiguration:(MPAdConfiguration *)arg1 ;
-(MPAdConfiguration *)configuration;
-(id)initWithDelegate:(id)arg1 ;
-(void)setTimeoutTimer:(MPTimer *)arg1 ;
-(MPTimer *)timeoutTimer;
-(void)startTimeoutTimer;
-(void)unregisterDelegate;
@end

