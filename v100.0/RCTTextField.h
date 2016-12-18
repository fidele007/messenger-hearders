/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITextField.h>

@class RCTEventDispatcher, UITextRange, UIColor, NSNumber;

@interface RCTTextField : UITextField {

	RCTEventDispatcher* _eventDispatcher;
	BOOL _jsRequestingFirstResponder;
	long long _nativeEventCount;
	BOOL _submitted;
	UITextRange* _previousSelectionRange;
	BOOL _caretHidden;
	BOOL _selectTextOnFocus;
	BOOL _blurOnSubmit;
	BOOL _textWasPasted;
	UIColor* _placeholderTextColor;
	long long _mostRecentEventCount;
	NSNumber* _maxLength;
	/*^block*/id _onSelectionChange;
	UIEdgeInsets _contentInset;

}

@property (assign,nonatomic) BOOL caretHidden;                            //@synthesize caretHidden=_caretHidden - In the implementation block
@property (assign,nonatomic) BOOL selectTextOnFocus;                      //@synthesize selectTextOnFocus=_selectTextOnFocus - In the implementation block
@property (assign,nonatomic) BOOL blurOnSubmit;                           //@synthesize blurOnSubmit=_blurOnSubmit - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                   //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,retain) UIColor * placeholderTextColor;              //@synthesize placeholderTextColor=_placeholderTextColor - In the implementation block
@property (assign,nonatomic) long long mostRecentEventCount;              //@synthesize mostRecentEventCount=_mostRecentEventCount - In the implementation block
@property (nonatomic,retain) NSNumber * maxLength;                        //@synthesize maxLength=_maxLength - In the implementation block
@property (assign,nonatomic) BOOL textWasPasted;                          //@synthesize textWasPasted=_textWasPasted - In the implementation block
@property (nonatomic,copy) id onSelectionChange;                          //@synthesize onSelectionChange=_onSelectionChange - In the implementation block
-(void)textFieldDidChange;
-(void)textFieldBeginEditing;
-(void)textFieldEndEditing;
-(void)textFieldSubmitEditing;
-(void)sendSelectionEvent;
-(id)initWithEventDispatcher:(id)arg1 ;
-(void)sendKeyValueForString:(id)arg1 ;
-(void)reactWillMakeFirstResponder;
-(void)reactDidMakeFirstResponder;
-(BOOL)caretHidden;
-(void)setCaretHidden:(BOOL)arg1 ;
-(BOOL)selectTextOnFocus;
-(void)setSelectTextOnFocus:(BOOL)arg1 ;
-(BOOL)blurOnSubmit;
-(void)setBlurOnSubmit:(BOOL)arg1 ;
-(long long)mostRecentEventCount;
-(void)setMostRecentEventCount:(long long)arg1 ;
-(BOOL)textWasPasted;
-(void)setTextWasPasted:(BOOL)arg1 ;
-(id)onSelectionChange;
-(void)setOnSelectionChange:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)resignFirstResponder;
-(UIEdgeInsets)contentInset;
-(void)setText:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(void)setSelection:(id)arg1 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(void)setPlaceholder:(id)arg1 ;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)setMaxLength:(NSNumber *)arg1 ;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setPlaceholderTextColor:(UIColor *)arg1 ;
-(UIColor *)placeholderTextColor;
-(NSNumber *)maxLength;
@end

