/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, IMAdsModel, ASTrackingEvent, ASTransactionInfo, NSDictionary;

@interface ASAdProvider : NSObject {

	long long _state;
	NSString* _key;
	IMAdsModel* _model;
	ASTrackingEvent* _webViewRendered;
	ASTransactionInfo* _transInfo;
	NSDictionary* _vcRewards;

}

@property (assign,nonatomic) long long state;                                //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * key;                                 //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) IMAdsModel * model;                             //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) ASTrackingEvent * webViewRendered;              //@synthesize webViewRendered=_webViewRendered - In the implementation block
@property (nonatomic,retain) ASTransactionInfo * transInfo;                  //@synthesize transInfo=_transInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * vcRewards;                       //@synthesize vcRewards=_vcRewards - In the implementation block
-(id)getAdunit;
-(void)playAd;
-(void)pauseAd;
-(ASTransactionInfo *)transInfo;
-(void)sendServerSideVirtualCurrencyCallback;
-(id)getRewards;
-(ASTrackingEvent *)webViewRendered;
-(void)readRenderedEventFromMediatedAd:(id)arg1 ;
-(void)createTransactionInfoWith:(id)arg1 ;
-(void)createRewardsWith:(id)arg1 ;
-(void)setVcRewards:(NSDictionary *)arg1 ;
-(void)setTransInfo:(ASTransactionInfo *)arg1 ;
-(void)setWebViewRendered:(ASTrackingEvent *)arg1 ;
-(NSDictionary *)vcRewards;
-(id)initWithIMAdManager:(id)arg1 ads:(id)arg2 ;
-(id)transactionObj;
-(id)init;
-(void)dealloc;
-(NSString *)key;
-(void)cancel;
-(long long)state;
-(void)setKey:(NSString *)arg1 ;
-(void)setState:(long long)arg1 ;
-(IMAdsModel *)model;
-(void)setModel:(IMAdsModel *)arg1 ;
@end

