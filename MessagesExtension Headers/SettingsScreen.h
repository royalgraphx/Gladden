/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <SpriteKit/SKView.h>

@class UIImageView, SettingsScene, SKScene;

@interface SettingsScreen : SKView {

	UIImageView* close;
	SettingsScene* skScene;
	SKScene* sscene;

}

@property (assign,nonatomic,__weak) SKScene * sscene; 
@property (retain) SettingsScene * skScene; 
@property (retain) UIImageView * close; 
-(void)setClose:(UIImageView *)arg1 ;
-(void)avatarsUnlocked;
-(id)initWithFrame:(CGRect)arg1 scene:(id)arg2 ;
-(void)closeTapGesture:(id)arg1 ;
-(SKScene *)sscene;
-(void)setSscene:(SKScene *)arg1 ;
-(UIImageView *)close;
-(void)setFrame:(CGRect)arg1 ;
-(void)setSkScene:(SettingsScene *)arg1 ;
-(SettingsScene *)skScene;
@end

