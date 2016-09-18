/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol FBDBLEnterPasswordViewDelegate;
@class UIView, UILabel, UITextField, UIButton, UIActivityIndicatorView, NSString;

@interface FBDBLEnterPasswordView : UIView <UITextFieldDelegate> {

	FBDBLEnterPasswordMetrics* _metrics;
	UIView* _containerView;
	UILabel* _instructionTextView;
	UITextField* _passwordTextField;
	UIButton* _passwordEnteredButton;
	UIButton* _passwordResetButton;
	UIActivityIndicatorView* _activityIndicator;
	long long _attempt;
	CGRect _visibleRect;
	id<FBDBLEnterPasswordViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBDBLEnterPasswordViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPasswordConfirmErrorMessage;
-(void)makePasswordFieldAsFirstResponder;
-(void)resetStateExceptText;
-(void)setErrorAndClearUserInput;
-(void)updateKeyboardFrame:(CGRect)arg1 ;
-(id)_makeInstructionTextView;
-(void)_setDefaultInstructionText;
-(id)_makePasswordTextField;
-(id)_makePasswordEnteredButton;
-(void)_passwordEnteredButtonTapped:(id)arg1 ;
-(id)_makePasswordResetButton;
-(void)_passwordResetButtonTapped:(id)arg1 ;
-(void)_submitPasswordEntry;
-(double)_layoutCommonUIs:(double)arg1 width:(double)arg2 ;
-(void)resignPasswordFieldAsFirstResponder;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBDBLEnterPasswordViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<FBDBLEnterPasswordViewDelegate>)delegate;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)resetState;
@end
