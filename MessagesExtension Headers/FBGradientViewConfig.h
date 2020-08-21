/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <MessagesExtension/FBUIConfig.h>

@class NSArray, UIColor, NSString;

@interface FBGradientViewConfig : NSObject <FBUIConfig> {

	NSArray* _colors;
	NSArray* _locations;
	UIColor* _backgroundColor;
	double _opacity;
	CGPoint _startPoint;
	CGPoint _endPoint;

}

@property (nonatomic,copy,readonly) NSArray * colors;                       //@synthesize colors=_colors - In the implementation block
@property (nonatomic,copy,readonly) NSArray * locations;                    //@synthesize locations=_locations - In the implementation block
@property (nonatomic,readonly) CGPoint startPoint;                          //@synthesize startPoint=_startPoint - In the implementation block
@property (nonatomic,readonly) CGPoint endPoint;                            //@synthesize endPoint=_endPoint - In the implementation block
@property (nonatomic,copy,readonly) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) double opacity;                              //@synthesize opacity=_opacity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithColors:(id)arg1 locations:(id)arg2 startPoint:(CGPoint)arg3 endPoint:(CGPoint)arg4 backgroundColor:(id)arg5 opacity:(double)arg6 ;
+(Class)viewClass;
-(id)_initWithColors:(id)arg1 locations:(id)arg2 startPoint:(CGPoint)arg3 endPoint:(CGPoint)arg4 backgroundColor:(id)arg5 opacity:(double)arg6 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)opacity;
-(UIColor *)backgroundColor;
-(CGPoint)startPoint;
-(NSArray *)colors;
-(NSArray *)locations;
-(CGPoint)endPoint;
@end

