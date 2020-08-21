/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/IMVastObject.h>

@class NSMutableDictionary, NSArray, NSString, NSNumber;

@interface IMVastCompanion : IMVastObject {

	NSMutableDictionary* _resourceDict;
	NSArray* _trackers;
	NSArray* _companionClickTrackers;
	NSString* _companionClickThrough;
	NSNumber* _width;
	NSNumber* _height;
	NSString* _companionID;

}

@property (nonatomic,retain) NSMutableDictionary * resourceDict;              //@synthesize resourceDict=_resourceDict - In the implementation block
@property (nonatomic,retain) NSArray * trackers;                              //@synthesize trackers=_trackers - In the implementation block
@property (nonatomic,retain) NSArray * companionClickTrackers;                //@synthesize companionClickTrackers=_companionClickTrackers - In the implementation block
@property (nonatomic,retain) NSString * companionClickThrough;                //@synthesize companionClickThrough=_companionClickThrough - In the implementation block
@property (nonatomic,retain) NSNumber * width;                                //@synthesize width=_width - In the implementation block
@property (nonatomic,retain) NSNumber * height;                               //@synthesize height=_height - In the implementation block
@property (nonatomic,retain) NSString * companionID;                          //@synthesize companionID=_companionID - In the implementation block
+(id)getKeyForResourceType:(unsigned long long)arg1 ;
-(NSString *)companionID;
-(BOOL)hasCompanionResourceOfType:(unsigned long long)arg1 ;
-(NSMutableDictionary *)resourceDict;
-(void)setCompanionClickTrackers:(NSArray *)arg1 ;
-(NSArray *)companionClickTrackers;
-(NSString *)companionClickThrough;
-(void)setCompanionClickThrough:(NSString *)arg1 ;
-(id)getValueForResourceType:(unsigned long long)arg1 ;
-(id)fetchURLsFromArray:(id)arg1 ;
-(void)setCompanionID:(NSString *)arg1 ;
-(void)setResourceDict:(NSMutableDictionary *)arg1 ;
-(void)setTrackers:(NSArray *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSNumber *)width;
-(NSNumber *)height;
-(void)setWidth:(NSNumber *)arg1 ;
-(void)setHeight:(NSNumber *)arg1 ;
-(NSArray *)trackers;
@end
