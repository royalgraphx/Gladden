/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/FBAdProvider.h>

@class FBAdProviderResponseAds;

@interface FBAdProviderWithResponse : FBAdProvider {

	FBAdProviderResponseAds* _response;

}

@property (nonatomic,retain) FBAdProviderResponseAds * response;              //@synthesize response=_response - In the implementation block
-(void)loadAdWithEnvironmentData:(id)arg1 ;
-(id)initWithResponse:(id)arg1 forAdAtIndex:(long long)arg2 ;
-(id)init;
-(FBAdProviderResponseAds *)response;
-(void)setResponse:(FBAdProviderResponseAds *)arg1 ;
@end

