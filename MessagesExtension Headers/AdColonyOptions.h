/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, AdColonyUserMetadata;

@interface AdColonyOptions : NSObject {

	NSMutableDictionary* _options;
	AdColonyUserMetadata* _userMetadata;

}

@property (nonatomic,retain) AdColonyUserMetadata * userMetadata;              //@synthesize userMetadata=_userMetadata - In the implementation block
-(id)getNumericOptionWithKey:(id)arg1 ;
-(id)getOptions;
-(BOOL)boolOptionForKey:(id)arg1 ;
-(BOOL)setOption:(id)arg1 withNumericValue:(id)arg2 ;
-(id)getUserMetadata;
-(id)stringOptionForKey:(id)arg1 ;
-(id)getStringOptionWithKey:(id)arg1 ;
-(BOOL)setOption:(id)arg1 withStringValue:(id)arg2 lengthCheck:(BOOL)arg3 ;
-(BOOL)setOption:(id)arg1 withStringValue:(id)arg2 ;
-(id)optionForKey:(id)arg1 type:(Class)arg2 ;
-(id)numberOptionForKey:(id)arg1 ;
-(id)arrayOptionForKey:(id)arg1 ;
-(id)init;
-(void)setOptions:(id)arg1 ;
-(AdColonyUserMetadata *)userMetadata;
-(void)setUserMetadata:(AdColonyUserMetadata *)arg1 ;
@end

