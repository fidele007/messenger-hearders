/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKStatefulViewComponent.h>

@class NSString;

@interface FBTextFieldComponent : CKStatefulViewComponent {

	FBTextFieldActions _textFieldActions;
	FBTextFieldViewConfiguration _textFieldConfiguration;

}

@property (nonatomic,readonly) FBTextFieldViewConfiguration textFieldConfiguration;              //@synthesize textFieldConfiguration=_textFieldConfiguration - In the implementation block
@property (nonatomic,readonly) FBTextFieldActions textFieldActions;                              //@synthesize textFieldActions=_textFieldActions - In the implementation block
@property (nonatomic,copy) NSString * text; 
+(id)newWithConfiguration:(const FBTextFieldViewConfiguration*)arg1 actions:(const FBTextFieldActions*)arg2 size:(const CKComponentSize*)arg3 ;
-(FBTextFieldViewConfiguration)textFieldConfiguration;
-(FBTextFieldActions)textFieldActions;
-(BOOL)resignFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)becomeFirstResponder;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
@end

