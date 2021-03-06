/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:52 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNPaymentsPagesCommerceBuyerNUXViewControllerDelegate.h>
#import <Messenger/MNFoldableAdminMessageView.h>

@protocol MNFoldableAdminMessageViewDelegate;
@class UIView, UIImageView, FBRichTextView, UIButton, UIGestureRecognizer, MNRoundedCornerContainerPresenter, FBUserSession, FBMMessageKey, NSString;

@interface MNPaymentsPagesCommercePaymentEnabledAdminMessageView : UIView <MNPaymentsPagesCommerceBuyerNUXViewControllerDelegate, MNFoldableAdminMessageView> {

	UIView* _topSeparatorView;
	UIView* _backgroundView;
	UIImageView* _nuxImageView;
	FBRichTextView* _nuxContentView;
	UIButton* _nuxActionButton;
	UIView* _bottomSeparatorView;
	UIGestureRecognizer* _tapGestureRecognizer;
	MNRoundedCornerContainerPresenter* _presenter;
	FBUserSession* _session;
	id _viewModel;
	long long _viewState;
	FBMMessageKey* _messageKey;
	id<MNFoldableAdminMessageViewDelegate> _foldDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNFoldableAdminMessageViewDelegate> foldDelegate;              //@synthesize foldDelegate=_foldDelegate - In the implementation block
@property (nonatomic,copy) id viewModel;                                                              //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) long long viewState;                                                   //@synthesize viewState=_viewState - In the implementation block
@property (nonatomic,copy) FBMMessageKey * messageKey;                                                //@synthesize messageKey=_messageKey - In the implementation block
+(double)heightThatFitsWithViewModel:(id)arg1 maxWidth:(double)arg2 viewState:(long long)arg3 ;
-(void)setViewState:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setFoldDelegate:(id<MNFoldableAdminMessageViewDelegate>)arg1 ;
-(void)setMessageKey:(FBMMessageKey *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 modalPresenter:(id)arg3 imageDownloader:(id)arg4 ;
-(id<MNFoldableAdminMessageViewDelegate>)foldDelegate;
-(void)buyerNuxDidTapActionButton:(id)arg1 ;
-(void)_didTapButton:(id)arg1 ;
-(void)_presentBuyerNUX;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(long long)viewState;
-(id)viewModel;
-(void)setViewModel:(id)arg1 ;
-(FBMMessageKey *)messageKey;
@end

