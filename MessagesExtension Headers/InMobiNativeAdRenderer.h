/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MPNativeAdRenderer.h>

@protocol MPNativeAdRendering;
@class UIView, InMobiNativeAdAdapter, NSString;

@interface InMobiNativeAdRenderer : NSObject <MPNativeAdRenderer> {

	BOOL _adViewInViewHierarchy;
	/*^block*/id _viewSizeHandler;
	UIView*<MPNativeAdRendering> _adView;
	InMobiNativeAdAdapter* _adapter;
	Class _renderingViewClass;

}

@property (nonatomic,retain) UIView*<MPNativeAdRendering> adView;              //@synthesize adView=_adView - In the implementation block
@property (assign,nonatomic) BOOL adViewInViewHierarchy;                       //@synthesize adViewInViewHierarchy=_adViewInViewHierarchy - In the implementation block
@property (nonatomic,retain) InMobiNativeAdAdapter * adapter;                  //@synthesize adapter=_adapter - In the implementation block
@property (nonatomic,retain) Class renderingViewClass;                         //@synthesize renderingViewClass=_renderingViewClass - In the implementation block
@property (nonatomic,readonly) id viewSizeHandler;                             //@synthesize viewSizeHandler=_viewSizeHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)rendererConfigurationWithRendererSettings:(id)arg1 ;
-(id)viewSizeHandler;
-(Class)renderingViewClass;
-(void)setRenderingViewClass:(Class)arg1 ;
-(id)initWithRendererSettings:(id)arg1 ;
-(void)setAdViewInViewHierarchy:(BOOL)arg1 ;
-(BOOL)adViewInViewHierarchy;
-(id)retrieveViewWithAdapter:(id)arg1 error:(id*)arg2 ;
-(void)adViewWillMoveToSuperview:(id)arg1 ;
-(void)renderUnifiedAdViewWithAdapter:(id)arg1 ;
-(InMobiNativeAdAdapter *)adapter;
-(void)setAdapter:(InMobiNativeAdAdapter *)arg1 ;
-(void)setAdView:(UIView*<MPNativeAdRendering>)arg1 ;
-(UIView*<MPNativeAdRendering>)adView;
@end
