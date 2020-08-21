/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class FBNativeAdView;

@interface FBNativeAdTableViewCell : UITableViewCell {

	BOOL _adLoaded;
	FBNativeAdView* _nativeAdView;

}

@property (assign,nonatomic,__weak) FBNativeAdView * nativeAdView;              //@synthesize nativeAdView=_nativeAdView - In the implementation block
@property (assign,nonatomic) BOOL adLoaded;                                     //@synthesize adLoaded=_adLoaded - In the implementation block
+(Class)specializeCellForType:(long long)arg1 forAttributes:(id)arg2 ;
-(BOOL)adLoaded;
-(FBNativeAdView *)nativeAdView;
-(void)setNativeAdView:(FBNativeAdView *)arg1 ;
-(void)setAdLoaded:(BOOL)arg1 ;
-(id)initWithType:(long long)arg1 withAttributes:(id)arg2 reuseIdentifier:(id)arg3 ;
-(long long)type;
-(id)attributes;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)populate:(id)arg1 ;
@end
