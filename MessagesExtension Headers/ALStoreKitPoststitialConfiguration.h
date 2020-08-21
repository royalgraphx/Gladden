/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, UIColor;

@interface ALStoreKitPoststitialConfiguration : NSObject {

	NSDictionary* _configuration;

}

@property (nonatomic,retain) NSDictionary * configuration;                   //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) double presentAnimationDuration; 
@property (nonatomic,readonly) double dismissAnimationDuration; 
@property (nonatomic,readonly) double windowLevel; 
@property (nonatomic,readonly) UIColor * windowColor; 
@property (nonatomic,readonly) BOOL hideAd; 
-(double)presentAnimationDuration;
-(BOOL)hideAd;
-(UIColor *)windowColor;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setConfiguration:(NSDictionary *)arg1 ;
-(NSDictionary *)configuration;
-(double)windowLevel;
-(double)dismissAnimationDuration;
@end

