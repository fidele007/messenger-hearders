/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:56 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextViewDelegate.h>
#import <Messenger/FBAccessibilityInvalidationEventsListener.h>

@protocol FBGrowingComposerViewDelegate;
@class _FBGrowingComposerBackgroundView, UIImageView, UILabel, FBGrowingTextView, UIButton, UIView, NSString, FBGrowingComposerViewListenerAnnouncer, UITextView, UIColor;

@interface FBGrowingComposerView : UIView <UITextViewDelegate, FBAccessibilityInvalidationEventsListener> {

	double _heightOfEmptyComposer;
	UIEdgeInsets _layoutInsets;
	_FBGrowingComposerBackgroundView* _backgroundView;
	UIImageView* _textViewBackgroundView;
	UILabel* _placeholderLabel;
	FBGrowingTextView* _textView;
	unsigned long long _placeholderLabelStyle;
	struct {
		BOOL delegateShouldEnableSendButton;
		BOOL delegateShouldChangeTextInRange;
		BOOL delegateShouldBeginEditing;
		BOOL delegateShouldReturn;
		BOOL editable;
	}  _flags;
	BOOL _shouldToggleSendButton;
	BOOL _shouldHideSendButton;
	BOOL _shouldToggleLeftAccessoryView;
	BOOL _shouldHideTopBorder;
	BOOL _shouldHideTextViewBackground;
	UIButton* _sendButton;
	UIView* _leftAccessoryView;
	UIView* _rightAccessoryView;
	UIView* _topAccessoryView;
	UIView* _textViewAccessoryView;
	id<FBGrowingComposerViewDelegate> _delegate;
	unsigned long long _style;
	NSString* _placeholderText;
	NSString* _sendButtonTitle;
	unsigned long long _dividerStyle;
	FBGrowingComposerViewListenerAnnouncer* _listenerAnnouncer;
	UIEdgeInsets _contentEdgeInsets;

}

