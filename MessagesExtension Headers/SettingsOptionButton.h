/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <UIKitCore/UIView.h>

@class AVAudioPlayer, UILabel, SettingsLineView, UIImageView, UIView;

@interface SettingsOptionButton : UIView {

	AVAudioPlayer* button_down;
	AVAudioPlayer* button_up;
	AVAudioPlayer* button_cancel;
	CGPoint tap_origin;
	CGPoint lock_offset;
	BOOL _active;
	BOOL selected;
	float min_width;
	float selected_width;
	float _new_size;
	UILabel* label;
	SettingsLineView* line;
	UIImageView* icon;
	UIView* container;
	UIImageView* dot;
	UIImageView* lock;
	UIView* content;

}

@property (retain) UIView * content; 
@property (retain) UIImageView * dot; 
@property (assign) float new_size;                       //@synthesize new_size=_new_size - In the implementation block
@property (assign) float min_width; 
@property (assign) float selected_width; 
@property (retain) SettingsLineView * line; 
@property (retain) UILabel * label; 
@property (retain) UIImageView * icon; 
@property (retain) UIView * container; 
@property (assign) BOOL selected; 
@property (retain) UIImageView * lock; 
-(id)initWithText:(id)arg1 size:(CGSize)arg2 ;
-(void)addLock:(CGPoint)arg1 ;
-(void)lay;
-(void)addLock;
-(float)min_width;
-(void)setMin_width:(float)arg1 ;
-(float)selected_width;
-(void)setSelected_width:(float)arg1 ;
-(float)new_size;
-(void)setNew_size:(float)arg1 ;
-(UIView *)container;
-(void)setContainer:(UIView *)arg1 ;
-(UIImageView *)lock;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(void)setLock:(UIImageView *)arg1 ;
-(void)inactive;
-(void)active;
-(UIView *)content;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(UIImageView *)icon;
-(void)setIcon:(UIImageView *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(void)setContent:(UIView *)arg1 ;
-(SettingsLineView *)line;
-(void)setLine:(SettingsLineView *)arg1 ;
-(void)addIcon:(id)arg1 ;
-(void)setDot:(UIImageView *)arg1 ;
-(UIImageView *)dot;
-(void)updateSize:(float)arg1 ;
@end
