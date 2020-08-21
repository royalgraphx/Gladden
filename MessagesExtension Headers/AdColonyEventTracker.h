/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface AdColonyEventTracker : NSObject {

	unsigned long long _eventQueueIndex;
	NSMutableArray* _eventQueue;

}
+(id)privateInstance;
+(void)logQueuedEvents;
+(void)logEvent:(id)arg1 withDictionary:(id)arg2 ;
+(void)logTransactionWithID:(id)arg1 quantity:(long long)arg2 price:(id)arg3 currencyCode:(id)arg4 receipt:(id)arg5 store:(id)arg6 description:(id)arg7 ;
+(void)logCreditsSpentWithName:(id)arg1 quantity:(long long)arg2 value:(id)arg3 currencyCode:(id)arg4 ;
+(void)logPaymentInfoAdded;
+(void)logAchievementUnlocked:(id)arg1 ;
+(void)logLevelAchieved:(long long)arg1 ;
+(void)logAppRated;
+(void)logActivated;
+(void)logTutorialCompleted;
+(void)logSocialSharingEventWithNetwork:(id)arg1 description:(id)arg2 ;
+(void)logRegistrationCompletedWithMethod:(id)arg1 description:(id)arg2 ;
+(void)logCustomEvent:(id)arg1 description:(id)arg2 ;
+(void)logAddToCartWithID:(id)arg1 ;
+(void)logAddToWishlistWithID:(id)arg1 ;
+(void)logCheckoutInitiated;
+(void)logContentViewWithID:(id)arg1 contentType:(id)arg2 ;
+(void)logInvite;
+(void)logLoginWithMethod:(id)arg1 ;
+(void)logReservation;
+(void)logSearchWithQuery:(id)arg1 ;
-(id)init;
@end
