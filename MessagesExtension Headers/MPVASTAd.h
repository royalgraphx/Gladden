/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MPVASTModel.h>

@class NSString, MPVASTInline, MPVASTWrapper;

@interface MPVASTAd : MPVASTModel {

	NSString* _identifier;
	NSString* _sequence;
	MPVASTInline* _inlineAd;
	MPVASTWrapper* _wrapper;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * sequence;                //@synthesize sequence=_sequence - In the implementation block
@property (nonatomic,readonly) MPVASTInline * inlineAd;                 //@synthesize inlineAd=_inlineAd - In the implementation block
@property (nonatomic,readonly) MPVASTWrapper * wrapper;                 //@synthesize wrapper=_wrapper - In the implementation block
+(id)modelMap;
-(MPVASTInline *)inlineAd;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)sequence;
-(MPVASTWrapper *)wrapper;
@end
