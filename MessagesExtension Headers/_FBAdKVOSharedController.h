/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessagesExtension/MessagesExtension-Structs.h>
@class NSHashTable;

@interface _FBAdKVOSharedController : NSObject {

	NSHashTable* _infos;
	opaque_pthread_mutex_t _mutex;

}
+(id)sharedController;
-(id)init;
-(void)dealloc;
-(id)debugDescription;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)observe:(id)arg1 info:(id)arg2 ;
-(void)unobserve:(id)arg1 info:(id)arg2 ;
-(void)unobserve:(id)arg1 infos:(id)arg2 ;
@end

