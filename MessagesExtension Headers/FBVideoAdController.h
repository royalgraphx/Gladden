/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/FBVideoAdContentViewDelegate.h>

@protocol FBVideoAdControllerDelegate;
@class FBVideoAdContentView, FBInstreamAdDataModel, FBAdVideoLogger, UIViewController, NSString;

@interface FBVideoAdController : NSObject <FBVideoAdContentViewDelegate> {

	BOOL _contentViewLoaded;
	BOOL _started;
	FBVideoAdContentView* _contentView;
	id<FBVideoAdControllerDelegate> _delegate;
	FBInstreamAdDataModel* _dataModel;
	FBAdVideoLogger* _logger;
	UIViewController* _rootViewController;

}

@property (nonatomic,retain) FBVideoAdContentView * contentView;                           //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) BOOL contentViewLoaded;                                       //@synthesize contentViewLoaded=_contentViewLoaded - In the implementation block
@property (nonatomic,retain) FBInstreamAdDataModel * dataModel;                            //@synthesize dataModel=_dataModel - In the implementation block
@property (nonatomic,retain) FBAdVideoLogger * logger;                                     //@synthesize logger=_logger - In the implementation block
@property (assign,nonatomic) BOOL started;                                                 //@synthesize started=_started - In the implementation block
@property (nonatomic,retain) UIViewController * rootViewController;                        //@synthesize rootViewController=_rootViewController - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (assign,nonatomic,__weak) id<FBVideoAdControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)showAdFromRootViewController:(id)arg1 ;
-(void)setDataModel:(FBInstreamAdDataModel *)arg1 ;
-(void)loadAdFromDataModel:(id)arg1 placementDefinition:(id)arg2 ;
-(void)contentViewDidLoad:(id)arg1 ;
-(void)contentViewDidProgress:(id)arg1 ;
-(void)contentViewDidPause:(id)arg1 ;
-(void)contentViewDidResume:(id)arg1 ;
-(void)contentViewDidSkip:(id)arg1 ;
-(void)contentViewDidClickthrough:(id)arg1 ;
-(void)contentViewDidEnd:(id)arg1 ;
-(void)contentViewDidUnload:(id)arg1 ;
-(void)contentView:(id)arg1 didFailWithError:(id)arg2 ;
-(BOOL)isDataModelValid;
-(BOOL)isNetworkOnline;
-(void)handleViewableImpression;
-(void)dealloc;
-(BOOL)isValid;
-(id<FBVideoAdControllerDelegate>)delegate;
-(void)setDelegate:(id<FBVideoAdControllerDelegate>)arg1 ;
-(FBAdVideoLogger *)logger;
-(BOOL)started;
-(FBVideoAdContentView *)contentView;
-(id)initWithContentView:(id)arg1 ;
-(void)setContentView:(FBVideoAdContentView *)arg1 ;
-(void)setRootViewController:(UIViewController *)arg1 ;
-(UIViewController *)rootViewController;
-(void)setStarted:(BOOL)arg1 ;
-(void)setLogger:(FBAdVideoLogger *)arg1 ;
-(void)setContentViewLoaded:(BOOL)arg1 ;
-(FBInstreamAdDataModel *)dataModel;
-(BOOL)contentViewLoaded;
@end

