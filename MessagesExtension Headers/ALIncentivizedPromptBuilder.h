/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ALIncentivizedPromptBuilder : NSObject {

	NSString* _title;
	NSString* _message;
	NSString* _rejectedText;
	NSString* _acceptedText;

}

@property (nonatomic,copy) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                   //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * rejectedText;              //@synthesize rejectedText=_rejectedText - In the implementation block
@property (nonatomic,copy) NSString * acceptedText;              //@synthesize acceptedText=_acceptedText - In the implementation block
-(void)setRejectedText:(NSString *)arg1 ;
-(void)setAcceptedText:(NSString *)arg1 ;
-(NSString *)rejectedText;
-(NSString *)acceptedText;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
@end
