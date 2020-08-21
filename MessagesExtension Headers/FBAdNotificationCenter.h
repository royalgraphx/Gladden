/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface FBAdNotificationCenter : NSObject {

	NSMutableArray* _notifications;
	id _object;

}

@property (nonatomic,retain) NSMutableArray * notifications;              //@synthesize notifications=_notifications - In the implementation block
@property (assign,nonatomic,__weak) id object;                            //@synthesize object=_object - In the implementation block
+(void)setNotificationCenter:(id)arg1 forObject:(id)arg2 ;
+(id)notificationCenterForObject:(id)arg1 ;
+(id)notificationCenterForObject:(id)arg1 update:(BOOL)arg2 ;
+(void)removeAllObserversForObject:(id)arg1 ;
+(void)initialize;
-(void)addNotificationWithName:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)addNotificationWithName:(id)arg1 object:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)addNotificationWithName:(id)arg1 object:(id)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(id)init;
-(void)dealloc;
-(id)object;
-(void)setObject:(id)arg1 ;
-(id)notificationCenter;
-(void)removeAllObservers;
-(NSMutableArray *)notifications;
-(void)setNotifications:(NSMutableArray *)arg1 ;
@end

