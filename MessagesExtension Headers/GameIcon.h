/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, AVAudioPlayer, NSString, NSData, UIImageView, FLAnimatedImageView, UILabel, UIView;

@interface GameIcon : UIView {

	int last_frame;
	int dir;
	UIColor* color;
	AVAudioPlayer* button_down;
	AVAudioPlayer* button_up;
	AVAudioPlayer* button_cancel;
	CGPoint tap_origin;
	int sound_frames;
	NSString* icon_name;
	int time;
	NSData* gif_data;
	BOOL loading_image;
	UIImageView* new_icon;
	BOOL settings;
	BOOL game;
	BOOL _subfolder;
	NSString* name;
	FLAnimatedImageView* icon;
	UIImageView* play;
	NSString* _id;
	UIImageView* icon_tint;
	UIImageView* icon_shadow;
	UIImageView* crown;
	UILabel* crown_label;
	UILabel* crown_label2;
	UIView* iconView;
	UILabel* name_label;
	GameIcon* _folder;
	FLAnimatedImageView* _icon2;
	FLAnimatedImageView* _icon3;

}

@property (__weak) GameIcon * folder;                        //@synthesize folder=_folder - In the implementation block
@property (assign) BOOL subfolder;                           //@synthesize subfolder=_subfolder - In the implementation block
@property (retain) UILabel * name_label; 
@property (assign) BOOL game; 
@property (assign) BOOL settings; 
@property (retain) NSString * name; 
@property (retain) NSString * _id;                           //@synthesize id=_id - In the implementation block
@property (retain) UIImageView * icon_shadow; 
@property (retain) FLAnimatedImageView * icon; 
@property (retain) FLAnimatedImageView * icon2;              //@synthesize icon2=_icon2 - In the implementation block
@property (retain) FLAnimatedImageView * icon3;              //@synthesize icon3=_icon3 - In the implementation block
@property (retain) UIView * iconView; 
@property (retain) UIImageView * icon_tint; 
@property (retain) UIImageView * play; 
@property (retain) UIImageView * crown; 
@property (retain) UILabel * crown_label; 
@property (retain) UILabel * crown_label2; 
-(id)initWithName:(id)arg1 icon:(id)arg2 id:(id)arg3 game:(BOOL)arg4 ;
-(id)initWithName:(id)arg1 icon:(id)arg2 id:(id)arg3 game:(BOOL)arg4 color:(id)arg5 ;
-(void)loadAnimation:(BOOL)arg1 ;
-(void)setSounds:(id)arg1 up:(id)arg2 cancel:(id)arg3 ;
-(void)hidePlay;
-(id)initWithName:(id)arg1 icon:(id)arg2 id:(id)arg3 ;
-(void)normal_font;
-(void)big_font;
-(void)setNewIcon:(BOOL)arg1 ;
-(void)set_id:(NSString *)arg1 ;
-(UIImageView *)icon_tint;
-(void)setIcon_tint:(UIImageView *)arg1 ;
-(UIImageView *)icon_shadow;
-(void)setIcon_shadow:(UIImageView *)arg1 ;
-(UIImageView *)crown;
-(void)setCrown:(UIImageView *)arg1 ;
-(UILabel *)crown_label;
-(void)setCrown_label:(UILabel *)arg1 ;
-(UILabel *)crown_label2;
-(void)setCrown_label2:(UILabel *)arg1 ;
-(UILabel *)name_label;
-(void)setName_label:(UILabel *)arg1 ;
-(BOOL)subfolder;
-(void)setSubfolder:(BOOL)arg1 ;
-(FLAnimatedImageView *)icon2;
-(void)setIcon2:(FLAnimatedImageView *)arg1 ;
-(FLAnimatedImageView *)icon3;
-(void)setIcon3:(FLAnimatedImageView *)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(BOOL)settings;
-(void)setSettings:(BOOL)arg1 ;
-(void)update;
-(UIImageView *)play;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)viewDidLoad;
-(FLAnimatedImageView *)icon;
-(void)setIcon:(FLAnimatedImageView *)arg1 ;
-(UIView *)iconView;
-(void)setIconView:(UIView *)arg1 ;
-(GameIcon *)folder;
-(void)setFolder:(GameIcon *)arg1 ;
-(NSString *)_id;
-(BOOL)game;
-(void)setGame:(BOOL)arg1 ;
-(void)light;
-(void)setWins:(int)arg1 ;
-(void)showPlay;
-(void)dark;
-(void)setPlay:(UIImageView *)arg1 ;
@end

