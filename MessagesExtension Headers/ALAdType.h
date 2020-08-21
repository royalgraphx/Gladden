/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 18, 2020 at 5:59:19 AM Central Daylight Time
* Operating System: Version 13.3 (Build 17C54)
* Image Source: /private/var/containers/Bundle/Application/97E911F0-28BD-48AC-8574-5B9D68F985F0/Game Pack.app/PlugIns/MessagesExtension.appex/MessagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesExtension/MessagesExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ALAdType : NSObject <NSCopying> {

	NSString* typeLabel;

}

@property (nonatomic,retain) NSString * typeLabel; 
@property (nonatomic,copy,readonly) NSString * label; 
+(id)typeIncentivized;
+(id)typeRegular;
+(id)typeNative;
+(id)adTypeFromString:(id)arg1 ;
+(id)allTypes;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(id)initWithLabel:(id)arg1 ;
-(void)setTypeLabel:(NSString *)arg1 ;
-(NSString *)typeLabel;
-(BOOL)isEqualToType:(id)arg1 ;
@end

