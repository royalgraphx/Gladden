/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/IMAsset.h>
#import <MessagesExtension/IMAssetCacheDelegate.h>
#import <MessagesExtension/IMTimerDelegate.h>

@class NSData, UIImage, NSString, IMTimerManager, IMVastCompanion, NSArray;

@interface IMImageAsset : IMAsset <IMAssetCacheDelegate, IMTimerDelegate> {

	BOOL _isViewHidden;
	BOOL _prevUserInteractionEnabled;
	BOOL _delayTimerHit;
	NSData* _imageData;
	UIImage* _image;
	NSString* _imageUrl;
	double _startImageFetchTS;
	long long _displayDelay;
	NSString* _displayReference;
	NSString* _displayReferenceType;
	long long _hideAfterDelay;
	IMTimerManager* _delayTimer;
	IMVastCompanion* _companion;
	NSArray* _companionErrorTrackers;
	unsigned long long _assetSubType;
	unsigned long long _imageLoadingType;

}

@property (nonatomic,retain) NSString * imageUrl;                              //@synthesize imageUrl=_imageUrl - In the implementation block
@property (assign,nonatomic) double startImageFetchTS;                         //@synthesize startImageFetchTS=_startImageFetchTS - In the implementation block
@property (assign,nonatomic) long long displayDelay;                           //@synthesize displayDelay=_displayDelay - In the implementation block
@property (nonatomic,retain) NSString * displayReference;                      //@synthesize displayReference=_displayReference - In the implementation block
@property (nonatomic,retain) NSString * displayReferenceType;                  //@synthesize displayReferenceType=_displayReferenceType - In the implementation block
@property (assign,nonatomic) long long hideAfterDelay;                         //@synthesize hideAfterDelay=_hideAfterDelay - In the implementation block
@property (nonatomic,retain) IMTimerManager * delayTimer;                      //@synthesize delayTimer=_delayTimer - In the implementation block
@property (assign,nonatomic) BOOL prevUserInteractionEnabled;                  //@synthesize prevUserInteractionEnabled=_prevUserInteractionEnabled - In the implementation block
@property (assign,nonatomic) BOOL delayTimerHit;                               //@synthesize delayTimerHit=_delayTimerHit - In the implementation block
@property (nonatomic,retain) IMVastCompanion * companion;                      //@synthesize companion=_companion - In the implementation block
@property (nonatomic,retain) NSArray * companionErrorTrackers;                 //@synthesize companionErrorTrackers=_companionErrorTrackers - In the implementation block
@property (assign,nonatomic) unsigned long long assetSubType;                  //@synthesize assetSubType=_assetSubType - In the implementation block
@property (assign,nonatomic) unsigned long long imageLoadingType;              //@synthesize imageLoadingType=_imageLoadingType - In the implementation block
@property (nonatomic,retain) NSData * imageData;                               //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,retain) UIImage * image;                                  //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) BOOL isViewHidden;                                //@synthesize isViewHidden=_isViewHidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)assetAddToCacheFailedForURL:(id)arg1 withError:(id)arg2 ;
-(void)assetReturnedFromCacheAt:(id)arg1 forURL:(id)arg2 ;
-(void)assetReturningFromNetworkAt:(id)arg1 forURL:(id)arg2 ;
-(void)timerHitForManager:(id)arg1 ;
-(id)initWithJson:(id)arg1 withStyles:(id)arg2 atJPath:(id)arg3 forAccountID:(id)arg4 ;
-(id)createViewWithProperties:(id)arg1 ;
-(void)updatePropertiesOnView;
-(void)recycleView;
-(void)fetchAssetResources;
-(id)buildAssetViewWithScale:(double)arg1 ;
-(id)urlByReplacingCacheBustingMacro:(id)arg1 ;
-(BOOL)isStyleValid;
-(BOOL)isViewHidden;
-(void)populateImage:(id)arg1 ;
-(void)addImageToViewWithTransition:(BOOL)arg1 ;
-(void)setCompanionErrorTrackers:(NSArray *)arg1 ;
-(void)fireCompanionViewTrackers;
-(NSArray *)companionErrorTrackers;
-(void)setAssetSubType:(unsigned long long)arg1 ;
-(void)setImageLoadingType:(unsigned long long)arg1 ;
-(void)setPrevUserInteractionEnabled:(BOOL)arg1 ;
-(void)setDisplayDelay:(long long)arg1 ;
-(void)setDisplayReference:(NSString *)arg1 ;
-(void)setDisplayReferenceType:(NSString *)arg1 ;
-(void)setHideAfterDelay:(long long)arg1 ;
-(unsigned long long)assetSubType;
-(void)setFallbackCloseButtonImage;
-(long long)displayDelay;
-(long long)hideAfterDelay;
-(BOOL)needsDisplayDelayTimer;
-(BOOL)delayTimerHit;
-(void)hideView;
-(NSString *)displayReferenceType;
-(NSString *)displayReference;
-(void)videoQuartileHit;
-(void)setStartImageFetchTS:(double)arg1 ;
-(unsigned long long)imageLoadingType;
-(void)createFallbackCloseButton;
-(void)setDelayTimerHit:(BOOL)arg1 ;
-(void)showView;
-(void)handleDelayTimerHit;
-(void)setIsViewHidden:(BOOL)arg1 ;
-(BOOL)prevUserInteractionEnabled;
-(void)fireCompanionErrorTrackerForURL:(id)arg1 ;
-(void)checkAndFailPrefetchImageAssetLoading;
-(double)startImageFetchTS;
-(void)dealloc;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setCompanion:(IMVastCompanion *)arg1 ;
-(NSData *)imageData;
-(void)setImageData:(NSData *)arg1 ;
-(IMVastCompanion *)companion;
-(IMTimerManager *)delayTimer;
-(void)setDelayTimer:(IMTimerManager *)arg1 ;
-(NSString *)imageUrl;
-(void)setImageUrl:(NSString *)arg1 ;
@end

