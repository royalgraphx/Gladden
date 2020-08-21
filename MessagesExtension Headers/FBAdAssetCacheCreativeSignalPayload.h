/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString;

@interface FBAdAssetCacheCreativeSignalPayload : NSObject <NSCopying, NSMutableCopying> {

	long long _signal;
	long long _assetType;
	NSString* _cacheContext;
	NSString* _cacheKey;
	NSString* _failureReason;

}

@property (nonatomic,readonly) long long signal;                           //@synthesize signal=_signal - In the implementation block
@property (nonatomic,readonly) long long assetType;                        //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,copy,readonly) NSString * cacheContext;               //@synthesize cacheContext=_cacheContext - In the implementation block
@property (nonatomic,copy,readonly) NSString * cacheKey;                   //@synthesize cacheKey=_cacheKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * failureReason;              //@synthesize failureReason=_failureReason - In the implementation block
-(id)initWithCreativeSignalPayload:(id)arg1 ;
-(NSString *)cacheContext;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)signal;
-(NSString *)cacheKey;
-(long long)assetType;
-(NSString *)failureReason;
@end
