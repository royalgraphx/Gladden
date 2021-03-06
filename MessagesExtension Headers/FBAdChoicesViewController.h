/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class FBAdChoicesContentView, FBAdReportingConfig;

@interface FBAdChoicesViewController : UIViewController {

	/*^block*/id _onOptionSelected;
	/*^block*/id _onDismiss;
	FBAdChoicesContentView* _bodyView;
	FBAdReportingConfig* _adReportingConfig;

}

@property (nonatomic,retain) FBAdChoicesContentView * bodyView;                    //@synthesize bodyView=_bodyView - In the implementation block
@property (nonatomic,retain) FBAdReportingConfig * adReportingConfig;              //@synthesize adReportingConfig=_adReportingConfig - In the implementation block
@property (nonatomic,copy) id onOptionSelected;                                    //@synthesize onOptionSelected=_onOptionSelected - In the implementation block
@property (nonatomic,copy) id onDismiss;                                           //@synthesize onDismiss=_onDismiss - In the implementation block
-(void)setupTapRecognizer;
-(id)onOptionSelected;
-(void)setOnOptionSelected:(id)arg1 ;
-(FBAdReportingConfig *)adReportingConfig;
-(void)setAdReportingConfig:(FBAdReportingConfig *)arg1 ;
-(void)setupBodyViewWithLayoutType:(long long)arg1 ;
-(void)handleDismissTap:(id)arg1 ;
-(id)init;
-(void)viewDidLoad;
-(FBAdChoicesContentView *)bodyView;
-(void)setBodyView:(FBAdChoicesContentView *)arg1 ;
-(id)initWithLayoutType:(long long)arg1 ;
-(id)onDismiss;
-(void)setOnDismiss:(id)arg1 ;
@end

