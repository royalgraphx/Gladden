/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBAdDSLConfiguration : NSObject {

	BOOL _warmupWebViewOnStart;
	BOOL _requireAllCreativesInDiskToShow;
	long long _maxNumberOfReloadWebViewAttemptsBeforeViewDidAppear;
	long long _maxNumberOfReloadWebViewAttemptsAfterViewDidAppear;
	long long _timeToleranceForReloadingWebViewAfterViewDidAppearMS;

}

@property (nonatomic,readonly) long long maxNumberOfReloadWebViewAttemptsBeforeViewDidAppear;               //@synthesize maxNumberOfReloadWebViewAttemptsBeforeViewDidAppear=_maxNumberOfReloadWebViewAttemptsBeforeViewDidAppear - In the implementation block
@property (nonatomic,readonly) long long maxNumberOfReloadWebViewAttemptsAfterViewDidAppear;                //@synthesize maxNumberOfReloadWebViewAttemptsAfterViewDidAppear=_maxNumberOfReloadWebViewAttemptsAfterViewDidAppear - In the implementation block
@property (nonatomic,readonly) long long timeToleranceForReloadingWebViewAfterViewDidAppearMS;              //@synthesize timeToleranceForReloadingWebViewAfterViewDidAppearMS=_timeToleranceForReloadingWebViewAfterViewDidAppearMS - In the implementation block
@property (nonatomic,readonly) BOOL warmupWebViewOnStart;                                                   //@synthesize warmupWebViewOnStart=_warmupWebViewOnStart - In the implementation block
@property (nonatomic,readonly) BOOL requireAllCreativesInDiskToShow;                                        //@synthesize requireAllCreativesInDiskToShow=_requireAllCreativesInDiskToShow - In the implementation block
-(id)initWithMaxNumberOfReloadBeforeWebViewDidAppear:(long long)arg1 MaxNumberOfReloadAfterWebViewDidAppear:(long long)arg2 timeToleranceForReloadAfterViewDidAppearMS:(long long)arg3 warmupWebViewOnStart:(BOOL)arg4 requireAllCreativesInDiskToShow:(BOOL)arg5 ;
-(long long)maxNumberOfReloadWebViewAttemptsBeforeViewDidAppear;
-(long long)maxNumberOfReloadWebViewAttemptsAfterViewDidAppear;
-(long long)timeToleranceForReloadingWebViewAfterViewDidAppearMS;
-(BOOL)warmupWebViewOnStart;
-(BOOL)requireAllCreativesInDiskToShow;
-(id)init;
@end

