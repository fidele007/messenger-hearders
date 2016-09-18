/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, FBCartArrayFields;

@interface FBCartArrayElement : FBGraphQLInput {

	NSString* _formFieldId;
	NSString* _disableAutofill;
	FBCartArrayFields* _value;

}

@property (nonatomic,copy) NSString * formFieldId;                  //@synthesize formFieldId=_formFieldId - In the implementation block
@property (nonatomic,copy) NSString * disableAutofill;              //@synthesize disableAutofill=_disableAutofill - In the implementation block
@property (nonatomic,copy) FBCartArrayFields * value;               //@synthesize value=_value - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setFormFieldId:(NSString *)arg1 ;
-(void)setDisableAutofill:(NSString *)arg1 ;
-(NSString *)formFieldId;
-(NSString *)disableAutofill;
-(FBCartArrayFields *)value;
-(void)setValue:(FBCartArrayFields *)arg1 ;
@end

