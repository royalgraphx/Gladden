/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessagesExtension/MessagesExtension-Structs.h>
@class NSURL, ALVASTNonVideoResource, NSMutableSet, NSMutableDictionary;

@interface ALVASTCompanionAd : NSObject {

	double _width;
	double _height;
	NSURL* _destinationURL;
	ALVASTNonVideoResource* _nonVideoResouce;
	NSMutableSet* _clickTrackers;
	NSMutableDictionary* _eventTrackers;

}

@property (assign,nonatomic) double width;                                          //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) double height;                                         //@synthesize height=_height - In the implementation block
@property (nonatomic,retain) NSURL * destinationURL;                                //@synthesize destinationURL=_destinationURL - In the implementation block
@property (nonatomic,retain) ALVASTNonVideoResource * nonVideoResouce;              //@synthesize nonVideoResouce=_nonVideoResouce - In the implementation block
@property (nonatomic,retain) NSMutableSet * clickTrackers;                          //@synthesize clickTrackers=_clickTrackers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * eventTrackers;                   //@synthesize eventTrackers=_eventTrackers - In the implementation block
+(id)companionAdFromXMLNode:(id)arg1 existingCompanionAd:(id)arg2 context:(id)arg3 usingSDK:(id)arg4 ;
-(ALVASTNonVideoResource *)nonVideoResouce;
-(NSMutableSet *)clickTrackers;
-(void)setClickTrackers:(NSMutableSet *)arg1 ;
-(void)setNonVideoResouce:(ALVASTNonVideoResource *)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)width;
-(double)height;
-(void)setWidth:(double)arg1 ;
-(void)setHeight:(double)arg1 ;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(NSURL *)destinationURL;
-(NSMutableDictionary *)eventTrackers;
-(void)setEventTrackers:(NSMutableDictionary *)arg1 ;
@end

