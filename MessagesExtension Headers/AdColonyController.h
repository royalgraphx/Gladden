/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface AdColonyController : NSObject {

	BOOL _testModeEnabled;
	int _initState;
	NSSet* _currentAllZoneIds;

}

@property (assign) int initState;                          //@synthesize initState=_initState - In the implementation block
@property (retain) NSSet * currentAllZoneIds;              //@synthesize currentAllZoneIds=_currentAllZoneIds - In the implementation block
@property (assign) BOOL testModeEnabled;                   //@synthesize testModeEnabled=_testModeEnabled - In the implementation block
+(void)initializeAdColonyCustomEventWithAppId:(id)arg1 allZoneIds:(id)arg2 userId:(id)arg3 callback:(/*^block*/id)arg4 ;
+(void)enableClientSideTestMode;
+(void)disableClientSideTestMode;
+(id)sharedInstance;
-(NSSet *)currentAllZoneIds;
-(int)initState;
-(void)setInitState:(int)arg1 ;
-(void)setCurrentAllZoneIds:(NSSet *)arg1 ;
-(id)init;
-(void)setTestModeEnabled:(BOOL)arg1 ;
-(BOOL)testModeEnabled;
@end

