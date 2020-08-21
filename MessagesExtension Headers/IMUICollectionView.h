/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <UIKitCore/UICollectionView.h>
#import <MessagesExtension/IMUIInflator.h>

@class IMUIProperties, UITapGestureRecognizer, NSString;

@interface IMUICollectionView : UICollectionView <IMUIInflator> {

	IMUIProperties* _properties;
	UITapGestureRecognizer* _gestureRecognizer;

}

@property (nonatomic,retain) IMUIProperties * properties;                             //@synthesize properties=_properties - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 withProperties:(id)arg3 ;
-(void)setProperties:(id)arg1 frame:(CGRect)arg2 collectionViewLayout:(id)arg3 ;
-(IMUIProperties *)properties;
-(void)setProperties:(IMUIProperties *)arg1 ;
-(id)initWithProperties:(id)arg1 ;
-(void)clearProperties;
-(void)setGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)gestureRecognizer;
-(void)tapGesture:(id)arg1 ;
@end

