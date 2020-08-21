/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface ADCLogReporter : NSObject {

	NSArray* _logs;
	NSString* _index;

}

@property (nonatomic,retain) NSArray * logs;                //@synthesize logs=_logs - In the implementation block
@property (nonatomic,retain) NSString * index;              //@synthesize index=_index - In the implementation block
-(id)initWithLogs:(id)arg1 andIndex:(id)arg2 ;
-(void)getContent:(/*^block*/id)arg1 ;
-(NSString *)index;
-(void)setIndex:(NSString *)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setLogs:(NSArray *)arg1 ;
-(NSArray *)logs;
@end
