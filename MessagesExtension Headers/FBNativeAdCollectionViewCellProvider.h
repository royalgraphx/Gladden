/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/FBNativeAdCollectionViewAdProvider.h>

@class FBNativeAdViewAttributes, NSString;

@interface FBNativeAdCollectionViewCellProvider : FBNativeAdCollectionViewAdProvider {

	long long _type;
	FBNativeAdViewAttributes* _attributes;
	NSString* _uniqueCollectionCellIdentifier;

}

@property (assign,nonatomic) long long type;                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) FBNativeAdViewAttributes * attributes;                  //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) NSString * uniqueCollectionCellIdentifier;              //@synthesize uniqueCollectionCellIdentifier=_uniqueCollectionCellIdentifier - In the implementation block
+(void)initialize;
-(id)initWithManager:(id)arg1 forType:(long long)arg2 ;
-(id)initWithManager:(id)arg1 forType:(long long)arg2 forAttributes:(id)arg3 ;
-(long long)collectionView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(double)collectionView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)collectionCellIdentifier;
-(NSString *)uniqueCollectionCellIdentifier;
-(void)setUniqueCollectionCellIdentifier:(NSString *)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(FBNativeAdViewAttributes *)attributes;
-(void)setAttributes:(FBNativeAdViewAttributes *)arg1 ;
-(id)initWithManager:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
@end
