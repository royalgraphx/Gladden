/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/IMCoreAd.h>
#import <MessagesExtension/ASNativeAdMangerDelegate.h>

@protocol IMNativeCoreAdDelegate;
@class IMNativeAdManager, NSString;

@interface IMNativeCoreAd : IMCoreAd <ASNativeAdMangerDelegate> {

	id<IMNativeCoreAdDelegate> _delegate;
	IMNativeAdManager* _manager;

}

@property (assign,nonatomic,__weak) id<IMNativeCoreAdDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IMNativeAdManager * manager;                             //@synthesize manager=_manager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)adDescription;
-(void)reportErrorToDelegate:(id)arg1 ;
-(void)adManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)adManagerDidLoad:(id)arg1 ;
-(void)adManagerDidFireAdImpression:(id)arg1 ;
-(void)adManager:(id)arg1 hasInteractionWithParams:(id)arg2 ;
-(void)adManagerAdWasSkipped:(id)arg1 ;
-(void)adManagerMediaDidComplete:(id)arg1 ;
-(void)adManagerWillLeaveApplication:(id)arg1 ;
-(void)adManagerWillPresent:(id)arg1 ;
-(void)adManagerDidPresent:(id)arg1 ;
-(void)adManagerWillDismiss:(id)arg1 ;
-(void)adManagerDidDismiss:(id)arg1 ;
-(long long)adStateForAdManager:(id)arg1 ;
-(id)primaryViewOfWidth:(double)arg1 ;
-(void)recyclePrimaryView;
-(void)reportAdClickAndOpenLandingPage;
-(void)fireClientFillBeaconForInline;
-(void)nativeAdManagerAdImpressed:(id)arg1 ;
-(void)nativeAdManagerAudioStateChange:(BOOL)arg1 ;
-(id)createManager;
-(id)initWithAdSettings:(id)arg1 withDelegate:(id)arg2 ;
-(id)customAdContent;
-(id)adTitle;
-(id)adIcon;
-(id)adCtaText;
-(id)adRating;
-(id)adLandingPageUrl;
-(BOOL)isAppDownload;
-(void)dealloc;
-(id<IMNativeCoreAdDelegate>)delegate;
-(void)setDelegate:(id<IMNativeCoreAdDelegate>)arg1 ;
-(IMNativeAdManager *)manager;
-(void)setManager:(IMNativeAdManager *)arg1 ;
-(id)creativeId;
@end

