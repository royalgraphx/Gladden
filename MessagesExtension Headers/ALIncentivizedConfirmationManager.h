/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ALSdk, NSString;

@interface ALIncentivizedConfirmationManager : NSObject {

	ALSdk* sdk;
	NSString* result;

}

@property (nonatomic,retain) ALSdk * sdk; 
@property (nonatomic,retain) NSString * result; 
-(void)setSdk:(ALSdk *)arg1 ;
-(ALSdk *)sdk;
-(id)initWithSdk:(id)arg1 result:(id)arg2 ;
-(void)presentConfirmationToUser;
-(id)confirmationTextFromResult;
-(NSString *)result;
-(void)setResult:(NSString *)arg1 ;
@end

