/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/IMNetworkDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSMutableArray, IMAssetCacheDAO, NSMutableDictionary;

@interface IMAssetCache : NSObject <IMNetworkDelegate> {

	NSString* _assetCacheDirectory;
	double _defaultExpiry;
	double _maximumCacheSize;
	long long _maxRetries;
	NSObject*<OS_dispatch_queue> _databaseQueue;
	NSMutableArray* _pendingRequests;
	IMAssetCacheDAO* _dao;
	NSMutableDictionary* _refCounts;
	unsigned long long _contentLength;

}

@property (nonatomic,retain) NSString * assetCacheDirectory;                          //@synthesize assetCacheDirectory=_assetCacheDirectory - In the implementation block
@property (assign,nonatomic) double defaultExpiry;                                    //@synthesize defaultExpiry=_defaultExpiry - In the implementation block
@property (assign,nonatomic) double maximumCacheSize;                                 //@synthesize maximumCacheSize=_maximumCacheSize - In the implementation block
@property (assign,nonatomic) long long maxRetries;                                    //@synthesize maxRetries=_maxRetries - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> databaseQueue;              //@synthesize databaseQueue=_databaseQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingRequests;                        //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (nonatomic,retain) IMAssetCacheDAO * dao;                                   //@synthesize dao=_dao - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * refCounts;                         //@synthesize refCounts=_refCounts - In the implementation block
@property (assign,nonatomic) unsigned long long contentLength;                        //@synthesize contentLength=_contentLength - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedCache;
-(void)setAssetCacheDirectory:(NSString *)arg1 ;
-(void)setDao:(IMAssetCacheDAO *)arg1 ;
-(IMAssetCacheDAO *)dao;
-(void)setRefCounts:(NSMutableDictionary *)arg1 ;
-(void)cleanupExpiredAssets;
-(void)cleanupRetries;
-(void)clearupCacheToMakeSize;
-(void)setDefaultExpiry:(double)arg1 ;
-(void)setMaximumCacheSize:(double)arg1 ;
-(NSString *)assetCacheDirectory;
-(BOOL)isBeingUsed:(id)arg1 ;
-(BOOL)deleteAssetAtPath:(id)arg1 ;
-(void)removeLRUAssetsForSize:(double)arg1 ;
-(id)createHashForString:(id)arg1 ;
-(void)addRequestData:(id)arg1 ;
-(id)tupleForKey:(id)arg1 fromTable:(id)arg2 ;
-(void)addToTableNoOfTries:(long long)arg1 forKey:(id)arg2 ;
-(void)downloadAsset:(id)arg1 ofFileType:(id)arg2 forContentTyep:(id)arg3 ;
-(void)sendSuccessCallbackForAsset:(id)arg1 toPath:(id)arg2 forURL:(id)arg3 withBlock:(/*^block*/id)arg4 ;
-(double)defaultExpiry;
-(void)addToCacheAsset:(id)arg1 withName:(id)arg2 expiry:(double)arg3 staleWhileRevalidate:(double)arg4 ;
-(void)sendCallbackForFileDownloadSucceededForAsset:(id)arg1 toPath:(id)arg2 forURL:(id)arg3 ;
-(id)requestDataForHashString:(id)arg1 ;
-(void)removeAssetFromCache:(id)arg1 atPath:(id)arg2 ;
-(void)sendCallbackForFileFetchFromCacheSucceededForAsset:(id)arg1 toPath:(id)arg2 forURL:(id)arg3 ;
-(id)requestDataForNsp:(id)arg1 ;
-(BOOL)validateContentLength:(long long)arg1 ;
-(BOOL)validateContentType:(id)arg1 forAllowedContentType:(id)arg2 ;
-(void)removeRequestDataFromPendingRequests:(id)arg1 ;
-(void)fileDownloadFailed:(id)arg1 ofFileType:(id)arg2 forURL:(id)arg3 forAllowedContentType:(id)arg4 withError:(id)arg5 shouldRetry:(BOOL)arg6 ;
-(id)fileExtensionFromFileType:(id)arg1 ;
-(BOOL)saveFileContent:(id)arg1 atPath:(id)arg2 ;
-(double)timeIntervalFromDateString:(id)arg1 ;
-(id)extractCacheControlHeader:(id)arg1 ;
-(void)fileDownloadSucceeded:(id)arg1 withName:(id)arg2 withExpiry:(double)arg3 staleWhileRevalidate:(double)arg4 forURL:(id)arg5 ;
-(void)networkServiceProvider:(id)arg1 request:(id)arg2 didGetResponse:(id)arg3 ;
-(void)networkServiceProvider:(id)arg1 request:(id)arg2 didGetHeaders:(id)arg3 ;
-(void)downloadAsset:(id)arg1 ofFileType:(id)arg2 forAllowedContentType:(id)arg3 withDelegate:(id)arg4 ;
-(void)deleteAssetForUrl:(id)arg1 ;
-(void)useURL:(id)arg1 withUserId:(id)arg2 ;
-(void)unuseURL:(id)arg1 withUserId:(id)arg2 ;
-(id)getCachedFileHash;
-(BOOL)checkIfFilePresentInCache:(id)arg1 ;
-(id)init;
-(void)stop;
-(void)start;
-(NSObject*<OS_dispatch_queue>)databaseQueue;
-(void)setDatabaseQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(double)cacheSize;
-(unsigned long long)contentLength;
-(NSMutableArray *)pendingRequests;
-(void)setPendingRequests:(NSMutableArray *)arg1 ;
-(void)setContentLength:(unsigned long long)arg1 ;
-(NSMutableDictionary *)refCounts;
-(void)setMaxRetries:(long long)arg1 ;
-(long long)maxRetries;
-(void)updateDefaults;
-(double)getDirectorySize:(id)arg1 ;
-(double)maximumCacheSize;
@end
