/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, ALSdk, NSMutableDictionary;

@interface ALCarouselViewModel : NSObject {

	NSArray* _nativeAds;
	ALSdk* _sdk;
	NSMutableDictionary* _cardStates;

}

@property (nonatomic,retain) ALSdk * sdk;                                      //@synthesize sdk=_sdk - In the implementation block
@property (nonatomic,retain) NSArray * nativeAds;                              //@synthesize nativeAds=_nativeAds - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cardStates;                 //@synthesize cardStates=_cardStates - In the implementation block
@property (nonatomic,readonly) unsigned long long nativeAdsCount; 
-(void)setSdk:(ALSdk *)arg1 ;
-(ALSdk *)sdk;
-(void)setNativeAds:(NSArray *)arg1 ;
-(void)setCardStates:(NSMutableDictionary *)arg1 ;
-(unsigned long long)nativeAdsCount;
-(NSMutableDictionary *)cardStates;
-(void)beginObservingCardState:(id)arg1 ;
-(void)updateMuteStates:(unsigned long long)arg1 ;
-(void)endObservingCardState:(id)arg1 ;
-(NSArray *)nativeAds;
-(id)cardStateAtNativeAdIndex:(unsigned long long)arg1 ;
-(id)initWithNativeAds:(id)arg1 ;
-(id)cardStateForNativeAd:(id)arg1 ;
-(id)nativeAdAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)removeAllObjects;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

