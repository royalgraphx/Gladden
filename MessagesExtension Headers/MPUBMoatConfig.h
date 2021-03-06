/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MPUBMoatConfig : NSObject {

	BOOL isOn;
	BOOL isDebug;
	int vwIntervalMillis;

}

@property (assign) BOOL isOn; 
@property (assign) BOOL isDebug; 
@property (assign) int vwIntervalMillis; 
-(void)parseConfig:(id)arg1 ;
-(id)trim:(id)arg1 ;
-(BOOL)isOSBlacklisted:(id)arg1 ;
-(BOOL)isAppBlackListed:(id)arg1 ;
-(BOOL)isAppBlackListedForLocation:(id)arg1 ;
-(void)setIsOn:(BOOL)arg1 ;
-(void)setVwIntervalMillis:(int)arg1 ;
-(int)vwIntervalMillis;
-(BOOL)isOn;
-(id)initWithResponse:(id)arg1 ;
-(BOOL)isDebug;
-(void)setIsDebug:(BOOL)arg1 ;
@end

