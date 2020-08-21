/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/OMIDAdcolonyAdSessionDelegate.h>

@class NSPointerArray, NSMutableArray, NSArray, NSString;

@interface OMIDAdcolonyAdSessionRegistry : NSObject <OMIDAdcolonyAdSessionDelegate> {

	NSPointerArray* _adSessions;
	NSMutableArray* _activeAdSessions;
	NSMutableArray* _observers;

}

@property (nonatomic,readonly) NSArray * adSessions; 
@property (nonatomic,readonly) NSArray * activeAdSessions; 
@property (nonatomic,readonly) NSArray * observers; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getInstance;
-(void)addAdSession:(id)arg1 ;
-(void)adSession:(id)arg1 didRegisterAdView:(id)arg2 ;
-(void)adSessionDidStart:(id)arg1 ;
-(void)adSessionDidFinish:(id)arg1 ;
-(NSArray *)activeAdSessions;
-(void)removeAdSession:(id)arg1 ;
-(NSArray *)adSessions;
-(id)init;
-(BOOL)isActive;
-(NSArray *)observers;
-(void)addStateObserver:(id)arg1 ;
@end

