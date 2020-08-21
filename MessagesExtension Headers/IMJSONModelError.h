/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSError.h>

@class NSHTTPURLResponse, NSData;

@interface IMJSONModelError : NSError {

	NSHTTPURLResponse* _httpResponse;
	NSData* _responseData;

}

@property (nonatomic,retain) NSHTTPURLResponse * httpResponse;              //@synthesize httpResponse=_httpResponse - In the implementation block
@property (nonatomic,retain) NSData * responseData;                         //@synthesize responseData=_responseData - In the implementation block
+(id)errorInputIsNil;
+(id)errorBadJSON;
+(id)errorInvalidDataWithMessage:(id)arg1 ;
+(id)errorModelIsInvalid;
+(id)errorInvalidDataWithMissingKeys:(id)arg1 ;
+(id)errorInvalidDataWithTypeMismatch:(id)arg1 ;
+(id)errorBadResponse;
-(id)errorByPrependingKeyPathComponent:(id)arg1 ;
-(void)setHttpResponse:(NSHTTPURLResponse *)arg1 ;
-(NSHTTPURLResponse *)httpResponse;
-(NSData *)responseData;
-(void)setResponseData:(NSData *)arg1 ;
@end

