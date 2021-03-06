/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ADCStoreKitManager : NSObject {

	NSMutableDictionary* _storeKits;

}

@property (nonatomic,retain) NSMutableDictionary * storeKits;              //@synthesize storeKits=_storeKits - In the implementation block
+(BOOL)inAppStoreKitEnabled;
+(void)updatePresentationSettings:(id)arg1 ;
+(void)openStoreWithMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)preloadStoreWithMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)cleanupForSession:(id)arg1 ;
+(id)sharedManager;
+(BOOL)isShowing;
-(BOOL)inAppStoreKitEnabled;
-(void)updatePresentationSettings:(id)arg1 ;
-(void)setStoreKits:(NSMutableDictionary *)arg1 ;
-(void)withModule:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)parseStoreUrl:(id)arg1 ;
-(void)parseProductInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)parseStoreInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)withSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)storeKits;
-(void)withProductInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)withProductController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)makeProductUrlWithMessage:(id)arg1 ;
-(void)fallbackOpenStoreWithMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareWithMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentWithMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cleanItemsForSession:(id)arg1 ;
-(id)init;
-(BOOL)isShowing;
-(id)initPrivate;
@end

