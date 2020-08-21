/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class NSArray, UIStackView;

@interface FBAdStoriesPageIndicator : UIView {

	NSArray* _items;
	UIStackView* _stackView;
	double _progress;

}

@property (nonatomic,copy) NSArray * items;                        //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;              //@synthesize stackView=_stackView - In the implementation block
@property (assign,nonatomic) double progress;                      //@synthesize progress=_progress - In the implementation block
-(void)configureWithProgress:(double)arg1 totalProgress:(double)arg2 ;
-(id)init;
-(double)progress;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)layoutSubviews;
-(UIStackView *)stackView;
-(void)setStackView:(UIStackView *)arg1 ;
-(void)setup;
@end
