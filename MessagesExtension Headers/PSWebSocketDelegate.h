/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PSWebSocketDelegate <NSObject>
@optional
-(void)webSocketDidFlushInput:(id)arg1;
-(void)webSocketDidFlushOutput:(id)arg1;
-(BOOL)webSocket:(id)arg1 evaluateServerTrust:(SecTrustRef)arg2;

@required
-(void)webSocketDidOpen:(id)arg1;
-(void)webSocket:(id)arg1 didFailWithError:(id)arg2;
-(void)webSocket:(id)arg1 didReceiveMessage:(id)arg2;
-(void)webSocket:(id)arg1 didCloseWithCode:(long long)arg2 reason:(id)arg3 wasClean:(BOOL)arg4;

@end

