/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor;

@interface FBAdColorInfo : NSObject {

	UIColor* _textColor;
	UIColor* _backgroundColor;
	UIColor* _overmediaTextColor;
	UIColor* _overmediaBackgroundColor;

}

@property (nonatomic,readonly) UIColor * textColor;                             //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,readonly) UIColor * backgroundColor;                       //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) UIColor * overmediaTextColor;                    //@synthesize overmediaTextColor=_overmediaTextColor - In the implementation block
@property (nonatomic,readonly) UIColor * overmediaBackgroundColor;              //@synthesize overmediaBackgroundColor=_overmediaBackgroundColor - In the implementation block
-(UIColor *)overmediaTextColor;
-(UIColor *)overmediaBackgroundColor;
-(id)initWithDictionary:(id)arg1 ;
-(UIColor *)backgroundColor;
-(UIColor *)textColor;
@end

