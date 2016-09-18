/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextViewDelegate.h>
#import <Messenger/FBPaymentsEdgeInsetsConfigurable.h>

@protocol FBPaymentsTextEditWithCharacterCountViewDelegate;
@class FBRichTextView, FBTextView, NSString;

@interface FBPaymentsTextEditWithCharacterCountView : UIView <UITextViewDelegate, FBPaymentsEdgeInsetsConfigurable> {

	FBRichTextView* _characterCountView;
	unsigned long long _characterCountLimit;
	FBTextView* _textView;
	id<FBPaymentsTextEditWithCharacterCountViewDelegate> _delegate;
	UIEdgeInsets _edgeInsets;

}

@property (assign,nonatomic,__weak) id<FBPaymentsTextEditWithCharacterCountViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBTextView * textView;                                                           //@synthesize textView=_textView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                                           //@synthesize edgeInsets=_edgeInsets - In the implementation block
-(void)_updateCharacterCount;
-(id)initWithCharacterCountLimit:(unsigned long long)arg1 placeholderText:(id)arg2 textInputContextIdentifier:(id)arg3 prefilledText:(id)arg4 ;
-(void)setDelegate:(id<FBPaymentsTextEditWithCharacterCountViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBPaymentsTextEditWithCharacterCountViewDelegate>)delegate;
-(UIEdgeInsets)edgeInsets;
-(void)textViewDidChange:(id)arg1 ;
-(FBTextView *)textView;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
@end
