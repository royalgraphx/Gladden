/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface FBAdOnDeviceHistoryData : NSObject {

	NSMutableDictionary* _shownAdHistory;
	NSMutableDictionary* _xoutAdHistory;

}

@property (nonatomic,retain) NSMutableDictionary * shownAdHistory;              //@synthesize shownAdHistory=_shownAdHistory - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * xoutAdHistory;               //@synthesize xoutAdHistory=_xoutAdHistory - In the implementation block
-(id)deserializeHistoryDictionary:(id)arg1 ;
-(id)serializeHistoryDictionary:(id)arg1 ;
-(id)cappedAdList;
-(void)markAdAsShown:(id)arg1 cappingCount:(id)arg2 cappingPeriod:(id)arg3 ;
-(void)markAdAsXout:(id)arg1 xoutPeriod:(id)arg2 ;
-(NSMutableDictionary *)shownAdHistory;
-(void)setShownAdHistory:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)xoutAdHistory;
-(void)setXoutAdHistory:(NSMutableDictionary *)arg1 ;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)serialize;
@end

