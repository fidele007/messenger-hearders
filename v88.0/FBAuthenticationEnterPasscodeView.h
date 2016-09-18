/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:56 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBKeyboardObserverDelegate.h>
#import <Messenger/FBAuthenticatingEnterPasscodeView.h>

@protocol FBAuthenticatingEnterPasscodeViewDelegate;
@class UILabel, UIButton, UITextField, NSArray, UIView, NSString, UIActivityIndicatorView, FBNetworkErrorBar, NSTimer, FBKeyboardObserver;

@interface FBAuthenticationEnterPasscodeView : UIView <FBKeyboardObserverDelegate, FBAuthenticatingEnterPasscodeView> {

	FBAuthenticationEnterPasscodeMetrics* _metrics;
	UILabel* _instructionTextView;
	UIButton* _secondaryActionButton;
	UITextField* _hiddenInputField;
	NSArray* _displayTextFields;
	UIView* _secondaryActionSeparatorView;
	BOOL _showNumbers;
	NSString* _secondaryActionText;
	UIActivityIndicatorView* _activityIndicator;
	long long _attempt;
	FBNetworkErrorBar* _numericOnlyErrorBar;
	BOOL _displayingNumericWarning;
	NSTimer* _numericWarningDisplayTimer;
	FBKeyboardObserver* _keyboardObserver;
	double _keyboardHeight;
	id<FBAuthenticatingEnterPasscodeViewDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBAuthenticatingEnterPasscodeViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(id)initWithSecondaryActionText:(id)arg1 showNumbers:(BOOL)arg2 ;
-(void)clearUserInput;
-(void)secondaryButtonTapped;
-(id)_makeInstructionTextView;
-(id)_makeHiddenInputField;
-(void)textEntered:(id)arg1 ;
-(id)_makeDisplayTextFields;
-(id)_makeSecondaryActionButton;
-(id)_makeSecondaryActionSeparatorView;
-(id)_createTextField;
-(void)_refreshPinInputDisplay;
-(void)_filterNumericOnly:(id)arg1 ;
-(void)_performBlockOnNextRunLoop:(/*^block*/id)arg1 ;
-(void)_showNumericOnlyWarning;
-(void)_hideNumericOnlyWarning;
-(void)_handleKeyboardVisibilityChangeWithKeyboardHeight:(double)arg1 duration:(double)arg2 curve:(long long)arg3 ;
-(void)setDelegate:(id<FBAuthenticatingEnterPasscodeViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<FBAuthenticatingEnterPasscodeViewDelegate>)delegate;
-(BOOL)resignFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)stopAnimating;
-(void)startAnimating;
-(void)_layoutSubviews;
-(void)setInstructionText:(id)arg1 ;
@end

