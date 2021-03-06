/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Messenger/MNBusinessSignupTextFieldDelegate.h>
#import <Messenger/MNBusinessSignupConfirmationCodeFormViewDelegate.h>

@protocol MNBusinessSignupConfirmationCodeFormControllerDelegate;
@class NSArray, MNBusinessSignupConfirmationCodeFormView, NSString;

@interface MNBusinessSignupConfirmationCodeFormController : NSObject <UITextFieldDelegate, MNBusinessSignupTextFieldDelegate, MNBusinessSignupConfirmationCodeFormViewDelegate> {

	NSArray* _confirmationCodeCharacterTextFields;
	MNBusinessSignupConfirmationCodeFormView* _confirmationCodeFormView;
	id<MNBusinessSignupConfirmationCodeFormControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNBusinessSignupConfirmationCodeFormControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_submitConfirmationCode;
-(void)_setInputWithText:(id)arg1 ;
-(id)_combineInputFromConfirmationCodeCharacterTextFields;
-(id)initWithConfirmationCodeFormView:(id)arg1 ;
-(void)registrationTextFieldDidDeleteBackwards:(id)arg1 ;
-(void)businessSignupConfirmationCodeFormView:(id)arg1 didPasteText:(id)arg2 ;
-(void)setDelegate:(id<MNBusinessSignupConfirmationCodeFormControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNBusinessSignupConfirmationCodeFormControllerDelegate>)delegate;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
@end

