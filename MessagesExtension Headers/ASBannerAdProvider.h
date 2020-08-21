/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <MessagesExtension/ASAdProvider.h>

@protocol ASBannerAdProviderDelegate;
@interface ASBannerAdProvider : ASAdProvider {

	BOOL _hasModal;
	id<ASBannerAdProviderDelegate> _delegate;

}

@property (assign,nonatomic) BOOL hasModal;                                               //@synthesize hasModal=_hasModal - In the implementation block
@property (assign,nonatomic,__weak) id<ASBannerAdProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)requestBannerAdWithSize:(CGSize)arg1 ;
-(id)initWithAdManager:(id)arg1 ads:(id)arg2 andDelegate:(id)arg3 ;
-(void)rotateToOrientation:(long long)arg1 withSize:(CGSize)arg2 ;
-(BOOL)hasModal;
-(void)setHasModal:(BOOL)arg1 ;
-(void)dealloc;
-(id<ASBannerAdProviderDelegate>)delegate;
-(void)setDelegate:(id<ASBannerAdProviderDelegate>)arg1 ;
-(void)cancel;
-(void)scheduleRefresh;
@end