@property (assign,nonatomic) unsigned long long maximumNumberOfLines; 
@property (nonatomic,readonly) UITextView * textView; 
@property (nonatomic,copy) UIColor * textViewBorderColor; 
@property (nonatomic,copy) UIColor * textViewBackgroundColor; 
@property (nonatomic,readonly) UIButton * sendButton;                                                   //@synthesize sendButton=_sendButton - In the implementation block
@property (nonatomic,retain) UIView * leftAccessoryView;                                                //@synthesize leftAccessoryView=_leftAccessoryView - In the implementation block
@property (nonatomic,copy) UIView * rightAccessoryView;                                                 //@synthesize rightAccessoryView=_rightAccessoryView - In the implementation block
@property (nonatomic,retain) UIView * topAccessoryView;                                                 //@synthesize topAccessoryView=_topAccessoryView - In the implementation block
@property (nonatomic,retain) UIView * textViewAccessoryView;                                            //@synthesize textViewAccessoryView=_textViewAccessoryView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;                                            //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
@property (assign,getter=isEditable,nonatomic) BOOL editable; 
@property (assign,nonatomic,__weak) id<FBGrowingComposerViewDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long style;                                                //@synthesize style=_style - In the implementation block
@property (nonatomic,copy,readonly) NSString * text; 
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,retain) UIColor * placeholderTextColor; 
@property (assign,nonatomic) NSString * placeholderText;                                                //@synthesize placeholderText=_placeholderText - In the implementation block
@property (nonatomic,copy) NSString * sendButtonTitle;                                                  //@synthesize sendButtonTitle=_sendButtonTitle - In the implementation block
@property (assign,nonatomic) BOOL shouldHideCaret; 
@property (assign,nonatomic) BOOL dividerHidden; 
@property (assign,nonatomic) unsigned long long dividerStyle;                                           //@synthesize dividerStyle=_dividerStyle - In the implementation block
@property (assign,nonatomic) BOOL shouldToggleSendButton;                                               //@synthesize shouldToggleSendButton=_shouldToggleSendButton - In the implementation block
@property (assign,nonatomic) BOOL shouldHideSendButton;                                                 //@synthesize shouldHideSendButton=_shouldHideSendButton - In the implementation block
@property (assign,nonatomic) BOOL shouldToggleLeftAccessoryView;                                        //@synthesize shouldToggleLeftAccessoryView=_shouldToggleLeftAccessoryView - In the implementation block
@property (assign,nonatomic) BOOL shouldHideTopBorder;                                                  //@synthesize shouldHideTopBorder=_shouldHideTopBorder - In the implementation block
@property (assign,nonatomic) BOOL shouldHideTextViewBackground;                                         //@synthesize shouldHideTextViewBackground=_shouldHideTextViewBackground - In the implementation block
@property (nonatomic,readonly) FBGrowingComposerViewListenerAnnouncer * listenerAnnouncer;              //@synthesize listenerAnnouncer=_listenerAnnouncer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)deviceScaledMaximumNumberOfLinesWithAttachment:(BOOL)arg1 ;
+(double)estimatedInitialTextFieldHeightForStyle:(unsigned long long)arg1 ;
+(void)initialize;
+(void)_scrollCaretToVisible:(id)arg1 ;
-(NSString *)sendButtonTitle;
-(void)setShouldHideCaret:(BOOL)arg1 ;
-(FBGrowingComposerViewListenerAnnouncer *)listenerAnnouncer;
-(void)didReceiveAccessibilityInvalidation;
-(BOOL)shouldHideCaret;
-(void)updateSendButtonEnabledAnimated:(BOOL)arg1 ;
-(void)setShouldToggleLeftAccessoryView:(BOOL)arg1 ;
-(void)setShouldToggleSendButton:(BOOL)arg1 ;
-(void)setShouldHideTextViewBackground:(BOOL)arg1 ;
-(void)setShouldHideSendButton:(BOOL)arg1 ;
-(void)setTopAccessoryView:(UIView *)arg1 ;
-(void)setShouldHideTopBorder:(BOOL)arg1 ;
-(void)setTextViewBorderColor:(UIColor *)arg1 ;
-(UIColor *)textViewBorderColor;
-(void)setTextViewBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)textViewBackgroundColor;
-(void)setSendButtonTitle:(NSString *)arg1 ;
-(void)setDividerStyle:(unsigned long long)arg1 ;
-(void)setRightAccessoryView:(UIView *)arg1 ;
-(void)setTextViewAccessoryView:(UIView *)arg1 ;
-(UIView *)topAccessoryView;
-(unsigned long long)dividerStyle;
-(BOOL)shouldHideTopBorder;
-(BOOL)shouldHideTextViewBackground;
-(UIView *)rightAccessoryView;
-(BOOL)dividerHidden;
-(void)setDividerHidden:(BOOL)arg1 ;
-(void)_textViewBackgroundViewTapped:(id)arg1 ;
-(void)_prepareWithNormalStyle;
-(void)_prepareWithLiveStyle;
-(void)_prepareWithBlackStyle;
-(void)_prepareForFullWidthContainerStyle;
-(void)_prepareWithMinimalStyle;
-(void)_prepareWithBaltoFeedStyle;
-(void)_updateSendButtonWithGlyphIfNeeded;
-(void)_hack_cancelScrollCaretToVisibleAfterDelay;
-(void)_updateToggleAccessoryViewsAndSendButtonAnimated:(BOOL)arg1 force:(BOOL)arg2 ;
-(BOOL)_shouldHideSendButton;
-(BOOL)_shouldHideLeftAccessoryView;
-(BOOL)_shouldHideRightAccessoryView;
-(BOOL)_shouldHidePlaceholder;
-(void)_checkNeedsResize;
-(BOOL)_shouldUseSendButtonGlyph;
-(CGRect)_leftAccessoryViewFrameForContentRect:(CGRect)arg1 ;
-(CGRect)_sendButtonFrameForContentRect:(CGRect)arg1 ;
-(CGRect)_rightAccessoryViewFrameForContentRect:(CGRect)arg1 ;
-(UIEdgeInsets)_textViewBackgroundPadding;
-(CGRect)_textViewBackgroundFrameForContentRect:(CGRect)arg1 ;
-(CGRect)_topAccessoryFrameForTextViewBackgroundRect:(CGRect)arg1 ;
-(CGRect)_placeholderFrameForContentRect:(CGRect)arg1 topAccessoryFrame:(CGRect)arg2 ;
-(CGRect)_textViewAccessoryFrameForContentRect:(CGRect)arg1 topAccessoryFrame:(CGRect)arg2 ;
-(CGRect)_textViewFrameForContentRect:(CGRect)arg1 topAccessoryFrame:(CGRect)arg2 ;
-(CGRect)_textContentRectForContentRect:(CGRect)arg1 topAccessoryFrame:(CGRect)arg2 ;
-(UIEdgeInsets)_textViewBackgroundContentEdgeInsets;
-(void)_hack_scrollCaretToVisibleAfterDelay;
-(BOOL)_hitTestExtendedButton:(id)arg1 point:(CGPoint)arg2 ;
-(UIView *)textViewAccessoryView;
-(BOOL)shouldToggleSendButton;
-(BOOL)shouldHideSendButton;
-(BOOL)shouldToggleLeftAccessoryView;
-(void)setDelegate:(id<FBGrowingComposerViewDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBGrowingComposerViewDelegate>)delegate;
-(BOOL)isEditable;
-(unsigned long long)style;
-(void)setTextColor:(UIColor *)arg1 ;
-(NSString *)text;
-(void)setMaximumNumberOfLines:(unsigned long long)arg1 ;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(unsigned long long)arg2 ;
-(UIColor *)textColor;
-(CGRect)_contentRectForBounds:(CGRect)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(BOOL)textViewShouldBeginEditing:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(UIEdgeInsets)contentEdgeInsets;
-(UITextView *)textView;
-(unsigned long long)maximumNumberOfLines;
-(void)setPlaceholderTextColor:(UIColor *)arg1 ;
-(UIColor *)placeholderTextColor;
-(void)setLeftAccessoryView:(UIView *)arg1 ;
-(UIView *)leftAccessoryView;
-(BOOL)textViewShouldReturn:(id)arg1 ;
-(NSString *)placeholderText;
-(void)setPlaceholderText:(NSString *)arg1 ;
-(UIButton *)sendButton;
@end

