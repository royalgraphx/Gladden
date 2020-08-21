/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IMResizeProperties : NSObject {

	BOOL _allowOffScreen;
	long long _width;
	long long _height;
	long long _offsetX;
	long long _offsetY;
	NSString* _closeButtonPosition;

}

@property (assign,nonatomic) long long width;                             //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) long long height;                            //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) long long offsetX;                           //@synthesize offsetX=_offsetX - In the implementation block
@property (assign,nonatomic) long long offsetY;                           //@synthesize offsetY=_offsetY - In the implementation block
@property (assign,nonatomic) BOOL allowOffScreen;                         //@synthesize allowOffScreen=_allowOffScreen - In the implementation block
@property (nonatomic,retain) NSString * closeButtonPosition;              //@synthesize closeButtonPosition=_closeButtonPosition - In the implementation block
-(BOOL)allowOffScreen;
-(NSString *)closeButtonPosition;
-(void)setAllowOffScreen:(BOOL)arg1 ;
-(void)setCloseButtonPosition:(NSString *)arg1 ;
-(id)init;
-(long long)width;
-(long long)height;
-(void)setWidth:(long long)arg1 ;
-(void)setHeight:(long long)arg1 ;
-(long long)offsetX;
-(long long)offsetY;
-(void)fromDictionary:(id)arg1 ;
-(void)setOffsetX:(long long)arg1 ;
-(void)setOffsetY:(long long)arg1 ;
@end
