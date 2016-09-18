/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:56 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol FBAuthenticationEnterPasswordViewDelegate;
@class UIView, UILabel, FBAuthenticationRoundedImageView, UITextField, UIButton, UIActivityIndicatorView, NSString;

@interface FBAuthenticationEnterPasswordView : UIView <UITextFieldDelegate> {

	FBAuthenticationEnterPasswordMetrics* _metrics;
	UIView* _containerView;
	UILabel* _instructionTextView;
	FBAuthenticationRoundedImageView* _roundedImage;
	UITextField* _passwordTextField;
	UIButton* _passwordEnteredButton;
	UIButton* _goBackButton;
	UIButton* _passwordResetButton;
	UIActivityIndicatorView* _activityIndicator;
	long long _attempt;
	BOOL _hideProfilePicture;
	id<FBAuthenticationEnterPasswordViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBAuthenticationEnterPasswordViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPasswordConfirmErrorMessage;
-(void)makePasswordFieldAsFirstResponder;
-(void)resetStateExceptText;
-(void)setErrorAndClearUserInput;
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
-(id)initWithFrame:(CGRect)arg1 imageDownloader:(id)arg2 gatekeeper:(id)arg3 ;
-(id)_makeGoBackButton;
-(void)_goBackButtonTapped:(id)arg1 ;
-(void)hideAllOtherElementsThanImage:(BOOL)arg1 ;
-(void)preAnimateSetupWithImageLocation:(CGPoint)arg1 ;
-(void)animateScreenTransition;
-(void)setDelegate:(id<FBAuthenticationEnterPasswordViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<FBAuthenticationEnterPasswordViewDelegate>)delegate;
-(CGSize)imageSize;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)setImageURL:(id)arg1 ;
-(void)resetState;
@end
