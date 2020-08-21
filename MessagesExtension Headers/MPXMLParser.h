/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSMutableArray, NSMutableString, NSError, NSString;

@interface MPXMLParser : NSObject <NSXMLParserDelegate> {

	NSMutableArray* _elementStack;
	NSMutableString* _currentTextContent;
	NSError* _parseError;

}

@property (nonatomic,retain) NSMutableArray * elementStack;                     //@synthesize elementStack=_elementStack - In the implementation block
@property (nonatomic,retain) NSMutableString * currentTextContent;              //@synthesize currentTextContent=_currentTextContent - In the implementation block
@property (nonatomic,retain) NSError * parseError;                              //@synthesize parseError=_parseError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableString *)currentTextContent;
-(void)setCurrentTextContent:(NSMutableString *)arg1 ;
-(id)init;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(NSError *)parseError;
-(id)dictionaryWithData:(id)arg1 error:(id*)arg2 ;
-(NSMutableArray *)elementStack;
-(void)setElementStack:(NSMutableArray *)arg1 ;
-(void)setParseError:(NSError *)arg1 ;
@end

