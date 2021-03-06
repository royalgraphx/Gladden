/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MPVASTModel.h>

@class NSArray, NSURL, MPVASTResponse;

@interface MPVASTWrapper : MPVASTModel {

	NSArray* _creatives;
	NSArray* _errorURLs;
	NSArray* _extensions;
	NSArray* _impressionURLs;
	NSURL* _VASTAdTagURI;
	MPVASTResponse* _wrappedVASTResponse;

}

@property (nonatomic,retain) MPVASTResponse * wrappedVASTResponse;              //@synthesize wrappedVASTResponse=_wrappedVASTResponse - In the implementation block
@property (nonatomic,readonly) NSArray * creatives;                             //@synthesize creatives=_creatives - In the implementation block
@property (nonatomic,readonly) NSArray * errorURLs;                             //@synthesize errorURLs=_errorURLs - In the implementation block
@property (nonatomic,readonly) NSArray * extensions;                            //@synthesize extensions=_extensions - In the implementation block
@property (nonatomic,readonly) NSArray * impressionURLs;                        //@synthesize impressionURLs=_impressionURLs - In the implementation block
@property (nonatomic,copy,readonly) NSURL * VASTAdTagURI;                       //@synthesize VASTAdTagURI=_VASTAdTagURI - In the implementation block
+(id)modelMap;
-(NSArray *)creatives;
-(NSArray *)errorURLs;
-(NSURL *)VASTAdTagURI;
-(void)setWrappedVASTResponse:(MPVASTResponse *)arg1 ;
-(MPVASTResponse *)wrappedVASTResponse;
-(NSArray *)impressionURLs;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)extensions;
@end

