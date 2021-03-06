/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface IMDeviceVolumeManager : NSObject {

	BOOL _shouldUpdateVolume;
	NSMutableSet* _schemes;

}

@property (nonatomic,retain) NSMutableSet * schemes;               //@synthesize schemes=_schemes - In the implementation block
@property (assign,nonatomic) BOOL shouldUpdateVolume;              //@synthesize shouldUpdateVolume=_shouldUpdateVolume - In the implementation block
-(int)getDeviceVolumeWithPublisherVolumeControl:(BOOL)arg1 ;
-(BOOL)shouldUpdateVolume;
-(id)javascriptForVolumeChangeWithPublisherVolumeControl:(BOOL)arg1 ;
-(void)addSchemeForVolumeChange:(id)arg1 ;
-(void)removeSchemeForVolumeChange:(id)arg1 ;
-(void)setShouldUpdateVolume:(BOOL)arg1 ;
-(void)setSchemes:(NSMutableSet *)arg1 ;
-(id)init;
-(NSMutableSet *)schemes;
@end

