/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBPaymentsPasscodeDotsViewDelegate.h>

@protocol FBPaymentsLoadingIndicatorControlling, FBPaymentsPasscodeFeedbackViewDelegate;
@class FBRichTextView, UIButton, FBPaymentsPasscodeDotsView, NSString;

@interface FBPaymentsPasscodeView : UIView <FBPaymentsPasscodeDotsViewDelegate> {

	FBRichTextView* _titleLabel;
	FBRichTextView* _errorLabel;
	UIButton* _descriptionButton;
	id<FBPaymentsLoadingIndicatorControlling> _loadingIndicatorController;
	unsigned long long _numberOfPasscodesRequired;
	id<FBPaymentsPasscodeFeedbackViewDelegate> _delegate;
	FBPaymentsPasscodeDotsView* _dotsView;
	UIEdgeInsets _contentEdgeInsets;

}

@property (nonatomic,readonly) unsigned long long numberOfPasscodesRequired;                          //@synthesize numberOfPasscodesRequired=_numberOfPasscodesRequired - In the implementation block
@property (nonatomic,copy) NSString * titleText; 
@property (nonatomic,copy) NSString * descriptionText; 
@property (nonatomic,copy) NSString * errorText; 
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;                                          //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsPasscodeFeedbackViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBPaymentsPasscodeDotsView * dotsView;                                 //@synthesize dotsView=_dotsView - In the implementation block
@property (assign,nonatomic) BOOL shouldShowLoadingIndicator; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)resetPasscode;
-(void)passcodeDotsView:(id)arg1 didFinishWithInputText:(id)arg2 ;
-(FBPaymentsPasscodeDotsView *)dotsView;
-(void)setShouldShowLoadingIndicator:(BOOL)arg1 ;
-(void)_tappedDescriptionLabel:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 numberOfPasscodesRequired:(unsigned long long)arg2 ;
-(void)setErrorText:(NSString *)arg1 ;
-(unsigned long long)numberOfPasscodesRequired;
-(void)setDelegate:(id<FBPaymentsPasscodeFeedbackViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<FBPaymentsPasscodeFeedbackViewDelegate>)delegate;
-(BOOL)resignFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(BOOL)canResignFirstResponder;
-(UIEdgeInsets)contentEdgeInsets;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)descriptionText;
-(NSString *)titleText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(BOOL)shouldShowLoadingIndicator;
-(NSString *)errorText;
@end

