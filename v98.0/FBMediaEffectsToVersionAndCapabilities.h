/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSNumber, NSArray;

@interface FBMediaEffectsToVersionAndCapabilities : FBGraphQLInput {

	NSString* _typeAttribute;
	NSNumber* _version;
	NSArray* _capabilities;

}

@property (nonatomic,copy) NSString * typeAttribute;              //@synthesize typeAttribute=_typeAttribute - In the implementation block
@property (nonatomic,copy) NSNumber * version;                    //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSArray * capabilities;                //@synthesize capabilities=_capabilities - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setVersion:(NSNumber *)arg1 ;
-(NSNumber *)version;
-(void)setCapabilities:(NSArray *)arg1 ;
-(NSArray *)capabilities;
-(void)setTypeAttribute:(NSString *)arg1 ;
-(NSString *)typeAttribute;
@end

