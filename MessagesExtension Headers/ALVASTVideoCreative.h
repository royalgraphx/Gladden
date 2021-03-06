/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessagesExtension/MessagesExtension-Structs.h>
@class NSArray, NSURL, NSMutableSet, NSMutableDictionary;

@interface ALVASTVideoCreative : NSObject {

	double _duration;
	NSArray* _videoFiles;
	NSURL* _destinationURL;
	NSMutableSet* _clickTrackers;
	NSMutableDictionary* _eventTrackers;

}

@property (assign,nonatomic) double duration;                                  //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSArray * videoFiles;                             //@synthesize videoFiles=_videoFiles - In the implementation block
@property (nonatomic,retain) NSURL * destinationURL;                           //@synthesize destinationURL=_destinationURL - In the implementation block
@property (nonatomic,retain) NSMutableSet * clickTrackers;                     //@synthesize clickTrackers=_clickTrackers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * eventTrackers;              //@synthesize eventTrackers=_eventTrackers - In the implementation block
+(id)videoCreativeFromXMLNode:(id)arg1 withExistingVideoCreative:(id)arg2 context:(id)arg3 usingSDK:(id)arg4 ;
+(double)timeIntervalDurationFromDurationString:(id)arg1 ;
+(id)videoFilesFromXMLNode:(id)arg1 context:(id)arg2 usingSDK:(id)arg3 ;
+(BOOL)validateVideoFileExtension:(id)arg1 withSupportedMimeTypes:(id)arg2 context:(id)arg3 sdk:(id)arg4 ;
-(id)videoFileToUseForPolicy:(unsigned long long)arg1 ;
-(NSMutableSet *)clickTrackers;
-(void)setClickTrackers:(NSMutableSet *)arg1 ;
-(NSArray *)videoFiles;
-(void)setVideoFiles:(NSArray *)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(NSURL *)destinationURL;
-(NSMutableDictionary *)eventTrackers;
-(void)setEventTrackers:(NSMutableDictionary *)arg1 ;
@end

