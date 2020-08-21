/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFSafariViewControllerDelegate.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>
#import <MessagesExtension/MPAdDestinationDisplayAgent.h>

@protocol MPAdDestinationDisplayAgent
@property (assign,nonatomic,__weak) id<MPAdDestinationDisplayAgentDelegate> delegate; 
@required
+(id)agentWithDelegate:(id)arg1;
+(BOOL)shouldDisplayContentInApp;
-(void)displayDestinationForURL:(id)arg1;
-(id<MPAdDestinationDisplayAgentDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)cancel;

@end

#import <MessagesExtension/MPProgressOverlayViewDelegate.h>
#import <MessagesExtension/MPActivityViewControllerHelperDelegate.h>

@protocol MPAdDestinationDisplayAgentDelegate;
@class MPURLResolver, MPProgressOverlayView, SKStoreProductViewController, SFSafariViewController, MPActivityViewControllerHelper, NSString;

@interface MPAdDestinationDisplayAgent : NSObject <SFSafariViewControllerDelegate, SKStoreProductViewControllerDelegate, MPAdDestinationDisplayAgent, MPProgressOverlayViewDelegate, MPActivityViewControllerHelperDelegate> {

	BOOL _isLoadingDestination;
	id<MPAdDestinationDisplayAgentDelegate> delegate;
	MPURLResolver* _resolver;
	MPURLResolver* _enhancedDeeplinkFallbackResolver;
	MPProgressOverlayView* _overlayView;
	long long _displayAgentType;
	SKStoreProductViewController* _storeKitController;
	SFSafariViewController* _safariController;
	MPActivityViewControllerHelper* _activityViewControllerHelper;

}

@property (nonatomic,retain) MPURLResolver * resolver;                                                   //@synthesize resolver=_resolver - In the implementation block
@property (nonatomic,retain) MPURLResolver * enhancedDeeplinkFallbackResolver;                           //@synthesize enhancedDeeplinkFallbackResolver=_enhancedDeeplinkFallbackResolver - In the implementation block
@property (nonatomic,retain) MPProgressOverlayView * overlayView;                                        //@synthesize overlayView=_overlayView - In the implementation block
@property (assign,nonatomic) BOOL isLoadingDestination;                                                  //@synthesize isLoadingDestination=_isLoadingDestination - In the implementation block
@property (assign,nonatomic) long long displayAgentType;                                                 //@synthesize displayAgentType=_displayAgentType - In the implementation block
@property (nonatomic,retain) SKStoreProductViewController * storeKitController;                          //@synthesize storeKitController=_storeKitController - In the implementation block
@property (nonatomic,retain) SFSafariViewController * safariController;                                  //@synthesize safariController=_safariController - In the implementation block
@property (nonatomic,retain) MPActivityViewControllerHelper * activityViewControllerHelper;              //@synthesize activityViewControllerHelper=_activityViewControllerHelper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MPAdDestinationDisplayAgentDelegate> delegate; 
+(id)agentWithDelegate:(id)arg1 ;
+(BOOL)shouldDisplayContentInApp;
-(void)displayDestinationForURL:(id)arg1 ;
-(void)overlayCancelButtonPressed;
-(void)activityViewControllerDidDismiss;
-(void)activityViewControllerWillPresent;
-(id)viewControllerForPresentingActivityViewController;
-(void)setActivityViewControllerHelper:(MPActivityViewControllerHelper *)arg1 ;
-(long long)displayAgentType;
-(void)setDisplayAgentType:(long long)arg1 ;
-(void)dismissAllModalContent;
-(SKStoreProductViewController *)storeKitController;
-(BOOL)isLoadingDestination;
-(void)setIsLoadingDestination:(BOOL)arg1 ;
-(MPURLResolver *)enhancedDeeplinkFallbackResolver;
-(void)failedToResolveURLWithError:(id)arg1 ;
-(BOOL)handleSuggestedURLAction:(id)arg1 isResolvingEnhancedDeeplink:(BOOL)arg2 ;
-(void)hideOverlay;
-(void)completeDestinationLoading;
-(void)showStoreKitWithAction:(id)arg1 ;
-(void)openURLInApplication:(id)arg1 ;
-(void)handleEnhancedDeeplinkRequest:(id)arg1 ;
-(void)showWebViewWithHTMLString:(id)arg1 baseURL:(id)arg2 actionType:(unsigned long long)arg3 ;
-(BOOL)openShareURL:(id)arg1 ;
-(void)handleEnhancedDeeplinkFallbackForRequest:(id)arg1 ;
-(void)setEnhancedDeeplinkFallbackResolver:(MPURLResolver *)arg1 ;
-(void)setSafariController:(SFSafariViewController *)arg1 ;
-(void)showAdBrowserController;
-(SFSafariViewController *)safariController;
-(void)presentStoreKitControllerWithProductParameters:(id)arg1 fallbackURL:(id)arg2 ;
-(MPActivityViewControllerHelper *)activityViewControllerHelper;
-(void)setStoreKitController:(SKStoreProductViewController *)arg1 ;
-(void)hideModalAndNotifyDelegate;
-(void)showStoreKitProductWithParameters:(id)arg1 fallbackURL:(id)arg2 ;
-(void)dealloc;
-(id<MPAdDestinationDisplayAgentDelegate>)delegate;
-(void)setDelegate:(id<MPAdDestinationDisplayAgentDelegate>)arg1 ;
-(void)cancel;
-(MPURLResolver *)resolver;
-(void)setOverlayView:(MPProgressOverlayView *)arg1 ;
-(MPProgressOverlayView *)overlayView;
-(void)productViewControllerDidFinish:(id)arg1 ;
-(void)safariViewControllerDidFinish:(id)arg1 ;
-(void)setResolver:(MPURLResolver *)arg1 ;
@end
