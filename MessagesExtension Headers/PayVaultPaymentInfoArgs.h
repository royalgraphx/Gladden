/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/ProtobufMessage.h>

@class NSString, NSMutableArray;

@interface PayVaultPaymentInfoArgs : NSObject <ProtobufMessage> {

	int cachedSize;
	int cachedSizeId;
	NSString* provider;
	NSMutableArray* purchaseArguments;
	NSMutableArray* items;

}

@property (retain) NSString * provider; 
@property (retain) NSMutableArray * purchaseArguments; 
@property (retain) NSMutableArray * items; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)payVaultPaymentInfoArgsWithProvider:(id)arg1 purchaseArguments:(id)arg2 items:(id)arg3 ;
-(void)serializeToWriter:(id)arg1 sizeCacheId:(int)arg2 ;
-(void)deserializeFromReader:(id)arg1 ;
-(int)sizeWithCacheId:(int)arg1 ;
-(id)initWithProvider:(id)arg1 purchaseArguments:(id)arg2 items:(id)arg3 ;
-(NSMutableArray *)purchaseArguments;
-(void)setPurchaseArguments:(NSMutableArray *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setProvider:(NSString *)arg1 ;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(NSString *)provider;
@end

