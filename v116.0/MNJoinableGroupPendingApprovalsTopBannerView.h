/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:48 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNJoinableGroupPendingApprovalsTopBannerViewDelegate;
@class PABlurView, UIView, FBRichTextView, UIButton;

@interface MNJoinableGroupPendingApprovalsTopBannerView : UIView {

	PABlurView* _backgroundView;
	UIView* _bottomSeparatorView;
	FBRichTextView* _pendingApprovalsRichTextView;
	UIButton* _closeButton;
	id<MNJoinableGroupPendingApprovalsTopBannerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNJoinableGroupPendingApprovalsTopBannerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setPendingApprovalRequestsCount:(long long)arg1 ;
-(void)didPressViewApprovalsButton;
-(void)didTapCloseButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNJoinableGroupPendingApprovalsTopBannerViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNJoinableGroupPendingApprovalsTopBannerViewDelegate>)delegate;
@end

