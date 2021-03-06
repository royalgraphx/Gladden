/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <SpriteKit/SKScene.h>

@class NSMutableArray, SKNode, SKSpriteNode, AnagramsStore, ActionButton, SKLabelNode, SKCropNode, SKMultilineLabel, MessagesViewController, AvatarNode, BeerCustomizeItem;

@interface WordgamesStoreScene : SKScene {

	NSMutableArray* packs;
	SKNode* preloader2;
	SKSpriteNode* preloader2_bg;
	SKSpriteNode* preloader2_indicator;
	int time;
	AnagramsStore* store;
	BOOL premium;
	SKSpriteNode* black;
	SKNode* unlock_screen;
	ActionButton* unlock_button;
	ActionButton* restore_button;
	SKSpriteNode* unlock_sprite;
	SKSpriteNode* unlock_line;
	SKLabelNode* unlock_loading;
	SKLabelNode* unlock_text;
	SKLabelNode* restore_loading;
	SKNode* screen;
	SKCropNode* buttons;
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
	int selected_buy;
	BeerCustomizeItem* selected_item;
	SKSpriteNode* unlock_node;
	float max_size;

}
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
-(void)purchaseComplete;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)didMoveToView:(id)arg1 ;
-(void)update:(double)arg1 ;
-(void)setup;
-(id)playSound:(id)arg1 ;
-(void)buttonDown;
-(void)didChangeSize:(CGSize)arg1 ;
-(void)resize;
@end

