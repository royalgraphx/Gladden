/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray, NSString, NSNumber;

@interface AdColonyUserMetadata : NSObject {

	NSMutableDictionary* _metadata;
	long long _userAge;
	NSArray* _userInterests;
	NSString* _userGender;
	NSNumber* _userLatitude;
	NSNumber* _userLongitude;
	NSString* _userZipCode;
	NSNumber* _userHouseholdIncome;
	NSString* _userMaritalStatus;
	NSString* _userEducationLevel;

}

@property (assign,nonatomic) long long userAge;                           //@synthesize userAge=_userAge - In the implementation block
@property (nonatomic,retain) NSArray * userInterests;                     //@synthesize userInterests=_userInterests - In the implementation block
@property (nonatomic,retain) NSString * userGender;                       //@synthesize userGender=_userGender - In the implementation block
@property (nonatomic,retain) NSNumber * userLatitude;                     //@synthesize userLatitude=_userLatitude - In the implementation block
@property (nonatomic,retain) NSNumber * userLongitude;                    //@synthesize userLongitude=_userLongitude - In the implementation block
@property (nonatomic,retain) NSString * userZipCode;                      //@synthesize userZipCode=_userZipCode - In the implementation block
@property (nonatomic,retain) NSNumber * userHouseholdIncome;              //@synthesize userHouseholdIncome=_userHouseholdIncome - In the implementation block
@property (nonatomic,retain) NSString * userMaritalStatus;                //@synthesize userMaritalStatus=_userMaritalStatus - In the implementation block
@property (nonatomic,retain) NSString * userEducationLevel;               //@synthesize userEducationLevel=_userEducationLevel - In the implementation block
-(void)setUserAge:(long long)arg1 ;
-(void)setUserInterests:(NSArray *)arg1 ;
-(void)setUserGender:(NSString *)arg1 ;
-(void)setUserLatitude:(NSNumber *)arg1 ;
-(void)setUserLongitude:(NSNumber *)arg1 ;
-(void)setUserZipCode:(NSString *)arg1 ;
-(void)setUserHouseholdIncome:(NSNumber *)arg1 ;
-(void)setUserMaritalStatus:(NSString *)arg1 ;
-(void)setUserEducationLevel:(NSString *)arg1 ;
-(BOOL)setMetadataWithKey:(id)arg1 andStringValue:(id)arg2 ;
-(BOOL)setMetadataWithKey:(id)arg1 andNumericValue:(id)arg2 ;
-(BOOL)setMetadataWithKey:(id)arg1 andArrayValue:(id)arg2 ;
-(id)getStringMetadataWithKey:(id)arg1 ;
-(id)getNumericMetadataWithKey:(id)arg1 ;
-(id)getArrayMetadataWithKey:(id)arg1 ;
-(long long)userAge;
-(NSArray *)userInterests;
-(NSString *)userGender;
-(NSNumber *)userLatitude;
-(NSNumber *)userLongitude;
-(NSString *)userZipCode;
-(NSNumber *)userHouseholdIncome;
-(NSString *)userMaritalStatus;
-(NSString *)userEducationLevel;
-(id)init;
-(id)getData;
@end
