/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/GameSettings.h>

@class NSMutableArray, SettingsOptionPartition, SettingsOptionButton, SettingsCustomizeButton, NSString;

@interface ShuffleSettings : GameSettings {

	NSMutableArray* locks;
	SettingsOptionPartition* part2;
	SettingsOptionPartition* part1;
	SettingsOptionButton* option1;
	SettingsOptionButton* option2;
	SettingsOptionButton* option3;
	SettingsCustomizeButton* customize;
	NSString* map;

}

@property (retain) NSString * map; 
-(void)changeOption:(id)arg1 ;
-(void)Customize:(id)arg1 ;
-(id)init;
-(NSString *)map;
-(void)update;
-(void)setMap:(NSString *)arg1 ;
-(void)resize;
-(void)selectLanguage:(id)arg1 ;
@end

