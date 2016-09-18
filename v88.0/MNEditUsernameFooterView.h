/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNEditUsernameFooterViewDelegate;
@class FBRichTextView, UILabel;

@interface MNEditUsernameFooterView : UIView {

	FBRichTextView* _descriptionTextView;
	UILabel* _messageLabel;
	UIEdgeInsets _edgeInsets;
	id<MNEditUsernameFooterViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNEditUsernameFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didTapLearnMore;
-(id)initWithAttributedDescriptionString:(id)arg1 ;
-(void)setDelegate:(id<MNEditUsernameFooterViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNEditUsernameFooterViewDelegate>)delegate;
-(void)updateMessage:(id)arg1 ;
@end

