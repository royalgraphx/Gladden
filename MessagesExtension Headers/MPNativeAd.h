/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <MessagesExtension/MPNativeAdAdapterDelegate.h>
#import <MessagesExtension/MPNativeViewDelegate.h>
#import <MessagesExtension/MPMoPubAd.h>

@protocol MPNativeAdDelegate, MPNativeAdRenderer, MPNativeAdAdapter;
@class MPAdConfiguration, NSString, NSDate, NSMutableSet, MPNativeView, NSDictionary;

@interface MPNativeAd : NSObject <MPNativeAdAdapterDelegate, MPNativeViewDelegate, MPMoPubAd> {

	BOOL _hasTrackedImpression;
	BOOL _hasTrackedClick;
	BOOL _hasAttachedToView;
	id<MPNativeAdDelegate> _delegate;
	id<MPNativeAdRenderer> _renderer;
	MPAdConfiguration* _configuration;
	NSString* _adUnitID;
	NSDate* _creationDate;
	NSMutableSet* _clickTrackerURLs;
	NSMutableSet* _impressionTrackerURLs;
	id<MPNativeAdAdapter> _adAdapter;
	NSString* _adIdentifier;
	MPNativeView* _associatedView;

}

@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,retain) MPNativeView * associatedView; 
@property (nonatomic,retain) id<MPNativeAdRenderer> renderer; 
@property (nonatomic,retain) MPAdConfiguration * configuration; 
@property (nonatomic,retain) NSString * adUnitID; 
@property (nonatomic,readonly) NSMutableSet * clickTrackerURLs; 
@property (nonatomic,readonly) NSMutableSet * impressionTrackerURLs; 
@property (nonatomic,readonly) id<MPNativeAdAdapter> adAdapter; 
@property (nonatomic,retain) id<MPNativeAdRenderer> renderer;                     //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,retain) MPAdConfiguration * configuration;                   //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSString * adUnitID;                                 //@synthesize adUnitID=_adUnitID - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                               //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSMutableSet * clickTrackerURLs;                     //@synthesize clickTrackerURLs=_clickTrackerURLs - In the implementation block
@property (nonatomic,retain) NSMutableSet * impressionTrackerURLs;                //@synthesize impressionTrackerURLs=_impressionTrackerURLs - In the implementation block
@property (nonatomic,readonly) id<MPNativeAdAdapter> adAdapter;                   //@synthesize adAdapter=_adAdapter - In the implementation block
@property (assign,nonatomic) BOOL hasTrackedImpression;                           //@synthesize hasTrackedImpression=_hasTrackedImpression - In the implementation block
@property (assign,nonatomic) BOOL hasTrackedClick;                                //@synthesize hasTrackedClick=_hasTrackedClick - In the implementation block
@property (nonatomic,copy) NSString * adIdentifier;                               //@synthesize adIdentifier=_adIdentifier - In the implementation block
@property (nonatomic,retain) MPNativeView * associatedView;                       //@synthesize associatedView=_associatedView - In the implementation block
@property (assign,nonatomic) BOOL hasAttachedToView;                              //@synthesize hasAttachedToView=_hasAttachedToView - In the implementation block
@property (assign,nonatomic,__weak) id<MPNativeAdDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSDictionary * properties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)trackImpression;
-(void)trackClick;
-(id)viewControllerForPresentingModalView;
-(NSString *)adUnitID;
-(void)setAdUnitID:(NSString *)arg1 ;
-(void)nativeAdWillLogImpression:(id)arg1 ;
-(void)nativeAdDidClick:(id)arg1 ;
-(void)nativeAdWillPresentModalForAdapter:(id)arg1 ;
-(void)nativeAdWillLeaveApplicationFromAdapter:(id)arg1 ;
-(void)nativeAdDidDismissModalForAdapter:(id)arg1 ;
-(void)willAttachToView:(id)arg1 withAdContentViews:(id)arg2 ;
-(NSMutableSet *)impressionTrackerURLs;
-(NSMutableSet *)clickTrackerURLs;
-(id)initWithAdAdapter:(id)arg1 ;
-(id<MPNativeAdAdapter>)adAdapter;
-(BOOL)hasTrackedClick;
-(void)setHasTrackedClick:(BOOL)arg1 ;
-(BOOL)hasTrackedImpression;
-(void)setHasTrackedImpression:(BOOL)arg1 ;
-(void)nativeViewWillMoveToSuperview:(id)arg1 ;
-(void)updateAdViewSize:(CGSize)arg1 ;
-(id)retrieveAdViewForSizeCalculationWithError:(id*)arg1 ;
-(void)adViewTapped;
-(void)setHasAttachedToView:(BOOL)arg1 ;
-(BOOL)hasAttachedToView;
-(void)trackMetricsForURLs:(id)arg1 ;
-(BOOL)isThirdPartyHandlingClicks;
-(void)trackMetricForURL:(id)arg1 ;
-(void)displayAdContent;
-(id)retrieveAdViewWithError:(id*)arg1 ;
-(void)setClickTrackerURLs:(NSMutableSet *)arg1 ;
-(void)setImpressionTrackerURLs:(NSMutableSet *)arg1 ;
-(id<MPNativeAdDelegate>)delegate;
-(void)setDelegate:(id<MPNativeAdDelegate>)arg1 ;
-(NSDate *)creationDate;
-(NSDictionary *)properties;
-(void)setConfiguration:(MPAdConfiguration *)arg1 ;
-(MPAdConfiguration *)configuration;
-(void)setCreationDate:(NSDate *)arg1 ;
-(MPNativeView *)associatedView;
-(void)setAssociatedView:(MPNativeView *)arg1 ;
-(id<MPNativeAdRenderer>)renderer;
-(void)setRenderer:(id<MPNativeAdRenderer>)arg1 ;
-(NSString *)adIdentifier;
-(void)setAdIdentifier:(NSString *)arg1 ;
@end

