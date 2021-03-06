/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Messenger/MNTextFieldDelegate.h>
#import <Messenger/MNRegistrationConfirmationCodeFormViewDelegate.h>

@protocol MNRegistrationConfirmationCodeFormControllerDelegate;
@class NSArray, MNRegistrationConfirmationCodeFormView, NSString;

@interface MNRegistrationConfirmationCodeFormController : NSObject <UITextFieldDelegate, MNTextFieldDelegate, MNRegistrationConfirmationCodeFormViewDelegate> {

	NSArray* _confirmationCodeCharacterTextFields;
	MNRegistrationConfirmationCodeFormView* _confirmationCodeFormView;
	BOOL _editingEnabled;
	id<MNRegistrationConfirmationCodeFormControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNRegistrationConfirmationCodeFormControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL editingEnabled;                                                                   //@synthesize editingEnabled=_editingEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_submitConfirmationCode;
-(void)_setInputWithText:(id)arg1 ;
-(id)_combineInputFromConfirmationCodeCharacterTextFields;
-(void)textFieldDidDeleteBackwards:(id)arg1 ;
-(void)registrationConfirmationCodeFormView:(id)arg1 didPasteText:(id)arg2 ;
-(id)initWithConfirmationCodeFormView:(id)arg1 ;
-(BOOL)editingEnabled;
-(void)setDelegate:(id<MNRegistrationConfirmationCodeFormControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNRegistrationConfirmationCodeFormControllerDelegate>)delegate;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)setEditingEnabled:(BOOL)arg1 ;
@end

