/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessagesExtension/MessagesExtension-Structs.h>
@interface FBAdPerformanceMetrics : NSObject
+(unsigned)coreCount;
+(unsigned long long)freeMemoryBytes;
+(unsigned long long)totalMemoryBytes;
+(unsigned long long)freeDiskBytes;
+(unsigned long long)residentMemoryBytes;
+(unsigned long long)virtualMemoryBytes;
+(NSRange)freeAndTotalDiskBytes;
+(void)initialize;
+(FBAdDeviceBatteryInfo)batteryInfo;
@end

