/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/FBAdSyncBundle.h>

@protocol OS_dispatch_queue;
@class NSString, FBAdSyncBundlePayload, NSObject, NSHashTable;

@interface FBAdSyncBundleImpl : NSObject <FBAdSyncBundle> {

	BOOL _ready;
	NSString* _bundleId;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSHashTable* _delegates;
	FBAdSyncBundlePayload* _internalPayload;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> notificationQueue;              //@synthesize notificationQueue=_notificationQueue - In the implementation block
@property (readonly) NSHashTable * delegates;                                               //@synthesize delegates=_delegates - In the implementation block
@property (getter=isReady) BOOL ready;                                                      //@synthesize ready=_ready - In the implementation block
@property (copy) FBAdSyncBundlePayload * internalPayload;                                   //@synthesize internalPayload=_internalPayload - In the implementation block
@property (copy) FBAdSyncBundlePayload * payload; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long bundleType; 
@property (nonatomic,copy,readonly) NSString * bundleId;                                    //@synthesize bundleId=_bundleId - In the implementation block
-(id)initWithBundleId:(id)arg1 notificationQueue:(id)arg2 ;
-(void)notifyAboutChanges;
-(FBAdSyncBundlePayload *)internalPayload;
-(void)setInternalPayload:(FBAdSyncBundlePayload *)arg1 ;
-(BOOL)isReady;
-(long long)bundleType;
-(NSString *)bundleId;
-(void)setPayload:(FBAdSyncBundlePayload *)arg1 ;
-(FBAdSyncBundlePayload *)payload;
-(NSObject*<OS_dispatch_queue>)notificationQueue;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)setReady:(BOOL)arg1 ;
-(NSHashTable *)delegates;
@end
