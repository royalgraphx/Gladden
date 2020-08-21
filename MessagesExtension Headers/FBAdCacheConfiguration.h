/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBAdCacheConfiguration : NSObject <NSCopying> {

	BOOL _useFileManager;
	BOOL _wipeInMemoryCacheOnMemoryWarning;
	double _inMemoryExpirationInterval;
	unsigned long long _inMemoryCacheSizeLimit;
	unsigned long long _onDiskCacheSizeLimit;

}

@property (assign,nonatomic) BOOL useFileManager;                                    //@synthesize useFileManager=_useFileManager - In the implementation block
@property (assign,nonatomic) BOOL wipeInMemoryCacheOnMemoryWarning;                  //@synthesize wipeInMemoryCacheOnMemoryWarning=_wipeInMemoryCacheOnMemoryWarning - In the implementation block
@property (assign,nonatomic) double inMemoryExpirationInterval;                      //@synthesize inMemoryExpirationInterval=_inMemoryExpirationInterval - In the implementation block
@property (assign,nonatomic) unsigned long long inMemoryCacheSizeLimit;              //@synthesize inMemoryCacheSizeLimit=_inMemoryCacheSizeLimit - In the implementation block
@property (assign,nonatomic) unsigned long long onDiskCacheSizeLimit;                //@synthesize onDiskCacheSizeLimit=_onDiskCacheSizeLimit - In the implementation block
-(unsigned long long)inMemoryCacheSizeLimit;
-(unsigned long long)onDiskCacheSizeLimit;
-(BOOL)useFileManager;
-(void)setUseFileManager:(BOOL)arg1 ;
-(BOOL)wipeInMemoryCacheOnMemoryWarning;
-(void)setWipeInMemoryCacheOnMemoryWarning:(BOOL)arg1 ;
-(double)inMemoryExpirationInterval;
-(void)setInMemoryExpirationInterval:(double)arg1 ;
-(void)setInMemoryCacheSizeLimit:(unsigned long long)arg1 ;
-(void)setOnDiskCacheSizeLimit:(unsigned long long)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
