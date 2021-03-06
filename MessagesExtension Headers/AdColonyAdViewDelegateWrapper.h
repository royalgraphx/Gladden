/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/AdColonyAdViewDelegate.h>

@protocol AdColonyAdViewDelegate;
@class NSString;

@interface AdColonyAdViewDelegateWrapper : NSObject <AdColonyAdViewDelegate> {

	id<AdColonyAdViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AdColonyAdViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)wrapperWithDelegate:(id)arg1 ;
-(void)adColonyAdViewDidLoad:(id)arg1 ;
-(void)adColonyAdViewDidFailToLoad:(id)arg1 ;
-(void)adColonyAdViewWillLeaveApplication:(id)arg1 ;
-(void)adColonyAdViewWillOpen:(id)arg1 ;
-(void)adColonyAdViewDidClose:(id)arg1 ;
-(void)adColonyAdViewDidReceiveClick:(id)arg1 ;
-(id<AdColonyAdViewDelegate>)delegate;
-(void)setDelegate:(id<AdColonyAdViewDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end

