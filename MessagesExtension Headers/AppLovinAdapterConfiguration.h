/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MPBaseAdapterConfiguration.h>

@class NSString;

@interface AppLovinAdapterConfiguration : MPBaseAdapterConfiguration

@property (nonatomic,copy,readonly) NSString * adapterVersion; 
@property (nonatomic,copy,readonly) NSString * biddingToken; 
@property (nonatomic,copy,readonly) NSString * moPubNetworkName; 
@property (nonatomic,copy,readonly) NSString * networkSdkVersion; 
+(id)sdkKey;
+(void)setSdkKey:(id)arg1 ;
+(id)pluginVersion;
-(NSString *)moPubNetworkName;
-(void)initializeNetworkWithConfiguration:(id)arg1 complete:(/*^block*/id)arg2 ;
-(NSString *)adapterVersion;
-(NSString *)networkSdkVersion;
-(NSString *)biddingToken;
-(id)SDKFromConfiguration:(id)arg1 ;
@end

