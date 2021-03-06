/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/FBNativeAdDelegate.h>
#import <MessagesExtension/FBNativeAdsManagerDelegate.h>

@protocol FBNativeAdDelegate;
@class FBNativeAdsManager, NSMutableDictionary, FBAdExtraHint, NSString;

@interface FBNativeAdTableViewAdProvider : NSObject <FBNativeAdDelegate, FBNativeAdsManagerDelegate> {

	id<FBNativeAdDelegate> _delegate;
	FBNativeAdsManager* _manager;
	NSMutableDictionary* _currentIndexPathToAdMap;

}

@property (nonatomic,retain) FBNativeAdsManager * manager;                               //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * currentIndexPathToAdMap;              //@synthesize currentIndexPathToAdMap=_currentIndexPathToAdMap - In the implementation block
@property (assign,nonatomic,__weak) id<FBNativeAdDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBAdExtraHint * extraHint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)nativeAdWillLogImpression:(id)arg1 ;
-(void)nativeAdDidClick:(id)arg1 ;
-(void)nativeAdDidFinishHandlingClick:(id)arg1 ;
-(FBAdExtraHint *)extraHint;
-(void)setExtraHint:(FBAdExtraHint *)arg1 ;
-(void)nativeAdsLoaded;
-(void)nativeAdsFailedToLoadWithError:(id)arg1 ;
-(BOOL)isAdCellAtIndexPath:(id)arg1 forStride:(unsigned long long)arg2 ;
-(id)adjustNonAdCellIndexPath:(id)arg1 forStride:(unsigned long long)arg2 ;
-(unsigned long long)adjustCount:(unsigned long long)arg1 forStride:(unsigned long long)arg2 ;
-(NSMutableDictionary *)currentIndexPathToAdMap;
-(void)setCurrentIndexPathToAdMap:(NSMutableDictionary *)arg1 ;
-(id)tableView:(id)arg1 nativeAdForRowAtIndexPath:(id)arg2 ;
-(id)init;
-(id<FBNativeAdDelegate>)delegate;
-(void)setDelegate:(id<FBNativeAdDelegate>)arg1 ;
-(id)initWithManager:(id)arg1 ;
-(FBNativeAdsManager *)manager;
-(void)setManager:(FBNativeAdsManager *)arg1 ;
@end

