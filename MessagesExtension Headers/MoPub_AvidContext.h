/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MoPub_AvidContext : NSObject

@property (nonatomic,readonly) NSString * bundleId; 
@property (nonatomic,readonly) NSString * avidVersion; 
@property (nonatomic,readonly) NSString * avidReleaseDate; 
@property (nonatomic,readonly) NSString * partnerName; 
+(id)sharedContext;
-(NSString *)avidVersion;
-(NSString *)avidReleaseDate;
-(NSString *)bundleId;
-(NSString *)partnerName;
@end

