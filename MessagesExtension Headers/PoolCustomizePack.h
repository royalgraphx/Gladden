/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessagesExtension/MessagesExtension-Structs.h>
@class SKNode, SKLabelNode, NSMutableArray, NSString;

@interface PoolCustomizePack : NSObject {

	BOOL _unlocked;
	SKNode* _container;
	SKLabelNode* _label;
	NSMutableArray* _ids;
	NSMutableArray* _items;
	NSString* _store_id;
	CGPoint _original_position;

}

@property (retain) SKNode * container;                     //@synthesize container=_container - In the implementation block
@property (retain) SKLabelNode * label;                    //@synthesize label=_label - In the implementation block
@property (retain) NSMutableArray * ids;                   //@synthesize ids=_ids - In the implementation block
@property (retain) NSMutableArray * items;                 //@synthesize items=_items - In the implementation block
@property (retain) NSString * store_id;                    //@synthesize store_id=_store_id - In the implementation block
@property (assign) CGPoint original_position;              //@synthesize original_position=_original_position - In the implementation block
@property (assign) BOOL unlocked;                          //@synthesize unlocked=_unlocked - In the implementation block
-(NSString *)store_id;
-(void)setStore_id:(NSString *)arg1 ;
-(CGPoint)original_position;
-(void)setOriginal_position:(CGPoint)arg1 ;
-(id)init;
-(SKNode *)container;
-(void)setContainer:(SKNode *)arg1 ;
-(void)setName:(id)arg1 ;
-(NSMutableArray *)ids;
-(void)setLabel:(SKLabelNode *)arg1 ;
-(SKLabelNode *)label;
-(BOOL)unlocked;
-(void)setUnlocked:(BOOL)arg1 ;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(void)setIds:(NSMutableArray *)arg1 ;
@end
