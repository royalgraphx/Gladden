/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/ADCContainerDelegate.h>

@class NSString;

@interface ADCContainerAPI : NSObject <ADCContainerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)privateAPI;
+(BOOL)createWithDict:(id)arg1 andModuleID:(unsigned long long)arg2 ;
+(BOOL)destroyWithDict:(id)arg1 andModuleID:(unsigned long long)arg2 ;
+(void)container:(id)arg1 touchesBegan:(id)arg2 inView:(id)arg3 completion:(/*^block*/id)arg4 ;
+(void)container:(id)arg1 touchesMoved:(id)arg2 inView:(id)arg3 completion:(/*^block*/id)arg4 ;
+(void)container:(id)arg1 touchesEnded:(id)arg2 inView:(id)arg3 completion:(/*^block*/id)arg4 ;
+(void)container:(id)arg1 touchesCancelled:(id)arg2 inView:(id)arg3 completion:(/*^block*/id)arg4 ;
+(void)containerResized:(id)arg1 completion:(/*^block*/id)arg2 ;
+(BOOL)moveViewToIndexWithDict:(id)arg1 andModuleID:(unsigned long long)arg2 ;
+(BOOL)moveViewToFrontWithDict:(id)arg1 andModuleID:(unsigned long long)arg2 ;
+(void)backgroundWithDict:(id)arg1 andModuleID:(unsigned long long)arg2 ;
-(void)container:(id)arg1 touchesBegan:(id)arg2 inView:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)container:(id)arg1 touchesMoved:(id)arg2 inView:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)container:(id)arg1 touchesEnded:(id)arg2 inView:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)container:(id)arg1 touchesCancelled:(id)arg2 inView:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)containerResized:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)container:(id)arg1 touches:(id)arg2 inView:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)container:(id)arg1 touchesBegan:(id)arg2 inView:(id)arg3 ;
-(void)container:(id)arg1 touchesMoved:(id)arg2 inView:(id)arg3 ;
-(void)container:(id)arg1 touchesEnded:(id)arg2 inView:(id)arg3 ;
-(void)container:(id)arg1 touchesCancelled:(id)arg2 inView:(id)arg3 ;
-(void)containerResized:(id)arg1 ;
@end
