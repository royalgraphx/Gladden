/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSArray;

@interface IMCoreAdSettings : NSObject <NSCoding, NSCopying> {

	BOOL _hasRewards;
	BOOL _isDebug;
	BOOL _hasDynamic;
	BOOL _autoRefresh;
	BOOL _onWindow;
	long long _intType;
	NSString* _imAccountId;
	NSString* _asAppId;
	long long _imPlacement;
	NSString* _asPlacement;
	NSString* _requestId;
	NSDictionary* _pubKeys;
	NSString* _userId;
	NSArray* _dtbAdResponses;
	NSString* _keywords;
	NSDictionary* _extras;
	double _refreshInterval;
	double _preinitBannerRefresh;
	long long _animationType;

}

@property (assign,nonatomic) long long intType;                        //@synthesize intType=_intType - In the implementation block
@property (nonatomic,retain) NSString * imAccountId;                   //@synthesize imAccountId=_imAccountId - In the implementation block
@property (nonatomic,retain) NSString * asAppId;                       //@synthesize asAppId=_asAppId - In the implementation block
@property (assign,nonatomic) long long imPlacement;                    //@synthesize imPlacement=_imPlacement - In the implementation block
@property (nonatomic,retain) NSString * asPlacement;                   //@synthesize asPlacement=_asPlacement - In the implementation block
@property (nonatomic,retain) NSString * requestId;                     //@synthesize requestId=_requestId - In the implementation block
@property (assign,nonatomic) BOOL hasRewards;                          //@synthesize hasRewards=_hasRewards - In the implementation block
@property (assign,nonatomic) BOOL isDebug;                             //@synthesize isDebug=_isDebug - In the implementation block
@property (nonatomic,retain) NSDictionary * pubKeys;                   //@synthesize pubKeys=_pubKeys - In the implementation block
@property (nonatomic,retain) NSString * userId;                        //@synthesize userId=_userId - In the implementation block
@property (nonatomic,retain) NSArray * dtbAdResponses;                 //@synthesize dtbAdResponses=_dtbAdResponses - In the implementation block
@property (assign,nonatomic) BOOL hasDynamic;                          //@synthesize hasDynamic=_hasDynamic - In the implementation block
@property (nonatomic,retain) NSString * keywords;                      //@synthesize keywords=_keywords - In the implementation block
@property (nonatomic,retain) NSDictionary * extras;                    //@synthesize extras=_extras - In the implementation block
@property (assign,nonatomic) BOOL autoRefresh;                         //@synthesize autoRefresh=_autoRefresh - In the implementation block
@property (assign,nonatomic) double refreshInterval;                   //@synthesize refreshInterval=_refreshInterval - In the implementation block
@property (assign,nonatomic) BOOL onWindow;                            //@synthesize onWindow=_onWindow - In the implementation block
@property (assign,nonatomic) double preinitBannerRefresh;              //@synthesize preinitBannerRefresh=_preinitBannerRefresh - In the implementation block
@property (assign,nonatomic) long long animationType;                  //@synthesize animationType=_animationType - In the implementation block
-(NSString *)asPlacement;
-(long long)imPlacement;
-(long long)intType;
-(void)setExtras:(NSDictionary *)arg1 ;
-(NSDictionary *)pubKeys;
-(NSString *)imAccountId;
-(double)preinitBannerRefresh;
-(BOOL)autoRefresh;
-(void)setAutoRefresh:(BOOL)arg1 ;
-(NSString *)asAppId;
-(BOOL)hasRewards;
-(NSArray *)dtbAdResponses;
-(void)setIntType:(long long)arg1 ;
-(void)setAsAppId:(NSString *)arg1 ;
-(void)setImAccountId:(NSString *)arg1 ;
-(void)setAsPlacement:(NSString *)arg1 ;
-(void)setImPlacement:(long long)arg1 ;
-(void)setPreinitBannerRefresh:(double)arg1 ;
-(void)setHasRewards:(BOOL)arg1 ;
-(void)setPubKeys:(NSDictionary *)arg1 ;
-(void)setDtbAdResponses:(NSArray *)arg1 ;
-(id)initForIntegration:(long long)arg1 andPlacement:(id)arg2 ;
-(id)initForIntegration:(long long)arg1 accountId:(id)arg2 siteId:(id)arg3 withPlacementInfo:(id)arg4 ;
-(long long)primaryPlacementll;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)keywords;
-(void)setKeywords:(NSString *)arg1 ;
-(NSString *)requestId;
-(long long)animationType;
-(void)setAnimationType:(long long)arg1 ;
-(double)refreshInterval;
-(id)primaryPlacement;
-(NSDictionary *)extras;
-(void)setRequestId:(NSString *)arg1 ;
-(NSString *)userId;
-(void)setUserId:(NSString *)arg1 ;
-(BOOL)hasDynamic;
-(void)setHasDynamic:(BOOL)arg1 ;
-(void)setRefreshInterval:(double)arg1 ;
-(BOOL)isDebug;
-(void)setIsDebug:(BOOL)arg1 ;
-(void)setOnWindow:(BOOL)arg1 ;
-(BOOL)onWindow;
@end

