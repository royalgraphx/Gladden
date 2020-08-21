/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/FBNativeAdDelegate.h>
#import <MessagesExtension/FBNativeBannerAdDelegate.h>
#import <MessagesExtension/MPNativeAdAdapter.h>

@protocol MPNativeAdAdapterDelegate;
@class NSDictionary, FBNativeAdBase, FBAdOptionsView, FBMediaView, FBAdIconView, NSString, NSURL;

@interface FacebookNativeAdAdapter : NSObject <FBNativeAdDelegate, FBNativeBannerAdDelegate, MPNativeAdAdapter> {

	NSDictionary* _properties;
	id<MPNativeAdAdapterDelegate> _delegate;
	FBNativeAdBase* _fbNativeAdBase;
	FBAdOptionsView* _adOptionsView;
	FBMediaView* _mediaView;
	FBAdIconView* _iconView;

}

@property (nonatomic,readonly) FBAdOptionsView * adOptionsView;                          //@synthesize adOptionsView=_adOptionsView - In the implementation block
@property (nonatomic,readonly) FBMediaView * mediaView;                                  //@synthesize mediaView=_mediaView - In the implementation block
@property (nonatomic,readonly) FBAdIconView * iconView;                                  //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic,__weak) id<MPNativeAdAdapterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBNativeAdBase * fbNativeAdBase;                          //@synthesize fbNativeAdBase=_fbNativeAdBase - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * properties;                                //@synthesize properties=_properties - In the implementation block
@property (nonatomic,readonly) NSURL * defaultActionURL; 
-(void)nativeAdWillLogImpression:(id)arg1 ;
-(void)nativeAdDidClick:(id)arg1 ;
-(BOOL)enableThirdPartyClickTracking;
-(void)willAttachToView:(id)arg1 ;
-(void)willAttachToView:(id)arg1 withAdContentViews:(id)arg2 ;
-(id)privacyInformationIconView;
-(id)mainMediaView;
-(id)iconMediaView;
-(FBNativeAdBase *)fbNativeAdBase;
-(id)initWithFBNativeAdBase:(id)arg1 adProperties:(id)arg2 ;
-(void)nativeAdDidFinishHandlingClick:(id)arg1 ;
-(void)nativeBannerAdWillLogImpression:(id)arg1 ;
-(void)nativeBannerAdDidClick:(id)arg1 ;
-(void)nativeBannerAdDidFinishHandlingClick:(id)arg1 ;
-(FBAdOptionsView *)adOptionsView;
-(id<MPNativeAdAdapterDelegate>)delegate;
-(void)setDelegate:(id<MPNativeAdAdapterDelegate>)arg1 ;
-(NSDictionary *)properties;
-(FBMediaView *)mediaView;
-(NSURL *)defaultActionURL;
-(FBAdIconView *)iconView;
@end

