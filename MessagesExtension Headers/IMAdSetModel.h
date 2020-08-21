/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/IMJSONModel.h>

@protocol IMAdsModel, IMOptional;
@class NSString, NSArray, NSNumber;

@interface IMAdSetModel : IMJSONModel {

	NSString* _adSetId;
	long long _expiry;
	NSArray*<IMAdsModel> _ads;
	NSNumber* _isAuctionClosed;
	NSString*<IMOptional> _adSetAuctionMeta;

}

@property (nonatomic,retain) NSString * adSetId;                                  //@synthesize adSetId=_adSetId - In the implementation block
@property (assign,nonatomic) long long expiry;                                    //@synthesize expiry=_expiry - In the implementation block
@property (nonatomic,retain) NSArray*<IMAdsModel> ads;                            //@synthesize ads=_ads - In the implementation block
@property (nonatomic,retain) NSNumber * isAuctionClosed;                          //@synthesize isAuctionClosed=_isAuctionClosed - In the implementation block
@property (nonatomic,retain) NSString*<IMOptional> adSetAuctionMeta;              //@synthesize adSetAuctionMeta=_adSetAuctionMeta - In the implementation block
-(NSNumber *)isAuctionClosed;
-(NSString *)adSetId;
-(void)setAds:(NSArray*<IMAdsModel>)arg1 ;
-(void)setAdSetId:(NSString *)arg1 ;
-(void)setIsAuctionClosed:(NSNumber *)arg1 ;
-(NSString*<IMOptional>)adSetAuctionMeta;
-(void)setAdSetAuctionMeta:(NSString*<IMOptional>)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)validate:(id*)arg1 ;
-(long long)expiry;
-(NSArray*<IMAdsModel>)ads;
-(void)setExpiry:(long long)arg1 ;
@end
