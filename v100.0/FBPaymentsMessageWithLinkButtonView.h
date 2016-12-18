/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBPaymentsMessageWithLinkView.h>

@protocol FBPaymentsMessageWithLinkViewDelegate;
@class UIImageView, UIButton, FBRichTextView, NSURL, NSString;

@interface FBPaymentsMessageWithLinkButtonView : UIView <FBPaymentsMessageWithLinkView> {

	UIImageView* _imageView;
	UIButton* _linkButton;
	FBRichTextView* _messageTextView;
	NSURL* _linkURL;
	unsigned long long _orderTemplate;
	id<FBPaymentsMessageWithLinkViewDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsMessageWithLinkViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(double)heightWithViewModel:(id)arg1 constrainedToSize:(CGSize)arg2 ;
-(void)_didTapButton;
-(void)setMessageTextColor:(id)arg1 ;
-(void)setMessageTextFont:(id)arg1 ;
-(void)setOrderTemplate:(unsigned long long)arg1 ;
-(id)initWithPaymentsMessageWithLinkViewModel:(id)arg1 ;
-(void)setDelegate:(id<FBPaymentsMessageWithLinkViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBPaymentsMessageWithLinkViewDelegate>)delegate;
-(void)setHorizontalAlignmentMode:(long long)arg1 ;
@end

