/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <UIKitCore/UIImage.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface IMGIFImage : UIImage {

	NSObject*<OS_dispatch_queue> readFrameQueue;
	CGImageSourceRef _imageSourceRef;
	double _scale;
	NSMutableArray* images;
	double* _frameDurations;
	double _totalDuration;
	unsigned long long _loopCount;
	CGImageSourceRef _incrementalSource;

}

@property (nonatomic,retain) NSMutableArray * images; 
@property (assign,nonatomic) double* frameDurations;                          //@synthesize frameDurations=_frameDurations - In the implementation block
@property (assign,nonatomic) double totalDuration;                            //@synthesize totalDuration=_totalDuration - In the implementation block
@property (assign,nonatomic) unsigned long long loopCount;                    //@synthesize loopCount=_loopCount - In the implementation block
@property (assign,nonatomic) CGImageSourceRef incrementalSource;              //@synthesize incrementalSource=_incrementalSource - In the implementation block
+(id)imageWithData:(id)arg1 ;
+(id)imageWithContentsOfFile:(id)arg1 ;
+(id)imageWithData:(id)arg1 scale:(double)arg2 ;
+(id)imageNamed:(id)arg1 ;
-(double*)frameDurations;
-(id)getFrameWithIndex:(unsigned long long)arg1 ;
-(id)initWithCGImageSource:(CGImageSourceRef)arg1 scale:(double)arg2 ;
-(void)setFrameDurations:(double*)arg1 ;
-(void)setLoopCount:(unsigned long long)arg1 ;
-(CGImageSourceRef)incrementalSource;
-(void)setIncrementalSource:(CGImageSourceRef)arg1 ;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(CGSize)size;
-(double)scale;
-(double)duration;
-(long long)imageOrientation;
-(NSMutableArray *)images;
-(CGImageRef)CGImage;
-(void)setImages:(NSMutableArray *)arg1 ;
-(id)initWithData:(id)arg1 scale:(double)arg2 ;
-(double)totalDuration;
-(unsigned long long)loopCount;
-(void)setTotalDuration:(double)arg1 ;
@end

