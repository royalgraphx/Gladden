/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBAdLogger : NSObject
+(void)logAtLevel:(int)arg1 file:(const char*)arg2 lineNumber:(int)arg3 format:(id)arg4 ;
+(void)logInTestModeWithFile:(const char*)arg1 lineNumber:(int)arg2 format:(id)arg3 ;
+(void)initialize;
+(/*^block*/id)logger;
+(void)setLogger:(/*^block*/id)arg1 ;
@end

