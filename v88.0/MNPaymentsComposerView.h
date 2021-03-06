/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNPaymentsView.h>

@class FBRichTextView, UIImageView, FBPaymentsHorizontalSeparatorView, UITextField, MNPaymentsComposerViewModel, NSString;

@interface MNPaymentsComposerView : UIView <MNPaymentsView> {

	FBRichTextView* _leftTextView;
	UIImageView* _memoPencilImageView;
	FBPaymentsHorizontalSeparatorView* _topSeparatorView;
	UITextField* _textField;
	MNPaymentsComposerViewModel* _viewModel;

}

@property (nonatomic,readonly) UITextField * textField;                          //@synthesize textField=_textField - In the implementation block
@property (nonatomic,copy) MNPaymentsComposerViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)composerText;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)resignFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(UITextField *)textField;
-(MNPaymentsComposerViewModel *)viewModel;
-(void)setViewModel:(MNPaymentsComposerViewModel *)arg1 ;
@end

