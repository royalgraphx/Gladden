/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/IMJSONModel.h>

@class NSArray, IMAdsConfigBitRate;

@interface IMAdsConfigVastVideoModel : IMJSONModel {

	long long _maxWrapperLimit;
	long long _vastMaxAssetSize;
	long long _optimalVastVideoSize;
	NSArray* _allowedContentType;
	IMAdsConfigBitRate* _bitRate;

}

@property (assign,nonatomic) long long maxWrapperLimit;                   //@synthesize maxWrapperLimit=_maxWrapperLimit - In the implementation block
@property (assign,nonatomic) long long vastMaxAssetSize;                  //@synthesize vastMaxAssetSize=_vastMaxAssetSize - In the implementation block
@property (assign,nonatomic) long long optimalVastVideoSize;              //@synthesize optimalVastVideoSize=_optimalVastVideoSize - In the implementation block
@property (nonatomic,retain) NSArray * allowedContentType;                //@synthesize allowedContentType=_allowedContentType - In the implementation block
@property (nonatomic,retain) IMAdsConfigBitRate * bitRate;                //@synthesize bitRate=_bitRate - In the implementation block
-(NSArray *)allowedContentType;
-(void)setAllowedContentType:(NSArray *)arg1 ;
-(long long)vastMaxAssetSize;
-(long long)maxWrapperLimit;
-(long long)optimalVastVideoSize;
-(void)setMaxWrapperLimit:(long long)arg1 ;
-(void)setVastMaxAssetSize:(long long)arg1 ;
-(void)setOptimalVastVideoSize:(long long)arg1 ;
-(id)init;
-(BOOL)validate:(id*)arg1 ;
-(IMAdsConfigBitRate *)bitRate;
-(void)setBitRate:(IMAdsConfigBitRate *)arg1 ;
@end

