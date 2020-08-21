/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <MessagesExtension/ALLoadableObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ALAdZone, ALSdk, NSObject, NSMutableDictionary, ALDummyAd, NSString, NSNumber, ALAdSize, ALAdType;

@interface ALAd : NSObject <ALLoadableObject, NSCopying> {

	ALAdZone* _adZone;
	ALSdk* _sdk;
	NSObject* _adObjectLock;
	NSMutableDictionary* _adObject;
	NSMutableDictionary* _fullResponse;
	ALDummyAd* _dummyAd;
	unsigned long long _source;
	long long _createdAtMillis;

}

@property (assign,nonatomic,__weak) ALSdk * sdk;                              //@synthesize sdk=_sdk - In the implementation block
@property (nonatomic,retain) NSObject * adObjectLock;                         //@synthesize adObjectLock=_adObjectLock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * adObject;                  //@synthesize adObject=_adObject - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * fullResponse;              //@synthesize fullResponse=_fullResponse - In the implementation block
@property (nonatomic,readonly) ALAdZone * adZone;                             //@synthesize adZone=_adZone - In the implementation block
@property (nonatomic,copy,readonly) NSString * clcode; 
@property (nonatomic,retain) ALDummyAd * dummyAd;                             //@synthesize dummyAd=_dummyAd - In the implementation block
@property (nonatomic,readonly) long long mediationType; 
@property (assign,nonatomic) unsigned long long source;                       //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) NSString * primaryKey; 
@property (nonatomic,copy,readonly) NSString * secondaryKey1; 
@property (nonatomic,copy,readonly) NSString * secondaryKey2; 
@property (nonatomic,readonly) NSNumber * fetchLatencyMillis; 
@property (nonatomic,readonly) NSNumber * fetchResponseSize; 
@property (assign,nonatomic) long long createdAtMillis;                       //@synthesize createdAtMillis=_createdAtMillis - In the implementation block
@property (nonatomic,readonly) ALAdSize * size; 
@property (nonatomic,readonly) ALAdType * type; 
@property (nonatomic,copy,readonly) NSString * zoneIdentifier; 
@property (getter=isVideoAd,readonly) BOOL videoAd; 
@property (nonatomic,readonly) NSNumber * adIdNumber; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSdk:(ALSdk *)arg1 ;
-(ALSdk *)sdk;
-(ALAdZone *)adZone;
-(void)setAdObjectLock:(NSObject *)arg1 ;
-(void)setAdObject:(NSMutableDictionary *)arg1 ;
-(void)setFullResponse:(NSMutableDictionary *)arg1 ;
-(void)setCreatedAtMillis:(long long)arg1 ;
-(NSMutableDictionary *)adObject;
-(NSMutableDictionary *)fullResponse;
-(long long)mediationType;
-(NSObject *)adObjectLock;
-(NSNumber *)adIdNumber;
-(BOOL)isEqualToAd:(id)arg1 ;
-(id)initWithAdObject:(id)arg1 fullResponse:(id)arg2 source:(unsigned long long)arg3 sdk:(id)arg4 ;
-(id)adValueForKey:(id)arg1 ;
-(NSString *)clcode;
-(NSString *)secondaryKey1;
-(NSString *)secondaryKey2;
-(NSNumber *)fetchLatencyMillis;
-(NSNumber *)fetchResponseSize;
-(ALDummyAd *)dummyAd;
-(void)setDummyAd:(ALDummyAd *)arg1 ;
-(long long)createdAtMillis;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(ALAdType *)type;
-(void)setSource:(unsigned long long)arg1 ;
-(ALAdSize *)size;
-(unsigned long long)source;
-(id)numberForKey:(id)arg1 ;
-(NSString *)primaryKey;
-(NSString *)zoneIdentifier;
-(BOOL)isVideoAd;
-(BOOL)hasVideoURL;
-(id)numberForKey:(id)arg1 defaultValue:(id)arg2 ;
@end

