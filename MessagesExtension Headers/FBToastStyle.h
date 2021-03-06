/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor, UIFont;

@interface FBToastStyle : NSObject {

	UIColor* _backgroundColor;
	UIColor* _messageColor;
	double _maxWidthPercentage;
	double _maxHeightPercentage;
	UIFont* _messageFont;
	long long _messageAlignment;
	long long _messageNumberOfLines;

}

@property (nonatomic,retain) UIColor * backgroundColor;                   //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * messageColor;                      //@synthesize messageColor=_messageColor - In the implementation block
@property (assign,nonatomic) double maxWidthPercentage;                   //@synthesize maxWidthPercentage=_maxWidthPercentage - In the implementation block
@property (assign,nonatomic) double maxHeightPercentage;                  //@synthesize maxHeightPercentage=_maxHeightPercentage - In the implementation block
@property (nonatomic,retain) UIFont * messageFont;                        //@synthesize messageFont=_messageFont - In the implementation block
@property (assign,nonatomic) long long messageAlignment;                  //@synthesize messageAlignment=_messageAlignment - In the implementation block
@property (assign,nonatomic) long long messageNumberOfLines;              //@synthesize messageNumberOfLines=_messageNumberOfLines - In the implementation block
-(void)setMaxWidthPercentage:(double)arg1 ;
-(void)setMaxHeightPercentage:(double)arg1 ;
-(UIColor *)messageColor;
-(void)setMessageColor:(UIColor *)arg1 ;
-(double)maxWidthPercentage;
-(double)maxHeightPercentage;
-(long long)messageAlignment;
-(void)setMessageAlignment:(long long)arg1 ;
-(id)init;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIFont *)messageFont;
-(void)setMessageNumberOfLines:(long long)arg1 ;
-(long long)messageNumberOfLines;
-(void)setMessageFont:(UIFont *)arg1 ;
@end

