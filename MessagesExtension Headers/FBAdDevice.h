/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessagesExtension/MessagesExtension-Structs.h>
@interface FBAdDevice : NSObject
+(id)sharedLock;
+(void)initializeAndCacheValues;
+(unsigned)coreCount;
+(unsigned long long)adjustedFillRate;
+(FBAdDeviceBatteryInfo)deviceBatteryInfo;
+(unsigned long long)freeMemoryBytes;
+(unsigned long long)totalMemoryBytes;
+(unsigned long long)freeDiskBytes;
+(id)systemBuildNumber;
+(BOOL)systemVersionIsGreaterThanOrEqualTo:(id)arg1 ;
+(BOOL)systemVersionIsGreaterThanOrEqualToiOS10;
+(BOOL)systemVersionIsGreaterThanOrEqualToiOS11;
+(void)initialize;
+(id)systemVersion;
+(id)model;
+(id)systemName;
+(unsigned long long)deviceModel;
+(void)resetCache;
+(id)machineName;
+(id)architecture;
+(id)machine;
+(unsigned long long)freeDiskSpace;
@end

