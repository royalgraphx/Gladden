/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/FBAdAssetCacheCreativeSignalPayload.h>

@class NSString;

@interface FBAdAssetCacheMutableCreativeSignalPayload : FBAdAssetCacheCreativeSignalPayload

@property (assign,nonatomic) long long signal; 
@property (assign,nonatomic) long long assetType; 
@property (nonatomic,copy) NSString * cacheContext; 
@property (nonatomic,copy) NSString * cacheKey; 
@property (nonatomic,copy) NSString * failureReason; 
-(void)setCacheContext:(NSString *)arg1 ;
-(void)setCacheKey:(NSString *)arg1 ;
-(void)setFailureReason:(NSString *)arg1 ;
-(void)setAssetType:(long long)arg1 ;
-(void)setSignal:(long long)arg1 ;
@end

