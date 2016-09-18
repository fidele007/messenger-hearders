/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNWelcomeViewDelegate;
@class UIImageView, UILabel, UIButton, MNButton;

@interface MNWelcomeView : UIView {

	UIImageView* _userPicImageView;
	id<MNWelcomeViewDelegate> _delegate;
	UILabel* _welcomeToMessengerLabel;
	UILabel* _reachabilityLabel;
	UIImageView* _messengerBadge;
	UIButton* _okButton;
	MNButton* _enableNotificationsButton;
	MNButton* _continueWithoutNotificationsButton;

}

@property (nonatomic,retain) UILabel * welcomeToMessengerLabel;                          //@synthesize welcomeToMessengerLabel=_welcomeToMessengerLabel - In the implementation block
@property (nonatomic,retain) UILabel * reachabilityLabel;                                //@synthesize reachabilityLabel=_reachabilityLabel - In the implementation block
@property (nonatomic,retain) UIImageView * messengerBadge;                               //@synthesize messengerBadge=_messengerBadge - In the implementation block
@property (nonatomic,retain) UIButton * okButton;                                        //@synthesize okButton=_okButton - In the implementation block
@property (nonatomic,retain) MNButton * enableNotificationsButton;                       //@synthesize enableNotificationsButton=_enableNotificationsButton - In the implementation block
@property (nonatomic,retain) MNButton * continueWithoutNotificationsButton;              //@synthesize continueWithoutNotificationsButton=_continueWithoutNotificationsButton - In the implementation block
@property (nonatomic,readonly) UIImageView * userPicImageView;                           //@synthesize userPicImageView=_userPicImageView - In the implementation block
@property (assign,nonatomic,__weak) id<MNWelcomeViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
-(void)_okButtonTapped;
-(void)_enableNotificationsButtonTapped;
-(void)_continueWithoutNotificationsButtonTapped;
-(void)_layoutContinueWithoutNotificationsButton;
-(void)_layoutEnableNotificationsButton;
-(id)initWithFrame:(CGRect)arg1 welcomeViewType:(unsigned long long)arg2 configuration:(id)arg3 avatarImageDecoration:(id)arg4 ;
-(UIImageView *)userPicImageView;
-(UILabel *)welcomeToMessengerLabel;
-(void)setWelcomeToMessengerLabel:(UILabel *)arg1 ;
-(UILabel *)reachabilityLabel;
-(void)setReachabilityLabel:(UILabel *)arg1 ;
-(UIImageView *)messengerBadge;
-(void)setMessengerBadge:(UIImageView *)arg1 ;
-(MNButton *)enableNotificationsButton;
-(void)setEnableNotificationsButton:(MNButton *)arg1 ;
-(MNButton *)continueWithoutNotificationsButton;
-(void)setContinueWithoutNotificationsButton:(MNButton *)arg1 ;
-(void)setDelegate:(id<MNWelcomeViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNWelcomeViewDelegate>)delegate;
-(UIButton *)okButton;
-(void)setOkButton:(UIButton *)arg1 ;
@end

