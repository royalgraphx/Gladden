/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/FBWatchAndBrowseWebViewDelegate.h>
#import <MessagesExtension/FBWatchAndActionActionableController.h>

@protocol FBWatchAndActionActionableControllerDelegate;
@class UIView, FBNativeAdDataModel, FBWatchAndBrowseWebView, NSURL, NSString;

@interface FBWatchAndBrowseActionController : NSObject <FBWatchAndBrowseWebViewDelegate, FBWatchAndActionActionableController> {

	id<FBWatchAndActionActionableControllerDelegate> _delegate;
	FBNativeAdDataModel* _dataModel;
	FBWatchAndBrowseWebView* _browseView;

}

@property (nonatomic,retain) FBNativeAdDataModel * dataModel;                                               //@synthesize dataModel=_dataModel - In the implementation block
@property (nonatomic,__weak,readonly) NSURL * targetURL; 
@property (nonatomic,readonly) FBWatchAndBrowseWebView * browseView;                                        //@synthesize browseView=_browseView - In the implementation block
@property (assign,nonatomic,__weak) id<FBWatchAndActionActionableControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view; 
-(void)setDataModel:(FBNativeAdDataModel *)arg1 ;
-(id)initWithDataModel:(id)arg1 ;
-(void)webViewDidClose;
-(void)makeWebView;
-(BOOL)validateDataModel;
-(FBWatchAndBrowseWebView *)browseView;
-(id<FBWatchAndActionActionableControllerDelegate>)delegate;
-(void)setDelegate:(id<FBWatchAndActionActionableControllerDelegate>)arg1 ;
-(UIView *)view;
-(NSURL *)targetURL;
-(FBNativeAdDataModel *)dataModel;
-(void)prepareForPresentation;
-(void)logError:(id)arg1 ;
@end

