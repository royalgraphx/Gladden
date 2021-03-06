/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <UIKitCore/UIView.h>
#import <MessagesExtension/ALNativeAdLoadDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol ALNativeAdLoadDelegate;
@class NSArray, ALSdk, ALPostbackService, ALCarouselViewModel, ALCarouselPrecacheRouter, UIView, UIPanGestureRecognizer, UIActivityIndicatorView, NSString;

@interface ALCarouselView : UIView <ALNativeAdLoadDelegate, UIGestureRecognizerDelegate> {

	id<ALNativeAdLoadDelegate> _loadDelegate;
	NSArray* _nativeAds;
	ALSdk* _sdk;
	ALPostbackService* _postbackService;
	NSArray* _previousNativeAdsRendered;
	ALCarouselViewModel* _carouselModel;
	long long _currentAdIndex;
	ALCarouselPrecacheRouter* _precacheRouter;
	NSArray* _cardViews;
	UIView* _contentView;
	UIPanGestureRecognizer* _panGesture;
	UIActivityIndicatorView* _activityIndicator;
	UIView* _activityIndicatorOverlay;

}

@property (nonatomic,retain) ALSdk * sdk;                                                 //@synthesize sdk=_sdk - In the implementation block
@property (assign,nonatomic,__weak) ALPostbackService * postbackService;                  //@synthesize postbackService=_postbackService - In the implementation block
@property (__weak) NSArray * previousNativeAdsRendered;                                   //@synthesize previousNativeAdsRendered=_previousNativeAdsRendered - In the implementation block
@property (nonatomic,retain) ALCarouselViewModel * carouselModel;                         //@synthesize carouselModel=_carouselModel - In the implementation block
@property (assign,nonatomic) long long currentAdIndex;                                    //@synthesize currentAdIndex=_currentAdIndex - In the implementation block
@property (nonatomic,retain) ALCarouselPrecacheRouter * precacheRouter;                   //@synthesize precacheRouter=_precacheRouter - In the implementation block
@property (nonatomic,retain) NSArray * cardViews;                                         //@synthesize cardViews=_cardViews - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                        //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGesture;                         //@synthesize panGesture=_panGesture - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                 //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) UIView * activityIndicatorOverlay;                           //@synthesize activityIndicatorOverlay=_activityIndicatorOverlay - In the implementation block
@property (assign,nonatomic,__weak) id<ALNativeAdLoadDelegate> loadDelegate;              //@synthesize loadDelegate=_loadDelegate - In the implementation block
@property (nonatomic,readonly) NSArray * nativeAds;                                       //@synthesize nativeAds=_nativeAds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSdk:(ALSdk *)arg1 ;
-(ALSdk *)sdk;
-(ALPostbackService *)postbackService;
-(id)initWithFrame:(CGRect)arg1 sdk:(id)arg2 ;
-(void)nativeAdService:(id)arg1 didLoadAds:(id)arg2 ;
-(void)nativeAdService:(id)arg1 didFailToLoadAdsWithError:(long long)arg2 ;
-(void)setPostbackService:(ALPostbackService *)arg1 ;
-(void)setCurrentAdIndex:(long long)arg1 ;
-(long long)currentAdIndex;
-(void)clearView;
-(void)setNativeAds:(NSArray *)arg1 ;
-(NSArray *)nativeAds;
-(void)baseInitWithSdk:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 sdk:(id)arg2 nativeAds:(id)arg3 ;
-(void)setPrecacheRouter:(ALCarouselPrecacheRouter *)arg1 ;
-(void)setCardViews:(NSArray *)arg1 ;
-(void)renderAdsIfNeeded;
-(UIView *)activityIndicatorOverlay;
-(NSArray *)previousNativeAdsRendered;
-(void)setPreviousNativeAdsRendered:(NSArray *)arg1 ;
-(void)setCarouselModel:(ALCarouselViewModel *)arg1 ;
-(long long)adIndexForCardIndex:(unsigned long long)arg1 ;
-(ALCarouselViewModel *)carouselModel;
-(ALCarouselPrecacheRouter *)precacheRouter;
-(void)setActivityIndicatorOverlay:(UIView *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToSuperview;
-(void)setPanGesture:(UIPanGestureRecognizer *)arg1 ;
-(UIPanGestureRecognizer *)panGesture;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(id<ALNativeAdLoadDelegate>)loadDelegate;
-(void)setLoadDelegate:(id<ALNativeAdLoadDelegate>)arg1 ;
-(void)refreshView;
-(void)handlePanGesture:(id)arg1 ;
-(NSArray *)cardViews;
@end

