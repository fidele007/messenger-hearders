/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNInboxTruncatingTextViewDelegate;
@class UITextView, UIGestureRecognizer, UIButton, NSAttributedString;

@interface MNInboxTruncatingTextView : UIView {

	UITextView* _backingTextView;
	UIGestureRecognizer* _tapGestureRecognizer;
	BOOL _tapping;
	BOOL _ended;
	BOOL _transitioning;
	UIButton* _readMoreButton;
	id<MNInboxTruncatingTextViewDelegate> _delegate;
	NSAttributedString* _attributedText;
	NSAttributedString* _truncationString;
	unsigned long long _numberOfLines;

}

@property (assign,nonatomic,__weak) id<MNInboxTruncatingTextViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;                                  //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,copy) NSAttributedString * truncationString;                                //@synthesize truncationString=_truncationString - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfLines;                                   //@synthesize numberOfLines=_numberOfLines - In the implementation block
-(void)_didTapReadMore:(id)arg1 ;
-(void)_updateTextViews;
-(NSAttributedString *)truncationString;
-(void)setTruncationString:(NSAttributedString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNInboxTruncatingTextViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNInboxTruncatingTextViewDelegate>)delegate;
-(void)setNumberOfLines:(unsigned long long)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedText;
-(unsigned long long)numberOfLines;
@end
