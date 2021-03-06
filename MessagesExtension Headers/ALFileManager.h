/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ALSdk, NSObject, ALLogManager, NSArray;

@interface ALFileManager : NSObject {

	ALSdk* _sdk;
	NSObject* _fileSystemLock;

}

@property (readonly) unsigned long long fileTTL; 
@property (readonly) unsigned long long maximumCacheSize; 
@property (nonatomic,retain) ALSdk * sdk;                              //@synthesize sdk=_sdk - In the implementation block
@property (retain) NSObject * fileSystemLock;                          //@synthesize fileSystemLock=_fileSystemLock - In the implementation block
@property (__weak,readonly) ALLogManager * logManager; 
@property (__weak,readonly) NSArray * allCachedFilePaths; 
-(void)setSdk:(ALSdk *)arg1 ;
-(ALSdk *)sdk;
-(ALLogManager *)logManager;
-(id)initWithSdk:(id)arg1 ;
-(BOOL)cacheResourceWithData:(id)arg1 atURL:(id)arg2 ;
-(BOOL)resourceExistAtPath:(id)arg1 ;
-(id)cacheHTMLString:(id)arg1 useTemporaryDirectory:(BOOL)arg2 ;
-(id)filePathForResourceNamed:(id)arg1 ;
-(void)setFileSystemLock:(NSObject *)arg1 ;
-(NSObject *)fileSystemLock;
-(NSArray *)allCachedFilePaths;
-(id)filePathForResourceNamed:(id)arg1 useTemporaryDirectory:(BOOL)arg2 ;
-(id)urlStringForResourceNamed:(id)arg1 useTemporaryDirectory:(BOOL)arg2 ;
-(id)resourceAtPath:(id)arg1 ;
-(id)urlStringForResourceNamed:(id)arg1 ;
-(id)urlForResourceNamed:(id)arg1 ;
-(id)fileSizeForResourceNamed:(id)arg1 useTemporaryDirectory:(BOOL)arg2 ;
-(BOOL)hasCachedResourceNamed:(id)arg1 inTemporaryDirectory:(BOOL)arg2 ;
-(id)allCachedFileNames;
-(BOOL)removeExistingFileAtPath:(id)arg1 ;
-(BOOL)cacheResourceWithData:(id)arg1 named:(id)arg2 useTemporaryDirectory:(BOOL)arg3 ;
-(BOOL)removeExistingFileNamed:(id)arg1 ;
-(unsigned long long)cacheSizeAfterDroppingExpiredFiles;
-(void)dropCacheIfRequired:(unsigned long long)arg1 ;
-(unsigned long long)fileTTL;
-(unsigned long long)bytesToMegabytes:(unsigned long long)arg1 ;
-(void)dropCache;
-(void)compactCache;
-(unsigned long long)maximumCacheSize;
@end

