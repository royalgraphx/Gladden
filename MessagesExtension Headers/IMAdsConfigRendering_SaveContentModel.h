/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/IMJSONModel.h>

@class NSArray;

@interface IMAdsConfigRendering_SaveContentModel : IMJSONModel {

	NSArray* _allowedContentType;
	long long _maxSaveSize;

}

@property (nonatomic,retain) NSArray * allowedContentType;              //@synthesize allowedContentType=_allowedContentType - In the implementation block
@property (assign,nonatomic) long long maxSaveSize;                     //@synthesize maxSaveSize=_maxSaveSize - In the implementation block
-(NSArray *)allowedContentType;
-(void)setAllowedContentType:(NSArray *)arg1 ;
-(long long)maxSaveSize;
-(void)setMaxSaveSize:(long long)arg1 ;
-(id)init;
-(BOOL)validate:(id*)arg1 ;
@end

