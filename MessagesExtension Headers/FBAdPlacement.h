/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBAdPlacementDefinition, NSArray;

@interface FBAdPlacement : NSObject {

	long long _code;
	NSString* _message;
	FBAdPlacementDefinition* _definition;
	NSArray* _adCandidates;

}

@property (assign,nonatomic) long long code;                                    //@synthesize code=_code - In the implementation block
@property (nonatomic,copy) NSString * message;                                  //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) FBAdPlacementDefinition * definition;              //@synthesize definition=_definition - In the implementation block
@property (nonatomic,copy) NSArray * adCandidates;                              //@synthesize adCandidates=_adCandidates - In the implementation block
+(void)initialize;
-(id)initWithCode:(long long)arg1 message:(id)arg2 definition:(id)arg3 adCandidates:(id)arg4 ;
-(NSArray *)adCandidates;
-(void)setAdCandidates:(NSArray *)arg1 ;
-(long long)code;
-(FBAdPlacementDefinition *)definition;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setCode:(long long)arg1 ;
-(void)setDefinition:(FBAdPlacementDefinition *)arg1 ;
@end

