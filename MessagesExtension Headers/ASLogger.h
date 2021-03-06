/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ASLogger : NSObject {

	BOOL _shouldShowLogs;
	BOOL _shouldShowAsSystemLogs;

}

@property (assign,nonatomic) BOOL shouldShowLogs;                      //@synthesize shouldShowLogs=_shouldShowLogs - In the implementation block
@property (assign,nonatomic) BOOL shouldShowAsSystemLogs;              //@synthesize shouldShowAsSystemLogs=_shouldShowAsSystemLogs - In the implementation block
+(void)logStatement:(id)arg1 ;
+(void)onException:(id)arg1 ;
+(void)logs:(id)arg1 format:(id)arg2 arguments:(char*)arg3 ;
+(void)printLogString:(id)arg1 ;
+(id)logInstance;
+(void)internal:(id)arg1 ;
+(void)showLogsInSystem:(BOOL)arg1 ;
+(void)showLogs:(BOOL)arg1 ;
+(void)log:(id)arg1 ;
+(void)error:(id)arg1 ;
+(void)debug:(id)arg1 ;
-(BOOL)shouldShowAsSystemLogs;
-(BOOL)shouldShowLogs;
-(void)setShouldShowAsSystemLogs:(BOOL)arg1 ;
-(void)setShouldShowLogs:(BOOL)arg1 ;
@end

