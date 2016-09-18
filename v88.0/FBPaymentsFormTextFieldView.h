/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBPaymentsFormTextInputHandlerDelegate.h>
#import <Messenger/FBPaymentsEventAnnouncing.h>

@protocol FBPaymentsFormTextFieldViewDelegate;
@class UIImageView, UITextField, UILabel, UIImage, NSString, UITapGestureRecognizer, FBPaymentsEventListenerAnnouncer, FBPaymentsFormTextFieldViewModel, FBPaymentsFormTextInputState, FBPaymentsFormTextInputHandler;

@interface FBPaymentsFormTextFieldView : UIView <FBPaymentsFormTextInputHandlerDelegate, FBPaymentsEventAnnouncing> {

	UIImageView* _imageView;
	UITextField* _textField;
	UILabel* _maskedLabel;
	UILabel* _fieldTitleLabel;
	UIImage* _defaultImage;
	NSString* _savedEffectiveText;
	NSString* _savedText;
	NSString* _savedRawEffectiveCompletedText;
	UITapGestureRecognizer* _tapGestureRecognizer;
	BOOL _isFieldTitleAsPlaceholder;
	BOOL _shouldEnableFloatingLabel;
	FBPaymentsEventListenerAnnouncer* _eventAnnouncer;
	BOOL _editable;
	BOOL _isCompleted;
	id<FBPaymentsFormTextFieldViewDelegate> _delegate;
	FBPaymentsFormTextFieldViewModel* _viewModel;
	NSString* _rawEffectiveCompletedText;
	NSString* _effectiveText;
	NSString* _identifier;
	FBPaymentsFormTextInputState* _currentTextInputState;
	FBPaymentsFormTextInputHandler* _textInputHandler;

}

@property (nonatomic,copy) NSString * text; 
@property (assign,getter=isEditable,nonatomic) BOOL editable;                                          //@synthesize editable=_editable - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsFormTextFieldViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) FBPaymentsFormTextFieldViewModel * viewModel;                               //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,copy) NSString * rawEffectiveCompletedText;                                       //@synthesize rawEffectiveCompletedText=_rawEffectiveCompletedText - In the implementation block
@property (nonatomic,readonly) BOOL isCompleted;                                                       //@synthesize isCompleted=_isCompleted - In the implementation block
@property (nonatomic,copy,readonly) NSString * effectiveText;                                          //@synthesize effectiveText=_effectiveText - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) FBPaymentsFormTextInputState * currentTextInputState;              //@synthesize currentTextInputState=_currentTextInputState - In the implementation block
@property (nonatomic,readonly) FBPaymentsFormTextInputHandler * textInputHandler;                      //@synthesize textInputHandler=_textInputHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(void)addEventListener:(id)arg1 ;
-(void)removeEventListener:(id)arg1 ;
-(FBPaymentsFormTextInputHandler *)textInputHandler;
-(FBPaymentsFormTextInputState *)currentTextInputState;
-(id)initWithTextInputHandler:(id)arg1 viewModel:(id)arg2 identifier:(id)arg3 shouldEnableFloatingLabel:(BOOL)arg4 ;
-(NSString *)effectiveText;
-(void)loadContents;
-(NSString *)rawEffectiveCompletedText;
-(void)applyConfiguration:(id)arg1 ;
-(void)textInputHandlerDidTextFieldBeginEditing:(id)arg1 ;
-(void)textInputHandlerDidTextFieldEndEditing:(id)arg1 ;
-(void)textInputHandler:(id)arg1 didChangeContentInTextField:(id)arg2 isUserInput:(BOOL)arg3 isCompleted:(BOOL)arg4 image:(id)arg5 errorDescription:(id)arg6 state:(id)arg7 isSecondMistake:(BOOL)arg8 ;
-(BOOL)textInputHandler:(id)arg1 shouldAllowEditingInTextField:(id)arg2 ;
-(void)saveContents;
-(void)verifyNow;
-(CGSize)_fieldTitleSize;
-(void)_layoutFieldTitle:(BOOL)arg1 ;
-(BOOL)_shouldDisplayFieldTitleAsPlaceholder;
-(void)_setFieldTitleAsPlaceholder:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateImageViewWithImage:(id)arg1 ;
-(void)_setImageViewWithImage:(id)arg1 ;
-(void)setRawEffectiveCompletedText:(NSString *)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)setDelegate:(id<FBPaymentsFormTextFieldViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBPaymentsFormTextFieldViewDelegate>)delegate;
-(NSString *)identifier;
-(BOOL)resignFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)isEditable;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isCompleted;
-(void)setEditable:(BOOL)arg1 ;
-(void)setAccessibilityLabel:(id)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)_textFieldDidChange:(id)arg1 ;
-(FBPaymentsFormTextFieldViewModel *)viewModel;
-(void)setViewModel:(FBPaymentsFormTextFieldViewModel *)arg1 ;
@end

