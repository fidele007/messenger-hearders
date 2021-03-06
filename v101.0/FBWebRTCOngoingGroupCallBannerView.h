/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBWebRTCOngoingGroupCallBannerViewDelegate;
@class PABlurView, UILabel, UIButton, UIView;

@interface FBWebRTCOngoingGroupCallBannerView : UIView {

	PABlurView* _backgroundBar;
	UILabel* _label;
	UIButton* _joinButton;
	UIView* _separatorView;
	id<FBWebRTCOngoingGroupCallBannerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBWebRTCOngoingGroupCallBannerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_updateJoinButtonLabelColor;
-(void)_didTapJoinButton:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBWebRTCOngoingGroupCallBannerViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBWebRTCOngoingGroupCallBannerViewDelegate>)delegate;
-(void)tintColorDidChange;
@end

