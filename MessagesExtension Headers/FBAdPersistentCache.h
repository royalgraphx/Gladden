/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAdPersistentCache
@required
-(id)assetInMemoryForKey:(id)arg1;
-(BOOL)storeAssetInMemory:(id)arg1 forKey:(id)arg2 expiration:(id)arg3;
-(void)wipeCache;
-(id)storageURLForCache;
-(void)assetForKey:(id)arg1 ofType:(long long)arg2 resultHandler:(/*^block*/id)arg3;
-(void)assetForKey:(id)arg1 remoteURL:(id)arg2 ofType:(long long)arg3 context:(id)arg4 resultHandler:(/*^block*/id)arg5;
-(BOOL)storeAssetWithData:(id)arg1 forKey:(id)arg2 ofType:(long long)arg3;
-(id)storageURLForAssetWithKey:(id)arg1 ofType:(long long)arg2;

@end

