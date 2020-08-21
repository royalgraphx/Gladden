/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSInputStream, NSOutputStream, PSWebSocketBuffer;

@interface PSWebSocketServerConnection : NSObject {

	BOOL _inputStreamOpenCompleted;
	BOOL _outputStreamOpenCompleted;
	NSString* _identifier;
	long long _readyState;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	PSWebSocketBuffer* _inputBuffer;
	PSWebSocketBuffer* _outputBuffer;

}

@property (nonatomic,readonly) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long readyState;                          //@synthesize readyState=_readyState - In the implementation block
@property (nonatomic,retain) NSInputStream * inputStream;                   //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,retain) NSOutputStream * outputStream;                 //@synthesize outputStream=_outputStream - In the implementation block
@property (assign,nonatomic) BOOL inputStreamOpenCompleted;                 //@synthesize inputStreamOpenCompleted=_inputStreamOpenCompleted - In the implementation block
@property (assign,nonatomic) BOOL outputStreamOpenCompleted;                //@synthesize outputStreamOpenCompleted=_outputStreamOpenCompleted - In the implementation block
@property (nonatomic,retain) PSWebSocketBuffer * inputBuffer;               //@synthesize inputBuffer=_inputBuffer - In the implementation block
@property (nonatomic,retain) PSWebSocketBuffer * outputBuffer;              //@synthesize outputBuffer=_outputBuffer - In the implementation block
-(BOOL)inputStreamOpenCompleted;
-(void)setInputStreamOpenCompleted:(BOOL)arg1 ;
-(BOOL)outputStreamOpenCompleted;
-(void)setOutputStreamOpenCompleted:(BOOL)arg1 ;
-(id)init;
-(NSString *)identifier;
-(NSOutputStream *)outputStream;
-(NSInputStream *)inputStream;
-(void)setInputStream:(NSInputStream *)arg1 ;
-(void)setOutputStream:(NSOutputStream *)arg1 ;
-(void)setInputBuffer:(PSWebSocketBuffer *)arg1 ;
-(void)setOutputBuffer:(PSWebSocketBuffer *)arg1 ;
-(PSWebSocketBuffer *)outputBuffer;
-(PSWebSocketBuffer *)inputBuffer;
-(long long)readyState;
-(void)setReadyState:(long long)arg1 ;
@end

