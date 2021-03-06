/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <MessagesExtension/MPVASTCompanionAdProvider.h>

@class NSArray, NSURL, NSString, MPVASTDurationOffset, NSDictionary;

@interface MPVideoConfig : NSObject <MPVASTCompanionAdProvider> {

	BOOL _isRewarded;
	BOOL _enableEarlyClickthroughForNonRewardedVideo;
	NSArray* _mediaFiles;
	NSURL* _clickThroughURL;
	NSString* _callToActionButtonTitle;
	NSArray* _industryIcons;
	MPVASTDurationOffset* _skipOffset;
	NSArray* _companionAds;
	NSDictionary* _trackingEventTable;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) MPVASTDurationOffset * skipOffset;                            //@synthesize skipOffset=_skipOffset - In the implementation block
@property (nonatomic,retain) NSArray * companionAds;                                       //@synthesize companionAds=_companionAds - In the implementation block
@property (nonatomic,retain) NSDictionary * trackingEventTable;                            //@synthesize trackingEventTable=_trackingEventTable - In the implementation block
@property (nonatomic,readonly) NSArray * mediaFiles;                                       //@synthesize mediaFiles=_mediaFiles - In the implementation block
@property (nonatomic,readonly) NSURL * clickThroughURL;                                    //@synthesize clickThroughURL=_clickThroughURL - In the implementation block
@property (nonatomic,readonly) NSString * callToActionButtonTitle;                         //@synthesize callToActionButtonTitle=_callToActionButtonTitle - In the implementation block
@property (nonatomic,readonly) NSArray * industryIcons;                                    //@synthesize industryIcons=_industryIcons - In the implementation block
@property (assign,nonatomic) BOOL isRewarded;                                              //@synthesize isRewarded=_isRewarded - In the implementation block
@property (assign,nonatomic) BOOL enableEarlyClickthroughForNonRewardedVideo;              //@synthesize enableEarlyClickthroughForNonRewardedVideo=_enableEarlyClickthroughForNonRewardedVideo - In the implementation block
-(NSURL *)clickThroughURL;
-(NSArray *)companionAds;
-(void)setCompanionAds:(NSArray *)arg1 ;
-(MPVASTDurationOffset *)skipOffset;
-(void)setSkipOffset:(MPVASTDurationOffset *)arg1 ;
-(id)initWithVASTResponse:(id)arg1 additionalTrackers:(id)arg2 ;
-(void)setIsRewarded:(BOOL)arg1 ;
-(BOOL)enableEarlyClickthroughForNonRewardedVideo;
-(void)setEnableEarlyClickthroughForNonRewardedVideo:(BOOL)arg1 ;
-(NSArray *)industryIcons;
-(id)trackingEventsForKey:(id)arg1 ;
-(BOOL)isRewarded;
-(BOOL)hasCompanionAd;
-(NSString *)callToActionButtonTitle;
-(id)companionAdForContainerSize:(CGSize)arg1 ;
-(void)commonInit:(id)arg1 additionalTrackers:(id)arg2 ;
-(NSDictionary *)trackingEventTable;
-(id)playbackCandidatesFromVASTResponse:(id)arg1 ;
-(id)mergeTrackersOfName:(id)arg1 originalTrackers:(id)arg2 additionalTrackers:(id)arg3 ;
-(void)setTrackingEventTable:(NSDictionary *)arg1 ;
-(id)extensionFromInlineAd:(id)arg1 forKey:(id)arg2 ;
-(id)trackingEventsFromWrapper:(id)arg1 ;
-(id)dictionaryByMergingTrackingDictionaries:(id)arg1 ;
-(id)clickTrackingURLsFromWrapper:(id)arg1 ;
-(id)customClickURLsFromWrapper:(id)arg1 ;
-(id)industryIconsFromWrapper:(id)arg1 ;
-(id)firstObjectForKey:(id)arg1 inDictionary:(id)arg2 ;
-(NSArray *)mediaFiles;
@end

