/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPNativeAdRendering;
@class UIView;

@interface MPBaseNativeAdRenderer : NSObject {

	UIView*<MPNativeAdRendering> _adView;
	Class _renderingViewClass;

}

@property (nonatomic,retain) UIView*<MPNativeAdRendering> adView; 
@property (nonatomic,retain) Class renderingViewClass; 
@property (nonatomic,retain) UIView*<MPNativeAdRendering> adView;              //@synthesize adView=_adView - In the implementation block
@property (nonatomic,retain) Class renderingViewClass;                         //@synthesize renderingViewClass=_renderingViewClass - In the implementation block
-(Class)renderingViewClass;
-(void)setRenderingViewClass:(Class)arg1 ;
-(id)generateSponsoredByTextWithAdapter:(id)arg1 ;
-(void)renderSponsoredByTextWithAdapter:(id)arg1 ;
-(void)setAdView:(UIView*<MPNativeAdRendering>)arg1 ;
-(UIView*<MPNativeAdRendering>)adView;
@end

