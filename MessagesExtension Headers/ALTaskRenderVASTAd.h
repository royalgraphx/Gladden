/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/ALTaskRenderAd.h>

@class ALVASTContext;

@interface ALTaskRenderVASTAd : ALTaskRenderAd {

	ALVASTContext* _context;

}

@property (nonatomic,retain) ALVASTContext * context;              //@synthesize context=_context - In the implementation block
-(void)failAdRenderingForVASTErrorCode:(long long)arg1 ex:(id)arg2 ;
-(id)initWithContext:(id)arg1 adLoadDelegate:(id)arg2 usingSDK:(id)arg3 ;
-(void)run;
-(ALVASTContext *)context;
-(void)setContext:(ALVASTContext *)arg1 ;
@end

