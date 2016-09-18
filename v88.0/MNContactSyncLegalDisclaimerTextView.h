/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNContactSyncLegalDisclaimerTextViewDelegate;
@class FBRichTextView;

@interface MNContactSyncLegalDisclaimerTextView : UIView {

	FBRichTextView* _legalDisclaimerTextView;
	NSRange _manageContactsLinkStringRange;
	id<MNContactSyncLegalDisclaimerTextViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNContactSyncLegalDisclaimerTextViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)_handleLinkTapAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)legalTextAttributedLabelAction:(id)arg1 withEvent:(id)arg2 ;
-(void)_setLegalDisclaimerTextWithManageContactsLink;
-(CGSize)_disclaimerTextViewSizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNContactSyncLegalDisclaimerTextViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNContactSyncLegalDisclaimerTextViewDelegate>)delegate;
@end

