/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessagesExtension/MessagesExtension-Structs.h>
@interface ADCContainerMPAPI : NSObject
+(void)registerHandlers;
+(void)load;
-(void)container:(id)arg1 touchesBegan:(id)arg2 inView:(id)arg3 ;
-(void)container:(id)arg1 touchesMoved:(id)arg2 inView:(id)arg3 ;
-(void)container:(id)arg1 touchesEnded:(id)arg2 inView:(id)arg3 ;
-(void)container:(id)arg1 touchesCancelled:(id)arg2 inView:(id)arg3 ;
-(void)containerResized:(id)arg1 ;
-(void)destroy:(SCD_Struct_AD13)arg1 ;
-(void)moveViewToIndex:(SCD_Struct_AD13)arg1 ;
-(void)moveViewToFront:(SCD_Struct_AD13)arg1 ;
-(void)background:(SCD_Struct_AD13)arg1 ;
-(void)create:(SCD_Struct_AD13)arg1 ;
@end

