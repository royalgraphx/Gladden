/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <SpriteKit/SKScene.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextView, SKSpriteNode, SKNode, ActionButton, SKLabelNode, AvatarNode, SKCropNode, SKMultilineLabel, MessagesViewController, UITextField, NSString;

@interface SettingsScene : SKScene <UITextViewDelegate, UITextFieldDelegate> {

	int time;
	UITextView* textView;
	SKSpriteNode* black;
	SKNode* unlock_screen;
	ActionButton* unlock_button;
	ActionButton* restore_button;
	ActionButton* privacy_button;
	SKSpriteNode* unlock_sprite;
	SKSpriteNode* unlock_line;
	SKLabelNode* unlock_loading;
	SKLabelNode* unlock_text;
	AvatarNode* unlock_avatar1;
	AvatarNode* unlock_avatar2;
	AvatarNode* unlock_avatar3;
	SKNode* picker;
	SKCropNode* picker_mask;
	SKSpriteNode* picker_top;
	SKSpriteNode* picker_ring;
	SKSpriteNode* picker_ring2;
	SKLabelNode* restore_loading;
	SKNode* screen;
	SKNode* buttons;
	ActionButton* sound_button;
	ActionButton* music_button;
	ActionButton* send_button;
	BOOL landscape;
	BOOL contentCreated;
	CGSize stageSize;
	float ratio;
	SKMultilineLabel* send_tip;
	SKLabelNode* editor_soon;
	SKNode* selected;
	MessagesViewController* main;
	SKNode* editor;
	AvatarNode* avatar;
	SKSpriteNode* editor_arrow;
	SKSpriteNode* category1;
	SKSpriteNode* category2;
	SKSpriteNode* category3;
	SKSpriteNode* category4;
	SKSpriteNode* category5;
	SKSpriteNode* category6;
	CGPoint touchPos;
	SKCropNode* area1;
	SKCropNode* area2;
	SKNode* scroll1;
	SKNode* scroll2;
	SKSpriteNode* crop1;
	SKSpriteNode* crop2;
	int category;
	CGPoint last_touch;
	BOOL scrolled;
	UITextField* myTextField;
	NSString* from;

}

@property (retain) NSString * from; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)createSceneContents;
-(void)buttonUp;
-(void)buttonCancel;
-(void)touchDownAtPoint:(CGPoint)arg1 ;
-(void)touchMovedToPoint:(CGPoint)arg1 ;
-(void)touchUpAtPoint:(CGPoint)arg1 ;
-(void)hideUnlock;
-(void)buyAvatars;
-(void)restoreAvatars;
-(void)showUnlock;
-(void)setMain:(id)arg1 ;
-(void)avatarsUnlocked;
-(void)updateUnlock;
-(void)showUnlock2;
-(float)brightness:(id)arg1 ;
-(void)setSound;
-(void)setMusic;
-(void)goPrivacy;
-(void)setCategory3;
-(void)setPickerColor:(id)arg1 ;
-(void)setAvatarColor:(id)arg1 ;
-(void)setCategory1;
-(void)setCategory2;
-(void)setCategory4;
-(void)setCategory5;
-(void)setCategory6;
-(void)setSend;
-(void)setCategory:(int)arg1 ;
-(NSString *)from;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)didMoveToView:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)update:(double)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)setFrom:(NSString *)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(id)playSound:(id)arg1 ;
-(void)buttonDown;
-(void)didChangeSize:(CGSize)arg1 ;
-(void)resize;
-(void)keyboardWillBeHidden:(id)arg1 ;
-(void)updateButtons;
@end

