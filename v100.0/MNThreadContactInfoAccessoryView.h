/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol MNThreadContactInfoAccessoryViewDelegate;
@class UIColor, UIButton;

@interface MNThreadContactInfoAccessoryView : UIView {

	BOOL _audioEnabled;
	BOOL _videoEnabled;
	UIColor* _iconTintColor;
	BOOL _showCallButtons;
	id<MNThreadContactInfoAccessoryViewDelegate> _delegate;
	UIButton* _audioCallButton;
	UIButton* _videoCallButton;

}

@property (nonatomic,retain) UIButton * audioCallButton;                                                //@synthesize audioCallButton=_audioCallButton - In the implementation block
@property (nonatomic,retain) UIButton * videoCallButton;                                                //@synthesize videoCallButton=_videoCallButton - In the implementation block
@property (assign,nonatomic,__weak) id<MNThreadContactInfoAccessoryViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showCallButtons;                                                      //@synthesize showCallButtons=_showCallButtons - In the implementation block
-(void)_audioCallButtonPressed:(id)arg1 ;
-(void)_videoCallButtonPressed:(id)arg1 ;
-(void)_updateAudioButton;
-(void)_updateVideoButton;
-(void)setAudioButtonWithEnabledState:(BOOL)arg1 ;
-(void)setVideoButtonWithEnabledState:(BOOL)arg1 ;
-(BOOL)showCallButtons;
-(void)setShowCallButtons:(BOOL)arg1 ;
-(UIButton *)audioCallButton;
-(void)setAudioCallButton:(UIButton *)arg1 ;
-(UIButton *)videoCallButton;
-(void)setVideoCallButton:(UIButton *)arg1 ;
-(id)initWithAudioEnabled:(BOOL)arg1 videoEnabled:(BOOL)arg2 showCallButtons:(BOOL)arg3 themeColor:(id)arg4 ;
-(void)setDelegate:(id<MNThreadContactInfoAccessoryViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNThreadContactInfoAccessoryViewDelegate>)delegate;
@end

