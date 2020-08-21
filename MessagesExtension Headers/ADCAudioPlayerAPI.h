/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <libobjc.A.dylib/AVAudioPlayerDelegate.h>

@class NSString;

@interface ADCAudioPlayerAPI : NSObject <AVAudioPlayerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)registerHandlers;
+(void)load;
-(void)destroy:(SCD_Struct_AD13)arg1 ;
-(void)onAudioPlayerError:(unsigned long long)arg1 session:(id)arg2 ;
-(void)onAudioPlayerReady:(BOOL)arg1 playerID:(unsigned long long)arg2 session:(id)arg3 ;
-(void)handleAudioPlayerEvent:(id)arg1 event:(id)arg2 ;
-(void)audioPlayerBeginInterruption:(id)arg1 ;
-(void)audioPlayerEndInterruption:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(void)stop:(SCD_Struct_AD13)arg1 ;
-(void)play:(SCD_Struct_AD13)arg1 ;
-(void)pause:(SCD_Struct_AD13)arg1 ;
-(void)create:(SCD_Struct_AD13)arg1 ;
@end
