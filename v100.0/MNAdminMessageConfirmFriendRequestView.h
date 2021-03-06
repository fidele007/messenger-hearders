/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNAdminMessageConfirmFriendRequestViewGreetingViewDelegate.h>

@protocol MNAdminMessageConfirmFriendRequestViewDelegate;
@class FBUserSession, MNCDNProfileImageDownloader, UIImageView, UILabel, UIColor, UIButton, UIView, MNAdminMessageConfirmFriendRequestViewModel, MNAdminMessageConfirmFriendRequestViewGreetingView, NSString;

@interface MNAdminMessageConfirmFriendRequestView : UIView <MNAdminMessageConfirmFriendRequestViewGreetingViewDelegate> {

	FBUserSession* _session;
	MNCDNProfileImageDownloader* _imageDownloader;
	UIImageView* _otherUserProfileImageView;
	UIImageView* _loggedInUserProfileImageView;
	UILabel* _adminMessageLabel;
	UIColor* _adminMessageColor;
	UIButton* _actionButton;
	UIView* _lockPrivacyView;
	UIColor* _actionButtonTitleColor;
	MNAdminMessageConfirmFriendRequestViewModel* _viewModel;
	MNAdminMessageConfirmFriendRequestViewGreetingView* _greetingView;
	BOOL _viewModelHasValidGreetings;
	id<MNAdminMessageConfirmFriendRequestViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNAdminMessageConfirmFriendRequestViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeThatFits:(CGSize)arg1 withText:(id)arg2 actionButtonType:(long long)arg3 greetings:(id)arg4 ;
-(void)configureWithViewModel:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 cdnImageDownloader:(id)arg3 adminMessageColor:(id)arg4 actionButtonTitleColor:(id)arg5 ;
-(void)_actionButtonDidTap;
-(void)_downloadProfileImageWithUserId:(id)arg1 toImageView:(id)arg2 ;
-(void)_updateLockPrivacyView;
-(void)_updateGreetingView;
-(void)_createActionButtonIfNeeded;
-(void)_createLockPrivacyViewIfNeeded;
-(void)_createGreetingViewIfNeeded;
-(void)adminMessageConfirmFriendRequestViewGreetingView:(id)arg1 didSelectGreeting:(id)arg2 ;
-(void)adminMessageConfirmFriendRequestViewGreetingViewDidTapDismissButton:(id)arg1 ;
-(void)setDelegate:(id<MNAdminMessageConfirmFriendRequestViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNAdminMessageConfirmFriendRequestViewDelegate>)delegate;
-(void)_updateActionButton;
@end

