/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, FBAdSyncBundlePayload;


@protocol FBAdSyncBundle <NSObject>
@property (nonatomic,readonly) long long bundleType; 
@property (nonatomic,copy,readonly) NSString * bundleId; 
@property (getter=isReady,readonly) BOOL ready; 
@property (copy,readonly) FBAdSyncBundlePayload * payload; 
@required
-(BOOL)isReady;
-(long long)bundleType;
-(NSString *)bundleId;
-(FBAdSyncBundlePayload *)payload;
-(void)addDelegate:(id)arg1;
-(void)removeDelegate:(id)arg1;

@end
