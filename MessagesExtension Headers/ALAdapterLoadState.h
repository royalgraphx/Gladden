/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ALAdLoadDelegate;
@class ALMediatedAd, NSObject;

@interface ALAdapterLoadState : NSObject {

	BOOL _loadCompleted;
	ALMediatedAd* _mediatedAd;
	id<ALAdLoadDelegate> _adLoadDelegate;
	NSObject* _loadCompletedLock;

}

@property (nonatomic,retain) ALMediatedAd * mediatedAd;                        //@synthesize mediatedAd=_mediatedAd - In the implementation block
@property (nonatomic,retain) id<ALAdLoadDelegate> adLoadDelegate;              //@synthesize adLoadDelegate=_adLoadDelegate - In the implementation block
@property (nonatomic,retain) NSObject * loadCompletedLock;                     //@synthesize loadCompletedLock=_loadCompletedLock - In the implementation block
@property (assign,nonatomic) BOOL loadCompleted;                               //@synthesize loadCompleted=_loadCompleted - In the implementation block
-(id<ALAdLoadDelegate>)adLoadDelegate;
-(void)setAdLoadDelegate:(id<ALAdLoadDelegate>)arg1 ;
-(id)initWithMediatedAd:(id)arg1 adLoadDelegate:(id)arg2 ;
-(BOOL)checkAndSetLoadCompleted;
-(ALMediatedAd *)mediatedAd;
-(void)setMediatedAd:(ALMediatedAd *)arg1 ;
-(void)setLoadCompletedLock:(NSObject *)arg1 ;
-(NSObject *)loadCompletedLock;
-(BOOL)loadCompleted;
-(void)setLoadCompleted:(BOOL)arg1 ;
@end

