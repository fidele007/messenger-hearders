/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNPollDetailTopBarViewDelegate;
@class FBRichTextView, UIButton;

@interface MNPollDetailTopBarView : UIView {

	FBRichTextView* _titleTextView;
	UIButton* _closeButton;
	id<MNPollDetailTopBarViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNPollDetailTopBarViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didTapCloseButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNPollDetailTopBarViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNPollDetailTopBarViewDelegate>)delegate;
@end
