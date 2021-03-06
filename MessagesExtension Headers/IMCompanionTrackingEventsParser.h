/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/IMVastNodeBaseParser.h>

@class NSMutableArray, NSString;

@interface IMCompanionTrackingEventsParser : IMVastNodeBaseParser {

	NSMutableArray* _trackingEventsArray;
	NSString* _trackerID;

}

@property (nonatomic,retain) NSMutableArray * trackingEventsArray;              //@synthesize trackingEventsArray=_trackingEventsArray - In the implementation block
@property (nonatomic,retain) NSString * trackerID;                              //@synthesize trackerID=_trackerID - In the implementation block
+(id)parserElementName;
-(id)createParserForElement:(id)arg1 attributes:(id)arg2 ;
-(void)endParser:(id)arg1 ;
-(NSMutableArray *)trackingEventsArray;
-(void)setTrackerID:(NSString *)arg1 ;
-(NSString *)trackerID;
-(void)setTrackingEventsArray:(NSMutableArray *)arg1 ;
@end

