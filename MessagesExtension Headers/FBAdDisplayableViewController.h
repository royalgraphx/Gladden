/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBAdDataModel;


@protocol FBAdDisplayableViewController <NSObject>
@property (getter=isAdValid,nonatomic,readonly) BOOL adValid; 
@property (nonatomic,readonly) FBAdDataModel * adDataModel; 
@property (assign,nonatomic,__weak) id<FBAdDisplayableViewControllerDelegate> delegate; 
@required
-(void)loadAd;
-(BOOL)isAdValid;
-(BOOL)showAdFromRootViewController:(id)arg1;
-(FBAdDataModel *)adDataModel;
-(id)initWithAdData:(id)arg1 placementDefinition:(id)arg2 extraHint:(id)arg3;
-(BOOL)showAdFromRootViewController:(id)arg1 animated:(BOOL)arg2;
-(id<FBAdDisplayableViewControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;

@end

