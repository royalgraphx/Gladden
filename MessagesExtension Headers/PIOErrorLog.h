/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PlayerIOChannel;

@interface PIOErrorLog : NSObject {

	PlayerIOChannel* channel;

}
-(void)writeError:(id)arg1 details:(id)arg2 stacktrace:(id)arg3 extraData:(id)arg4 ;
-(void)writeError:(id)arg1 ;
-(void)writeError:(id)arg1 errorObj:(id)arg2 ;
-(void)writeError:(id)arg1 exception:(id)arg2 ;
-(void)writeError:(id)arg1 details:(id)arg2 stacktrace:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(id)initWithChannel:(id)arg1 ;
@end

