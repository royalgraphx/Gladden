/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class FBAdReportingOptionsContentView, NSString, NSArray;

@interface FBAdReportingOptionsViewController : UIViewController {

	/*^block*/id _onDismiss;
	/*^block*/id _onBack;
	/*^block*/id _onSelect;
	FBAdReportingOptionsContentView* _bodyView;
	NSString* _titleText;
	NSString* _heading;
	NSArray* _items;

}

@property (nonatomic,retain) FBAdReportingOptionsContentView * bodyView;              //@synthesize bodyView=_bodyView - In the implementation block
@property (nonatomic,copy) NSString * titleText;                                      //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * heading;                                        //@synthesize heading=_heading - In the implementation block
@property (nonatomic,copy) NSArray * items;                                           //@synthesize items=_items - In the implementation block
@property (nonatomic,copy) id onDismiss;                                              //@synthesize onDismiss=_onDismiss - In the implementation block
@property (nonatomic,copy) id onBack;                                                 //@synthesize onBack=_onBack - In the implementation block
@property (nonatomic,copy) id onSelect;                                               //@synthesize onSelect=_onSelect - In the implementation block
-(void)setupBodyViewWithLayoutType:(long long)arg1 ;
-(id)onBack;
-(void)setOnBack:(id)arg1 ;
-(void)setOnSelect:(id)arg1 ;
-(id)initWithTitle:(id)arg1 heading:(id)arg2 items:(id)arg3 layoutType:(long long)arg4 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(NSString *)heading;
-(void)setHeading:(NSString *)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(FBAdReportingOptionsContentView *)bodyView;
-(void)setBodyView:(FBAdReportingOptionsContentView *)arg1 ;
-(NSString *)titleText;
-(id)onSelect;
-(id)onDismiss;
-(void)setOnDismiss:(id)arg1 ;
@end

