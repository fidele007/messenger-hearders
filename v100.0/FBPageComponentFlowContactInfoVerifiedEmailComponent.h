/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKCompositeComponent.h>

@class NSString, FBPageComponentFlowComponentContext, FBMemContactInfoFormField;

@interface FBPageComponentFlowContactInfoVerifiedEmailComponent : CKCompositeComponent {

	NSString* _fieldName;
	FBPageComponentFlowComponentContext* _context;
	NSString* _defaultValue;
	FBMemContactInfoFormField* _formField;

}

@property (nonatomic,copy) NSString * fieldName;                                         //@synthesize fieldName=_fieldName - In the implementation block
@property (nonatomic,retain) FBPageComponentFlowComponentContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * defaultValue;                                      //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,retain) FBMemContactInfoFormField * formField;                      //@synthesize formField=_formField - In the implementation block
+(id)newWithFormField:(id)arg1 fieldName:(id)arg2 configuration:(const FBPageComponentFlowContactInfoVerifiedEmailComponentConfiguration*)arg3 context:(id)arg4 ;
-(FBMemContactInfoFormField *)formField;
-(void)setFormField:(FBMemContactInfoFormField *)arg1 ;
-(FBPageComponentFlowComponentContext *)context;
-(void)setContext:(FBPageComponentFlowComponentContext *)arg1 ;
-(NSString *)defaultValue;
-(void)setDefaultValue:(NSString *)arg1 ;
-(void)setFieldName:(NSString *)arg1 ;
-(NSString *)fieldName;
@end

