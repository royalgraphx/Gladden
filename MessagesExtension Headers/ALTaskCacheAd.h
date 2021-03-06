/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/ALTask.h>

@protocol ALAdLoadDelegate;
@class ALDirectAd, ALCacheStatsTracker, ALFileManager;

@interface ALTaskCacheAd : ALTask {

	ALDirectAd* _ad;
	id<ALAdLoadDelegate> _adLoadDelegate;
	ALCacheStatsTracker* _cacheStatsTracker;

}

@property (nonatomic,retain) ALDirectAd * ad;                                      //@synthesize ad=_ad - In the implementation block
@property (nonatomic,retain) id<ALAdLoadDelegate> adLoadDelegate;                  //@synthesize adLoadDelegate=_adLoadDelegate - In the implementation block
@property (nonatomic,retain) ALCacheStatsTracker * cacheStatsTracker;              //@synthesize cacheStatsTracker=_cacheStatsTracker - In the implementation block
@property (nonatomic,readonly) ALFileManager * fileManager; 
-(id<ALAdLoadDelegate>)adLoadDelegate;
-(void)setAdLoadDelegate:(id<ALAdLoadDelegate>)arg1 ;
-(id)initWithSdk:(id)arg1 renderedAd:(id)arg2 adLoadDelegate:(id)arg3 ;
-(void)cacheMuteImages;
-(void)callbackAdLoadSuccessIfNeeded;
-(void)trackCachedStatsForAd:(id)arg1 ;
-(ALCacheStatsTracker *)cacheStatsTracker;
-(id)cacheResourceAtPath:(id)arg1 resourcePrefixes:(id)arg2 respectWhitelist:(BOOL)arg3 statsTracker:(id)arg4 useTemporaryDirectory:(BOOL)arg5 ;
-(id)cacheHTMLResources:(id)arg1 resourcePrefixes:(id)arg2 useTemporaryDirectory:(BOOL)arg3 ;
-(id)cacheStringResourceAtPath:(id)arg1 resourcePrefixes:(id)arg2 ;
-(id)cacheVideoIfNeeded:(id)arg1 ;
-(void)setCacheStatsTracker:(ALCacheStatsTracker *)arg1 ;
-(id)cacheResourceAtPath:(id)arg1 ;
-(id)cacheVideoIfNeeded:(id)arg1 resourcePrefixes:(id)arg2 respectWhitelist:(BOOL)arg3 ;
-(void)callbackAdLoadFailed;
-(id)cacheHTMLResource:(id)arg1 forPrefix:(id)arg2 useTemporaryDirectory:(BOOL)arg3 ;
-(BOOL)loadAndCacheResource:(id)arg1 forName:(id)arg2 resourcePrefixes:(id)arg3 respectWhitelist:(BOOL)arg4 statsTracker:(id)arg5 useTemporaryDirectory:(BOOL)arg6 ;
-(id)cacheStringResourceAtPath:(id)arg1 resourcePrefixes:(id)arg2 respectWhitelist:(BOOL)arg3 statsTracker:(id)arg4 ;
-(id)loadResourceAtPath:(id)arg1 resourcePrefixes:(id)arg2 respectWhitelist:(BOOL)arg3 ;
-(BOOL)cacheData:(id)arg1 forResourceName:(id)arg2 useTemporaryDirectory:(BOOL)arg3 ;
-(BOOL)isResponseSuccess:(id)arg1 ;
-(id)cacheHTMLResources:(id)arg1 resourcePrefixes:(id)arg2 ;
-(BOOL)loadAndCacheResource:(id)arg1 forName:(id)arg2 resourcePrefixes:(id)arg3 ;
-(ALFileManager *)fileManager;
-(ALDirectAd *)ad;
-(void)setAd:(ALDirectAd *)arg1 ;
@end

