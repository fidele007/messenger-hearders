/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:44 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/FBGraphQLInput.h>

@class NSString;

@interface FBContactUploadBatchPhone : FBGraphQLInput {

	NSString* _value;
	NSString* _label;
	NSString* _source;

}

@property (nonatomic,copy) NSString * value;               //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSString * label;               //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * source;              //@synthesize source=_source - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)source;
@end

