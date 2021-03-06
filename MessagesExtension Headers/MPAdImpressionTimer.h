/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPAdImpressionTimerDelegate;
@class UIView, MPTimer;

@interface MPAdImpressionTimer : NSObject {

	id<MPAdImpressionTimerDelegate> _delegate;
	UIView* _adView;
	MPTimer* _viewVisibilityTimer;
	double _firstVisibilityTimestamp;
	double _pixelsRequiredForViewVisibility;
	double _percentageRequiredForViewVisibility;
	double _requiredSecondsForImpression;

}

@property (nonatomic,retain) UIView * adView;                                              //@synthesize adView=_adView - In the implementation block
@property (nonatomic,retain) MPTimer * viewVisibilityTimer;                                //@synthesize viewVisibilityTimer=_viewVisibilityTimer - In the implementation block
@property (assign,nonatomic) double firstVisibilityTimestamp;                              //@synthesize firstVisibilityTimestamp=_firstVisibilityTimestamp - In the implementation block
@property (assign,nonatomic) double pixelsRequiredForViewVisibility;                       //@synthesize pixelsRequiredForViewVisibility=_pixelsRequiredForViewVisibility - In the implementation block
@property (assign,nonatomic) double percentageRequiredForViewVisibility;                   //@synthesize percentageRequiredForViewVisibility=_percentageRequiredForViewVisibility - In the implementation block
@property (assign,nonatomic) double requiredSecondsForImpression;                          //@synthesize requiredSecondsForImpression=_requiredSecondsForImpression - In the implementation block
@property (assign,nonatomic,__weak) id<MPAdImpressionTimerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithRequiredSecondsForImpression:(double)arg1 requiredViewVisibilityPixels:(double)arg2 ;
-(id)initWithRequiredSecondsForImpression:(double)arg1 requiredViewVisibilityPercentage:(double)arg2 ;
-(void)startTrackingView:(id)arg1 ;
-(MPTimer *)viewVisibilityTimer;
-(double)pixelsRequiredForViewVisibility;
-(void)setPercentageRequiredForViewVisibility:(double)arg1 ;
-(double)percentageRequiredForViewVisibility;
-(double)firstVisibilityTimestamp;
-(void)setFirstVisibilityTimestamp:(double)arg1 ;
-(double)requiredSecondsForImpression;
-(void)setViewVisibilityTimer:(MPTimer *)arg1 ;
-(void)setPixelsRequiredForViewVisibility:(double)arg1 ;
-(void)setRequiredSecondsForImpression:(double)arg1 ;
-(void)dealloc;
-(id<MPAdImpressionTimerDelegate>)delegate;
-(void)setDelegate:(id<MPAdImpressionTimerDelegate>)arg1 ;
-(void)setAdView:(UIView *)arg1 ;
-(UIView *)adView;
-(void)tick:(id)arg1 ;
@end

