/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:20 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WKScriptMessageHandler.h>

@protocol FBAdDSLJSScriptMessageHandlerDelegate;
@class NSString;

@interface FBAdDSLJSScriptMessageHandler : NSObject <WKScriptMessageHandler> {

	id<FBAdDSLJSScriptMessageHandlerDelegate> _delegate;
	NSString* _authKey;

}

@property (assign,nonatomic,__weak) id<FBAdDSLJSScriptMessageHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * authKey;                                              //@synthesize authKey=_authKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)eventsRequireAuthKey;
+(id)eventsWithoutAuthKey;
-(NSString *)authKey;
-(id)initWithAuthKey:(id)arg1 delegate:(id)arg2 ;
-(void)sendEventIfValidWithMap:(id)arg1 type:(id)arg2 extraData:(id)arg3 ;
-(id<FBAdDSLJSScriptMessageHandlerDelegate>)delegate;
-(void)setDelegate:(id<FBAdDSLJSScriptMessageHandlerDelegate>)arg1 ;
-(void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2 ;
@end

