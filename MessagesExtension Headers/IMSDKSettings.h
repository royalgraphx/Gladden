/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSNumber, IMAdsConfig;

@interface IMSDKSettings : NSObject {

	BOOL _inmobiMirrorPresent;
	BOOL _preinitLocationStatus;
	BOOL _preinitBssidStatus;
	BOOL _preinitCellStatus;
	NSString* _primaryAcctId;
	NSString* _secondaryAcctId;
	NSString* _appId;
	NSDictionary* _preinitExt;
	NSNumber* _muttTimeout;
	NSNumber* _renderTimeout;
	NSNumber* _showTimeout;
	NSNumber* _bitmapTimeout;
	NSNumber* _unifiedAuctionTimeout;
	IMAdsConfig* _adsConfig;

}

@property (assign,nonatomic) BOOL preinitLocationStatus;                    //@synthesize preinitLocationStatus=_preinitLocationStatus - In the implementation block
@property (assign,nonatomic) BOOL preinitBssidStatus;                       //@synthesize preinitBssidStatus=_preinitBssidStatus - In the implementation block
@property (assign,nonatomic) BOOL preinitCellStatus;                        //@synthesize preinitCellStatus=_preinitCellStatus - In the implementation block
@property (nonatomic,retain) NSDictionary * preinitExt;                     //@synthesize preinitExt=_preinitExt - In the implementation block
@property (nonatomic,retain) NSNumber * muttTimeout;                        //@synthesize muttTimeout=_muttTimeout - In the implementation block
@property (nonatomic,retain) NSNumber * renderTimeout;                      //@synthesize renderTimeout=_renderTimeout - In the implementation block
@property (nonatomic,retain) NSNumber * showTimeout;                        //@synthesize showTimeout=_showTimeout - In the implementation block
@property (nonatomic,retain) NSNumber * bitmapTimeout;                      //@synthesize bitmapTimeout=_bitmapTimeout - In the implementation block
@property (nonatomic,retain) NSNumber * unifiedAuctionTimeout;              //@synthesize unifiedAuctionTimeout=_unifiedAuctionTimeout - In the implementation block
@property (nonatomic,retain) IMAdsConfig * adsConfig;                       //@synthesize adsConfig=_adsConfig - In the implementation block
@property (nonatomic,retain) NSString * primaryAcctId;                      //@synthesize primaryAcctId=_primaryAcctId - In the implementation block
@property (nonatomic,retain) NSString * secondaryAcctId;                    //@synthesize secondaryAcctId=_secondaryAcctId - In the implementation block
@property (nonatomic,retain) NSString * appId;                              //@synthesize appId=_appId - In the implementation block
@property (assign,nonatomic) BOOL inmobiMirrorPresent;                      //@synthesize inmobiMirrorPresent=_inmobiMirrorPresent - In the implementation block
-(NSNumber *)renderTimeout;
-(void)setRenderTimeout:(NSNumber *)arg1 ;
-(id)extForAS;
-(id)muttTimeoutForAS;
-(id)renderingTimeoutForAS;
-(id)showTimeoutForAS;
-(id)unifiedAuctionTimeoutForAS;
-(NSString *)primaryAcctId;
-(NSString *)secondaryAcctId;
-(id)bitmapTimeoutForAS;
-(void)setAdsConfig:(IMAdsConfig *)arg1 ;
-(IMAdsConfig *)adsConfig;
-(void)readPreinitFromPersistance;
-(void)parsePreinitDictionary:(id)arg1 ;
-(void)setPrimaryAcctId:(NSString *)arg1 ;
-(BOOL)preinitLocationStatus;
-(BOOL)preinitBssidStatus;
-(BOOL)preinitCellStatus;
-(NSNumber *)muttTimeout;
-(NSNumber *)showTimeout;
-(NSNumber *)bitmapTimeout;
-(NSNumber *)unifiedAuctionTimeout;
-(NSDictionary *)preinitExt;
-(void)setSecondaryAcctId:(NSString *)arg1 ;
-(void)setPreinitExt:(NSDictionary *)arg1 ;
-(void)setPreinitLocationStatus:(BOOL)arg1 ;
-(void)setPreinitBssidStatus:(BOOL)arg1 ;
-(void)setPreinitCellStatus:(BOOL)arg1 ;
-(void)setBitmapTimeout:(NSNumber *)arg1 ;
-(void)setMuttTimeout:(NSNumber *)arg1 ;
-(void)setShowTimeout:(NSNumber *)arg1 ;
-(BOOL)checkIfASIntegrationHasInMobiMirrorForPlacements:(id)arg1 ;
-(void)setInmobiMirrorPresent:(BOOL)arg1 ;
-(long long)updateAppId:(id)arg1 ;
-(long long)updateAccountId:(id)arg1 ;
-(BOOL)locationStatusForAS;
-(BOOL)bssidStatusForAS;
-(BOOL)cellStatusForAS;
-(BOOL)inmobiMirrorPresent;
-(void)setUnifiedAuctionTimeout:(NSNumber *)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)appId;
-(void)setAppId:(NSString *)arg1 ;
-(void)handleNotification:(id)arg1 ;
@end
