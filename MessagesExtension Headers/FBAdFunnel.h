/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol FBAdFunnel <NSObject>
@property (nonatomic,copy,readonly) NSString * funnelId; 
@property (nonatomic,copy,readonly) NSString * adFormat; 
@property (nonatomic,copy,readonly) NSString * requestId; 
@property (nonatomic,copy) NSString * adViewType; 
@required
-(void)updateRequestId:(id)arg1;
-(void)updateAdViewType:(id)arg1;
-(void)adLoadRequested;
-(void)adLoadFromBidRequested;
-(void)adLoadFinished;
-(void)adLoadFailure:(id)arg1;
-(void)adDelegateSet;
-(void)adShowRequested;
-(void)adShowFinished:(BOOL)arg1;
-(void)adPresentationError:(id)arg1;
-(void)adPresentationRecovered;
-(void)adIntroCardShown;
-(void)adCloseClicked;
-(void)adClicked;
-(void)adObjectCreated;
-(void)adObjectDeallocated;
-(void)adPreviouslyLoadedAdReturned;
-(void)adLoadSuccess;
-(void)adViewRegisterForInteractionsCalled;
-(void)adProviderSuccess;
-(void)adProviderFailure:(id)arg1;
-(void)adVideoCreated;
-(void)adVideoPrepared;
-(void)adVideoStarted;
-(void)adVideoPaused;
-(void)adVideoSkipped;
-(void)adVideoFinished;
-(void)adVideoError:(id)arg1;
-(void)adVideoPlayPauseClicked;
-(void)adVideoSoundOn;
-(void)adVideoSoundOff;
-(void)adVideoSoundClicked;
-(void)ctrlCreated;
-(void)ctrlRequestAdWithBid:(BOOL)arg1;
-(void)ctrlAdapterTimeout;
-(void)ctrlStartAdFailAlreadyStarted;
-(void)ctrlStartAdStarted;
-(void)viewabilityStateViewable;
-(void)viewabilityStateNotViewable;
-(void)viewabilityValidatorStarted;
-(void)viewabilityValidatorStopped;
-(void)adValidityCheckPerformedWithResult:(BOOL)arg1;
-(NSString *)funnelId;
-(NSString *)adFormat;
-(NSString *)adViewType;
-(void)setAdViewType:(id)arg1;
-(NSString *)requestId;
-(void)adImpression;

@end

