/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MPVASTResourceView.h>
#import <MessagesExtension/MPVASTResourceViewDelegate.h>

@protocol MPVASTIndustryIconViewDelegate;
@class MPVASTIndustryIcon, NSString;

@interface MPVASTIndustryIconView : MPVASTResourceView <MPVASTResourceViewDelegate> {

	MPVASTIndustryIcon* _icon;
	id<MPVASTIndustryIconViewDelegate> _iconViewDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) MPVASTIndustryIcon * icon;                                               //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic,__weak) id<MPVASTIndustryIconViewDelegate> iconViewDelegate;              //@synthesize iconViewDelegate=_iconViewDelegate - In the implementation block
-(void)setIconViewDelegate:(id<MPVASTIndustryIconViewDelegate>)arg1 ;
-(void)loadIcon:(id)arg1 ;
-(id<MPVASTIndustryIconViewDelegate>)iconViewDelegate;
-(void)vastResourceView:(id)arg1 didTriggerEvent:(unsigned long long)arg2 ;
-(void)vastResourceView:(id)arg1 didTriggerOverridingClickThrough:(id)arg2 ;
-(id)init;
-(MPVASTIndustryIcon *)icon;
-(void)setIcon:(MPVASTIndustryIcon *)arg1 ;
@end
