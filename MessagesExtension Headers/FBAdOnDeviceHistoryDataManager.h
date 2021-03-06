/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class FBAdOnDeviceHistoryData, NSObject;

@interface FBAdOnDeviceHistoryDataManager : NSObject {

	BOOL _isOnDeviceHistoryEnabled;
	BOOL _isReady;
	FBAdOnDeviceHistoryData* _onDeviceHistoryData;
	NSObject*<OS_dispatch_queue> _discWriteSerialQueue;

}

@property (nonatomic,retain) FBAdOnDeviceHistoryData * onDeviceHistoryData;                  //@synthesize onDeviceHistoryData=_onDeviceHistoryData - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> discWriteSerialQueue;              //@synthesize discWriteSerialQueue=_discWriteSerialQueue - In the implementation block
@property (assign,nonatomic) BOOL isOnDeviceHistoryEnabled;                                  //@synthesize isOnDeviceHistoryEnabled=_isOnDeviceHistoryEnabled - In the implementation block
@property (assign) BOOL isReady;                                                             //@synthesize isReady=_isReady - In the implementation block
-(id)cappedAdList;
-(void)markAdAsShown:(id)arg1 cappingCount:(id)arg2 cappingPeriod:(id)arg3 ;
-(void)markAdAsXout:(id)arg1 xoutPeriod:(id)arg2 ;
-(void)readHistoryFromDiscIfNeeded;
-(void)readHistoryFromDisc;
-(void)saveHistoryToDisc;
-(void)saveHistoryToDiscAsync;
-(BOOL)checkReady;
-(id)urlForOnDeviceHistory;
-(FBAdOnDeviceHistoryData *)onDeviceHistoryData;
-(void)setOnDeviceHistoryData:(FBAdOnDeviceHistoryData *)arg1 ;
-(NSObject*<OS_dispatch_queue>)discWriteSerialQueue;
-(void)setDiscWriteSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isOnDeviceHistoryEnabled;
-(void)setIsOnDeviceHistoryEnabled:(BOOL)arg1 ;
-(id)init;
-(BOOL)isReady;
-(void)setIsReady:(BOOL)arg1 ;
@end

