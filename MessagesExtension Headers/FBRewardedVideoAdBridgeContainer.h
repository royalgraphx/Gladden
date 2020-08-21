/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/FBAdBridgeContainer.h>
#import <MessagesExtension/FBRewardedVideoAdDelegate.h>

@class FBRewardedVideoAd, NSString;

@interface FBRewardedVideoAdBridgeContainer : FBAdBridgeContainer <FBRewardedVideoAdDelegate> {

	FBRewardedVideoAd* _rewardedVideoAd;
	/*function pointer*/void* _rewardedVideoAdDidClickCallback;
	/*function pointer*/void* _rewardedVideoAdDidCloseCallback;
	/*function pointer*/void* _rewardedVideoAdWillCloseCallback;
	/*function pointer*/void* _rewardedVideoAdDidLoadCallback;
	/*function pointer*/void* _rewardedVideoAdDidFailWithErrorCallback;
	/*function pointer*/void* _rewardedVideoAdWillLogImpressionCallback;
	/*function pointer*/void* _rewardedVideoAdVideoCompleteCallback;
	/*function pointer*/void* _rewardedVideoAdServerRewardDidSucceedCallback;
	/*function pointer*/void* _rewardedVideoAdServerRewardDidFailCallback;

}

@property (nonatomic,retain) FBRewardedVideoAd * rewardedVideoAd;                                                  //@synthesize rewardedVideoAd=_rewardedVideoAd - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* rewardedVideoAdDidClickCallback;                            //@synthesize rewardedVideoAdDidClickCallback=_rewardedVideoAdDidClickCallback - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* rewardedVideoAdDidCloseCallback;                            //@synthesize rewardedVideoAdDidCloseCallback=_rewardedVideoAdDidCloseCallback - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* rewardedVideoAdWillCloseCallback;                           //@synthesize rewardedVideoAdWillCloseCallback=_rewardedVideoAdWillCloseCallback - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* rewardedVideoAdDidLoadCallback;                             //@synthesize rewardedVideoAdDidLoadCallback=_rewardedVideoAdDidLoadCallback - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* rewardedVideoAdDidFailWithErrorCallback;                    //@synthesize rewardedVideoAdDidFailWithErrorCallback=_rewardedVideoAdDidFailWithErrorCallback - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* rewardedVideoAdWillLogImpressionCallback;                   //@synthesize rewardedVideoAdWillLogImpressionCallback=_rewardedVideoAdWillLogImpressionCallback - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* rewardedVideoAdVideoCompleteCallback;                       //@synthesize rewardedVideoAdVideoCompleteCallback=_rewardedVideoAdVideoCompleteCallback - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* rewardedVideoAdServerRewardDidSucceedCallback;              //@synthesize rewardedVideoAdServerRewardDidSucceedCallback=_rewardedVideoAdServerRewardDidSucceedCallback - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* rewardedVideoAdServerRewardDidFailCallback;                 //@synthesize rewardedVideoAdServerRewardDidFailCallback=_rewardedVideoAdServerRewardDidFailCallback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)rewardedVideoAdDidClick:(id)arg1 ;
-(void)rewardedVideoAdDidLoad:(id)arg1 ;
-(void)rewardedVideoAdDidClose:(id)arg1 ;
-(void)rewardedVideoAdWillClose:(id)arg1 ;
-(void)rewardedVideoAd:(id)arg1 didFailWithError:(id)arg2 ;
-(void)rewardedVideoAdVideoComplete:(id)arg1 ;
-(void)rewardedVideoAdWillLogImpression:(id)arg1 ;
-(void)rewardedVideoAdServerRewardDidSucceed:(id)arg1 ;
-(void)rewardedVideoAdServerRewardDidFail:(id)arg1 ;
-(id)initWithRewardedVideoAd:(id)arg1 withUniqueId:(int)arg2 ;
-(void)setRewardedVideoAd:(FBRewardedVideoAd *)arg1 ;
-(FBRewardedVideoAd *)rewardedVideoAd;
-(/*function pointer*/void*)rewardedVideoAdDidClickCallback;
-(void)setRewardedVideoAdDidClickCallback:(/*function pointer*/void*)arg1 ;
-(/*function pointer*/void*)rewardedVideoAdDidCloseCallback;
-(void)setRewardedVideoAdDidCloseCallback:(/*function pointer*/void*)arg1 ;
-(/*function pointer*/void*)rewardedVideoAdWillCloseCallback;
-(void)setRewardedVideoAdWillCloseCallback:(/*function pointer*/void*)arg1 ;
-(/*function pointer*/void*)rewardedVideoAdDidLoadCallback;
-(void)setRewardedVideoAdDidLoadCallback:(/*function pointer*/void*)arg1 ;
-(/*function pointer*/void*)rewardedVideoAdDidFailWithErrorCallback;
-(void)setRewardedVideoAdDidFailWithErrorCallback:(/*function pointer*/void*)arg1 ;
-(/*function pointer*/void*)rewardedVideoAdWillLogImpressionCallback;
-(void)setRewardedVideoAdWillLogImpressionCallback:(/*function pointer*/void*)arg1 ;
-(/*function pointer*/void*)rewardedVideoAdVideoCompleteCallback;
-(void)setRewardedVideoAdVideoCompleteCallback:(/*function pointer*/void*)arg1 ;
-(/*function pointer*/void*)rewardedVideoAdServerRewardDidSucceedCallback;
-(void)setRewardedVideoAdServerRewardDidSucceedCallback:(/*function pointer*/void*)arg1 ;
-(/*function pointer*/void*)rewardedVideoAdServerRewardDidFailCallback;
-(void)setRewardedVideoAdServerRewardDidFailCallback:(/*function pointer*/void*)arg1 ;
-(void)dealloc;
-(void)dispose;
@end

