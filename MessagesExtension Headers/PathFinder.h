/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary;

@interface PathFinder : NSObject {

	int finX;
	int finY;
	NSMutableArray* level;
	NSMutableDictionary* openList;
	NSMutableDictionary* closedList;
	NSMutableArray* path;

}

@property (retain) NSMutableArray * path; 
+(id)go:(int)arg1 yIni:(int)arg2 xFin:(int)arg3 yFin:(int)arg4 lvlData:(id)arg5 ;
-(id)initWith:(int)arg1 yIni:(int)arg2 xFin:(int)arg3 yFin:(int)arg4 lvlData:(id)arg5 ;
-(void)SearchLevel;
-(void)RetracePath:(id)arg1 ;
-(NSMutableArray *)path;
-(void)setPath:(NSMutableArray *)arg1 ;
@end
