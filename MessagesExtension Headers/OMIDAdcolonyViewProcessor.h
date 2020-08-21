/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <MessagesExtension/OMIDAdcolonyNodeProcessor.h>

@protocol OMIDAdcolonyNodeProcessor;
@class NSString;

@interface OMIDAdcolonyViewProcessor : NSObject <OMIDAdcolonyNodeProcessor> {

	id<OMIDAdcolonyNodeProcessor> _processorForChildren;

}

@property (assign,nonatomic,__weak) id<OMIDAdcolonyNodeProcessor> processorForChildren;              //@synthesize processorForChildren=_processorForChildren - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setProcessorForChildren:(id<OMIDAdcolonyNodeProcessor>)arg1 ;
-(id)stateForView:(id)arg1 ;
-(id)orderedChildrenForView:(id)arg1 ;
-(id)childrenForView:(id)arg1 ;
-(id<OMIDAdcolonyNodeProcessor>)processorForChildren;
-(CGRect)frameInWindowSystemForView:(id)arg1 ;
-(id)windowForView:(id)arg1 ;
-(void)addView:(id)arg1 toDictionary:(id)arg2 ;
-(id)buildChildrenFromDictionary:(id)arg1 ;
@end

