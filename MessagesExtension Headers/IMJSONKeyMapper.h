/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMJSONKeyMapper : NSObject {

	/*^block*/id _modelToJSONKeyBlock;

}

@property (nonatomic,readonly) id JSONToModelKeyBlock; 
@property (nonatomic,readonly) id modelToJSONKeyBlock;              //@synthesize modelToJSONKeyBlock=_modelToJSONKeyBlock - In the implementation block
+(id)swapKeysAndValuesInDictionary:(id)arg1 ;
+(id)mapperForSnakeCase;
+(id)baseMapper:(id)arg1 withModelToJSONExceptions:(id)arg2 ;
+(id)mapperFromUnderscoreCaseToCamelCase;
+(id)mapperForTitleCase;
+(id)mapperFromUpperCaseToLowerCase;
+(id)mapper:(id)arg1 withExceptions:(id)arg2 ;
-(id)initWithModelToJSONBlock:(/*^block*/id)arg1 ;
-(id)initWithModelToJSONDictionary:(id)arg1 ;
-(id)convertValue:(id)arg1 ;
-(id)modelToJSONKeyBlock;
-(id)initWithJSONToModelBlock:(/*^block*/id)arg1 modelToJSONBlock:(/*^block*/id)arg2 ;
-(id)JSONToModelKeyBlock;
-(id)convertValue:(id)arg1 isImportingToModel:(BOOL)arg2 ;
-(id)initWithDictionary:(id)arg1 ;
@end

