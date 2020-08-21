/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, OMIDAdcolonyAdSessionRegistry;

@interface OMIDAdcolonyStatePublisher : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _previousState;
	OMIDAdcolonyAdSessionRegistry* _adSessionRegistry;

}

@property (nonatomic,readonly) NSMutableDictionary * previousState;                            //@synthesize previousState=_previousState - In the implementation block
@property (nonatomic,readonly) OMIDAdcolonyAdSessionRegistry * adSessionRegistry;              //@synthesize adSessionRegistry=_adSessionRegistry - In the implementation block
-(id)initWithAdSessionRegistry:(id)arg1 ;
-(void)publishState:(id)arg1 toSessions:(id)arg2 timestamp:(double)arg3 ;
-(OMIDAdcolonyAdSessionRegistry *)adSessionRegistry;
-(void)publishNativeViewStateHierarchy:(id)arg1 toSessions:(id)arg2 timestamp:(double)arg3 ;
-(void)publishEmptyStateHierarchy:(id)arg1 toSessions:(id)arg2 timestamp:(double)arg3 ;
-(void)publishEmptyStateToSessions:(id)arg1 timestamp:(double)arg2 ;
-(NSMutableDictionary *)previousState;
-(void)cleanupCache;
@end

