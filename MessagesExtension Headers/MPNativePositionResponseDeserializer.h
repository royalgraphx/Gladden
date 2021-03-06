/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MPNativePositionResponseDeserializer : NSObject
+(id)deserializer;
-(void)safeAssignError:(id*)arg1 code:(unsigned long long)arg2 description:(id)arg3 ;
-(void)safeAssignError:(id*)arg1 code:(unsigned long long)arg2 description:(id)arg3 underlyingError:(id)arg4 ;
-(id)parseFixedPositionsObject:(id)arg1 error:(id*)arg2 ;
-(long long)parseRepeatingIntervalObject:(id)arg1 error:(id*)arg2 ;
-(BOOL)validatePositionObject:(id)arg1 error:(id*)arg2 ;
-(long long)integerFromDictionary:(id)arg1 forKey:(id)arg2 defaultValue:(long long)arg3 ;
-(BOOL)validateRepeatingIntervalObject:(id)arg1 error:(id*)arg2 ;
-(id)deserializationErrorWithCode:(unsigned long long)arg1 userInfo:(id)arg2 ;
-(void)safeAssignError:(id*)arg1 code:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(id)clientPositioningForData:(id)arg1 error:(id*)arg2 ;
@end

