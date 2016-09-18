/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBPaymentsMessageWithLinkView.h>

@protocol FBPaymentsMessageWithLinkViewDelegate;
@class FBRichTextView, NSURL, UIImageView, NSString, UIColor, UIFont;

@interface FBPaymentsMessageWithHyperlinkView : UIView <FBPaymentsMessageWithLinkView> {

	FBRichTextView* _messageTextAndLinkView;
	NSURL* _linkURL;
	NSRange _linkTextRange;
	UIImageView* _imageView;
	NSString* _messageText;
	NSString* _linkText;
	UIColor* _messageTextColor;
	UIFont* _messageTextFont;
	unsigned long long _orderTemplate;
	unsigned long long _linkViewStyle;
	id<FBPaymentsMessageWithLinkViewDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsMessageWithLinkViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(double)heightWithViewModel:(id)arg1 constrainedToSize:(CGSize)arg2 ;
-(void)_handleLinkTapAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)setMessageTextColor:(id)arg1 ;
-(void)setMessageTextFont:(id)arg1 ;
-(void)_tapLinkAction:(id)arg1 withEvent:(id)arg2 ;
-(void)_setupMessageTextAndLinkViewWithMessageTextColor:(id)arg1 messageTextFont:(id)arg2 ;
-(void)setOrderTemplate:(unsigned long long)arg1 ;
-(id)initWithPaymentsMessageWithLinkViewModel:(id)arg1 ;
-(void)setDelegate:(id<FBPaymentsMessageWithLinkViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBPaymentsMessageWithLinkViewDelegate>)delegate;
-(void)setHorizontalAlignmentMode:(long long)arg1 ;
@end
