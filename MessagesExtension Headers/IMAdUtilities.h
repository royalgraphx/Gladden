/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessagesExtension/MessagesExtension-Structs.h>
@interface IMAdUtilities : NSObject
+(int)getStatusBarHeight;
+(id)topmostViewController:(id)arg1 ;
+(id)rootLevelResponderForView:(id)arg1 ;
+(double)colorComponentFrom:(id)arg1 start:(unsigned long long)arg2 length:(unsigned long long)arg3 ;
+(id)statusWithCode:(long long)arg1 withDescription:(id)arg2 ;
+(id)getEncodedDictionary:(id)arg1 ;
+(CGContextRef)newContextWithWidth:(float)arg1 andHeight:(float)arg2 ;
+(CGRect)availableScreenRectForView:(id)arg1 ;
+(CGRect)availableScreenRect;
+(id)topmostView:(id)arg1 ;
+(id)statusFromErrorCode:(int)arg1 withDescription:(id)arg2 ;
+(id)getDisplayMap;
+(unsigned long long)convertAdsErrorToTelemtryEventError:(int)arg1 ;
+(unsigned long long)convertRequestStatusCodeToTelemetryEventError:(long long)arg1 ;
+(id)replaceTimeStampMacroInUrl:(id)arg1 showTime:(unsigned long long)arg2 loadTime:(unsigned long long)arg3 ;
+(BOOL)trackerEventTypeValidation:(id)arg1 eventType:(id)arg2 forKey:(id)arg3 ;
+(BOOL)urlValidation:(id)arg1 forKey:(id)arg2 ;
+(void)appendTrackerParams:(id)arg1 toUrl:(id)arg2 ;
+(BOOL)isLocationValid:(double)arg1 longitude:(double)arg2 ;
+(unsigned)random8DigitNum;
+(id)createMuteButtonImageWithSize:(CGSize)arg1 WithMute:(BOOL)arg2 ;
+(CGSize)screenSize;
+(id)colorWithHexString:(id)arg1 ;
+(id)topmostViewController;
@end

