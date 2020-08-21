/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/IMJSONModel.h>

@class NSNumber;

@interface IMTelemetryAssetReporting : IMJSONModel {

	NSNumber* _video;
	NSNumber* _image;
	NSNumber* _gif;

}

@property (nonatomic,retain) NSNumber * video;              //@synthesize video=_video - In the implementation block
@property (nonatomic,retain) NSNumber * image;              //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSNumber * gif;                //@synthesize gif=_gif - In the implementation block
-(NSNumber *)gif;
-(void)setGif:(NSNumber *)arg1 ;
-(id)init;
-(NSNumber *)image;
-(void)setImage:(NSNumber *)arg1 ;
-(BOOL)validate:(id*)arg1 ;
-(NSNumber *)video;
-(void)setVideo:(NSNumber *)arg1 ;
@end

