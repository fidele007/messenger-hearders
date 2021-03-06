/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol FBWebRTCNewCallCellDelegate;
@class FBWebRTCCallButtonImageProvider, UILabel, UIView, FBWebRTCCallButton, UIButton;

@interface FBWebRTCNewCallCell : UITableViewCell {

	FBWebRTCCallButtonImageProvider* _callButtonImageProvider;
	UILabel* _titleLabel;
	UIView* _buttonsContainer;
	FBWebRTCCallButton* _audioCallButton;
	FBWebRTCCallButton* _videoCallButton;
	UIButton* _groupCallButton;
	UIButton* _scheduleCallButton;
	id<FBWebRTCNewCallCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBWebRTCNewCallCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithReuseIdentifier:(id)arg1 callButtonImageProvider:(id)arg2 directVideoCallingEnabled:(BOOL)arg3 groupCallingEnabled:(BOOL)arg4 scheduleCallEnabled:(BOOL)arg5 ;
-(void)_audioButtonClick;
-(void)_videoButtonClick;
-(void)_groupCallButtonClick;
-(void)_scheduleCallButtonClick;
-(void)setDelegate:(id<FBWebRTCNewCallCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBWebRTCNewCallCellDelegate>)delegate;
-(void)_layoutButtons;
@end

