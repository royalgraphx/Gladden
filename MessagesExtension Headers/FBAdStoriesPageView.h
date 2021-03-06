/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <UIKitCore/UIView.h>
#import <MessagesExtension/FBAdVideoRendererViewDelegate.h>

@protocol FBAdStoriesPageViewDelegate;
@class FBAdTimer, UIImageView, FBAdVideoRendererView, NSString;

@interface FBAdStoriesPageView : UIView <FBAdVideoRendererViewDelegate> {

	double _volume;
	id<FBAdStoriesPageViewDelegate> _delegate;
	FBAdTimer* _imageViewTimer;
	UIImageView* _imageView;
	FBAdVideoRendererView* _videoRendererView;
	SCD_Struct_IM9 _imageViewCurrentTime;

}

@property (assign,nonatomic) SCD_Struct_IM9 imageViewCurrentTime;                          //@synthesize imageViewCurrentTime=_imageViewCurrentTime - In the implementation block
@property (nonatomic,retain) FBAdTimer * imageViewTimer;                                   //@synthesize imageViewTimer=_imageViewTimer - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                      //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) FBAdVideoRendererView * videoRendererView;                    //@synthesize videoRendererView=_videoRendererView - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IM9 duration; 
@property (assign,nonatomic) SCD_Struct_IM9 currentTime; 
@property (assign,nonatomic) double volume;                                                //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic,__weak) id<FBAdStoriesPageViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)videoViewDidEnd:(id)arg1 ;
-(void)videoView:(id)arg1 didFailWithError:(id)arg2 ;
-(void)videoViewDidLoad:(id)arg1 ;
-(FBAdVideoRendererView *)videoRendererView;
-(void)configureWithDataModel:(id)arg1 placementDefinition:(id)arg2 pageIndex:(long long)arg3 pageCount:(long long)arg4 ;
-(void)configureAsImagePageWithDataModel:(id)arg1 ;
-(void)configureAsVideoPageWithDataModel:(id)arg1 placementDefinition:(id)arg2 pageIndex:(long long)arg3 pageCount:(long long)arg4 ;
-(void)pauseContent;
-(SCD_Struct_IM9)defaultImageDisplayDuration;
-(void)pageTimer:(id)arg1 ;
-(SCD_Struct_IM9)imageViewCurrentTime;
-(void)setImageViewCurrentTime:(SCD_Struct_IM9)arg1 ;
-(FBAdTimer *)imageViewTimer;
-(void)setImageViewTimer:(FBAdTimer *)arg1 ;
-(void)setVideoRendererView:(FBAdVideoRendererView *)arg1 ;
-(id<FBAdStoriesPageViewDelegate>)delegate;
-(void)setDelegate:(id<FBAdStoriesPageViewDelegate>)arg1 ;
-(SCD_Struct_IM9)duration;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(SCD_Struct_IM9)currentTime;
-(double)volume;
-(void)setVolume:(double)arg1 ;
-(BOOL)isPlaying;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)fadeInView:(id)arg1 ;
-(void)setCurrentTime:(SCD_Struct_IM9)arg1 ;
-(void)playContent;
@end

