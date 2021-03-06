/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, FBAdLabel;

@interface FBAdStarRatingView : UIView {

	NSArray* _starViews;
	NSArray* _starFillViews;
	FBAdLabel* _ratingCountLabel;

}

@property (nonatomic,copy) NSArray * starViews;                         //@synthesize starViews=_starViews - In the implementation block
@property (nonatomic,copy) NSArray * starFillViews;                     //@synthesize starFillViews=_starFillViews - In the implementation block
@property (nonatomic,retain) FBAdLabel * ratingCountLabel;              //@synthesize ratingCountLabel=_ratingCountLabel - In the implementation block
-(id)initWithRating:(id)arg1 ratingCount:(id)arg2 ;
-(void)setupViewWithRating:(id)arg1 ratingCount:(id)arg2 ;
-(NSArray *)starFillViews;
-(void)setStarFillViews:(NSArray *)arg1 ;
-(FBAdLabel *)ratingCountLabel;
-(void)setRatingCountLabel:(FBAdLabel *)arg1 ;
-(CGSize)intrinsicContentSize;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setStarViews:(NSArray *)arg1 ;
-(NSArray *)starViews;
@end

