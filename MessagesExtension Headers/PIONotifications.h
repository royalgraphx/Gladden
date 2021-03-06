/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PlayerIOChannel, NSString, NSArray;

@interface PIONotifications : NSObject {

	PlayerIOChannel* _channel;
	NSString* _version;
	NSArray* _myEndpoints;

}

@property (readonly) NSArray * myEndpoints;              //@synthesize myEndpoints=_myEndpoints - In the implementation block
-(void)refreshWithSuccessBlock:(/*^block*/id)arg1 errorBlock:(/*^block*/id)arg2 ;
-(void)refreshWithSuccessBlock:(/*^block*/id)arg1 ;
-(void)refreshedWithVersion:(id)arg1 endpoints:(id)arg2 ;
-(id)getWithEndpointType:(id)arg1 identifier:(id)arg2 ;
-(BOOL)areEqualWithFirst:(id)arg1 second:(id)arg2 ;
-(void)registerEndpointWithEndpointType:(id)arg1 identifier:(id)arg2 configuration:(id)arg3 enabled:(BOOL)arg4 successBlock:(/*^block*/id)arg5 errorBlock:(/*^block*/id)arg6 ;
-(id)convertToSystemNotifications:(id)arg1 ;
-(void)sendNotifications:(id)arg1 successBlock:(/*^block*/id)arg2 errorBlock:(/*^block*/id)arg3 ;
-(id)convertToEndpointIdArrayWith:(id)arg1 ;
-(void)deleteEndpoints:(id)arg1 successBlock:(/*^block*/id)arg2 errorBlock:(/*^block*/id)arg3 ;
-(void)toggleEndpoints:(id)arg1 enabled:(BOOL)arg2 successBlock:(/*^block*/id)arg3 errorBlock:(/*^block*/id)arg4 ;
-(id)convert:(id)arg1 ;
-(NSArray *)myEndpoints;
-(void)registerEndpointWithEndpointType:(id)arg1 identifier:(id)arg2 configuration:(id)arg3 enabled:(BOOL)arg4 ;
-(void)registerEndpointWithEndpointType:(id)arg1 identifier:(id)arg2 configuration:(id)arg3 enabled:(BOOL)arg4 successBlock:(/*^block*/id)arg5 ;
-(void)sendNotifications:(id)arg1 successBlock:(/*^block*/id)arg2 ;
-(void)deleteEndpoints:(id)arg1 ;
-(void)deleteEndpoints:(id)arg1 successBlock:(/*^block*/id)arg2 ;
-(void)toggleEndpoints:(id)arg1 enabled:(BOOL)arg2 ;
-(void)toggleEndpoints:(id)arg1 enabled:(BOOL)arg2 successBlock:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)refresh;
-(void)sendNotifications:(id)arg1 ;
-(id)initWithChannel:(id)arg1 ;
@end

