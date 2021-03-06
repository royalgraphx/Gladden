/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/FNFTimer.h>

@protocol OS_dispatch_source;
@class NSObject, NSString;

@interface FNFRealTimer : NSObject <FNFTimer> {

	NSObject*<OS_dispatch_source> _timer;
	BOOL _suspended;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithInterval:(unsigned long long)arg1 fireOnce:(BOOL)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)dealloc;
-(void)pause;
-(void)resume;
@end

