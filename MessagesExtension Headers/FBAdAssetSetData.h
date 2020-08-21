/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, FBAdAssetListLoader;

@interface FBAdAssetSetData : NSObject {

	NSArray* _mandatoryAssets;
	NSArray* _optionalAssets;
	FBAdAssetListLoader* _mandatoryAssetsLoader;
	FBAdAssetListLoader* _optionalAssetsLoader;

}

@property (nonatomic,retain) FBAdAssetListLoader * mandatoryAssetsLoader;              //@synthesize mandatoryAssetsLoader=_mandatoryAssetsLoader - In the implementation block
@property (nonatomic,retain) FBAdAssetListLoader * optionalAssetsLoader;               //@synthesize optionalAssetsLoader=_optionalAssetsLoader - In the implementation block
@property (nonatomic,copy) NSArray * mandatoryAssets;                                  //@synthesize mandatoryAssets=_mandatoryAssets - In the implementation block
@property (nonatomic,copy) NSArray * optionalAssets;                                   //@synthesize optionalAssets=_optionalAssets - In the implementation block
+(id)fileAssetsFromData:(id)arg1 ;
+(id)assetsFromData:(id)arg1 assetType:(long long)arg2 ;
-(id)initWithMandatoryAssets:(id)arg1 optionalAssets:(id)arg2 ;
-(BOOL)loadMandatoryAssetsWithSuccessHandler:(/*^block*/id)arg1 failHandler:(/*^block*/id)arg2 ;
-(BOOL)loadOptionalAssetsWithSuccessHandler:(/*^block*/id)arg1 failHandler:(/*^block*/id)arg2 ;
-(void)callHandler:(/*^block*/id)arg1 ;
-(NSArray *)mandatoryAssets;
-(void)setMandatoryAssets:(NSArray *)arg1 ;
-(NSArray *)optionalAssets;
-(void)setOptionalAssets:(NSArray *)arg1 ;
-(FBAdAssetListLoader *)mandatoryAssetsLoader;
-(void)setMandatoryAssetsLoader:(FBAdAssetListLoader *)arg1 ;
-(FBAdAssetListLoader *)optionalAssetsLoader;
-(void)setOptionalAssetsLoader:(FBAdAssetListLoader *)arg1 ;
-(id)init;
-(id)initWithData:(id)arg1 ;
@end
