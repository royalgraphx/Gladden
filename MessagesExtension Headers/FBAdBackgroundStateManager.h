/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/FBAdBackgroundStateManaging.h>

@class NSString;

@interface FBAdBackgroundStateManager : NSObject <FBAdBackgroundStateManaging> {

	unsigned long long _extensionState;

}

@property (assign) unsigned long long extensionState;               //@synthesize extensionState=_extensionState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isApplicationBecomingActive;
-(id)init;
-(void)dealloc;
-(unsigned long long)extensionState;
-(void)setExtensionState:(unsigned long long)arg1 ;
-(long long)applicationState;
@end

