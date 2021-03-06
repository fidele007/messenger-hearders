/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNMontageProgressIndicatorViewDelegate.h>
#import <Messenger/MNMontageSendBeeperViewDelegate.h>
#import <Messenger/MNMontageSendStateViewDelegate.h>
#import <Messenger/MNMontageLoadingErrorViewDelegate.h>

@protocol MNMontageOverlayViewDelegate;
@class FBGradientView, UILabel, UIImageView, UIButton, MNMontageProgressIndicatorView, MNMontageSendBeeperView, MNMontageSendStateView, MNMontageLoadingErrorView, UIActivityIndicatorView, FBTimer, UIView, NSArray, NSString, UIImage;

@interface MNMontageOverlayView : UIView <MNMontageProgressIndicatorViewDelegate, MNMontageSendBeeperViewDelegate, MNMontageSendStateViewDelegate, MNMontageLoadingErrorViewDelegate> {

	FBGradientView* _upperScrimView;
	FBGradientView* _lowerScrimView;
	FBGradientView* _leftScrimView;
	UILabel* _montageAuthorLabel;
	UILabel* _subtitleLabel;
	UIImageView* _profileImageView;
	UIImageView* _profileImageOnlineIndicator;
	UIButton* _profileButton;
	UIButton* _seenHeadButton;
	MNMontageProgressIndicatorView* _progressIndicatorView;
	MNMontageSendBeeperView* _sendBeeperView;
	MNMontageSendStateView* _sendStateView;
	UIButton* _overflowMenuButton;
	MNMontageLoadingErrorView* _loadingErrorView;
	UIActivityIndicatorView* _contentLoadingIndicator;
	BOOL _sendBeeperDisplayed;
	FBTimer* _timer;
	UIView* _cannedResponsesView;
	BOOL _showsOnlineIndicator;
	BOOL _showsScrim;
	BOOL _showOverflowMenu;
	BOOL _showComposer;
	BOOL _showsContentLoadingIndicator;
	BOOL _showsContentLoadingError;
	id<MNMontageOverlayViewDelegate> _delegate;
	NSArray* _seenHeadViews;
	double _seenHeadSize;
	UIView* _composeView;
	CGRect _keyboardFrame;

}

@property (assign,nonatomic,__weak) id<MNMontageOverlayViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsScrim;                                               //@synthesize showsScrim=_showsScrim - In the implementation block
@property (assign,nonatomic) BOOL showsLeftScrim; 
@property (nonatomic,copy) NSString * montageAuthorName; 
@property (nonatomic,copy) NSString * subtitleText; 
@property (assign,nonatomic) unsigned long long currentMessageIndex; 
@property (assign,nonatomic) unsigned long long totalMessageCount; 
@property (nonatomic,retain) UIImage * profileImage; 
@property (nonatomic,copy) NSArray * seenHeadViews;                                         //@synthesize seenHeadViews=_seenHeadViews - In the implementation block
@property (assign,nonatomic) double seenHeadSize;                                           //@synthesize seenHeadSize=_seenHeadSize - In the implementation block
@property (assign,nonatomic) BOOL showOverflowMenu;                                         //@synthesize showOverflowMenu=_showOverflowMenu - In the implementation block
@property (assign,nonatomic) BOOL showComposer;                                             //@synthesize showComposer=_showComposer - In the implementation block
@property (nonatomic,retain) UIView * composeView;                                          //@synthesize composeView=_composeView - In the implementation block
@property (assign,nonatomic) CGRect keyboardFrame;                                          //@synthesize keyboardFrame=_keyboardFrame - In the implementation block
@property (assign,nonatomic) BOOL showsContentLoadingIndicator;                             //@synthesize showsContentLoadingIndicator=_showsContentLoadingIndicator - In the implementation block
@property (assign,nonatomic) BOOL showsContentLoadingError;                                 //@synthesize showsContentLoadingError=_showsContentLoadingError - In the implementation block
@property (nonatomic,retain) UIView * cannedResponsesView;                                  //@synthesize cannedResponsesView=_cannedResponsesView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSeenHeadSize:(double)arg1 ;
-(double)_keyboardTopY;
-(void)montageLoadingErrorViewDidTap:(id)arg1 ;
-(void)_didTapProfile;
-(void)_didTapSeenHeadButton:(id)arg1 ;
-(void)_didTapOverflowButton:(id)arg1 ;
-(void)_layoutSeenHeadViews;
-(void)_layoutCannedResponsesView;
-(void)_updateBottomViewsVisibility;
-(void)_scheduleSendBeeperDismissalAfterDuration:(double)arg1 ;
-(void)_updateReplyUIVisibility;
-(BOOL)showsLeftScrim;
-(NSString *)montageAuthorName;
-(BOOL)showsScrim;
-(double)seenHeadSize;
-(BOOL)showOverflowMenu;
-(BOOL)showsContentLoadingIndicator;
-(BOOL)showsContentLoadingError;
-(UIView *)cannedResponsesView;
-(void)resetProgressIndicator;
-(void)montageProgressIndicatorViewDidFinish:(id)arg1 ;
-(void)setTotalMessageCount:(unsigned long long)arg1 ;
-(void)setCurrentMessageIndex:(unsigned long long)arg1 ;
-(void)startProgressIndicatorWithDuration:(double)arg1 ;
-(void)pauseProgressIndicator;
-(void)resumeProgressIndicator;
-(unsigned long long)totalMessageCount;
-(unsigned long long)currentMessageIndex;
-(void)montageSendBeeperViewDidTapClose:(id)arg1 ;
-(void)montageSendStateViewDidTap:(id)arg1 ;
-(void)setCannedResponsesView:(UIView *)arg1 ;
-(void)setShowComposer:(BOOL)arg1 ;
-(void)setShowsOnlineIndicator:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setShowsContentLoadingIndicator:(BOOL)arg1 ;
-(void)setShowsContentLoadingError:(BOOL)arg1 ;
-(void)setMontageAuthorName:(NSString *)arg1 ;
-(void)setShowOverflowMenu:(BOOL)arg1 ;
-(void)setShowsScrim:(BOOL)arg1 ;
-(void)updateSendState:(unsigned long long)arg1 ;
-(void)updateSendProgress:(double)arg1 ;
-(void)setSeenHeadViews:(NSArray *)arg1 ;
-(void)hideSendBeeperAnimated:(BOOL)arg1 ;
-(void)displaySendBeeperWithText:(id)arg1 duration:(double)arg2 delay:(double)arg3 ;
-(NSArray *)seenHeadViews;
-(void)setShowsLeftScrim:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNMontageOverlayViewDelegate>)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<MNMontageOverlayViewDelegate>)delegate;
-(BOOL)showComposer;
-(void)setComposeView:(UIView *)arg1 ;
-(UIView *)composeView;
-(void)_layoutComposeView;
-(void)setSubtitleText:(NSString *)arg1 ;
-(CGRect)keyboardFrame;
-(void)setProfileImage:(UIImage *)arg1 ;
-(UIImage *)profileImage;
-(void)setKeyboardFrame:(CGRect)arg1 ;
-(void)updateProgressIndicator:(double)arg1 ;
-(NSString *)subtitleText;
@end

