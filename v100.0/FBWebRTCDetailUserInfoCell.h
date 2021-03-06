/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <Messenger/MNProfilePreviewing.h>

@protocol MNAvatarImageDecorating, FBWebRTCDetailUserInfoCellDelegate;
@class UILabel, UIView, UIImageView, MNDateFormatter, FBWebRTCCallButtonImageProvider, FBWebRTCCallButton, MNConversationContact, MNProfileImageModel, MNProfileImageView, NSString;

@interface FBWebRTCDetailUserInfoCell : UITableViewCell <MNProfilePreviewing> {

	UILabel* _nameLabel;
	UILabel* _dateLabel;
	UIView* _lineSeparator;
	UIImageView* _maskImage;
	id<MNAvatarImageDecorating> _avatarImageDecoration;
	MNDateFormatter* _dateFormatter;
	FBWebRTCCallButtonImageProvider* _callButtonImageProvider;
	unsigned long long _iconType;
	FBWebRTCCallButton* _audioCallButton;
	FBWebRTCCallButton* _videoCallButton;
	FBWebRTCCallButton* _threadButton;
	MNConversationContact* _contact;
	BOOL _hidesLineSeparator;
	MNProfileImageModel* _profileImageModel;
	id<FBWebRTCDetailUserInfoCellDelegate> _delegate;
	MNProfileImageView* _profileImageView;

}

@property (assign,nonatomic,__weak) id<FBWebRTCDetailUserInfoCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MNProfileImageView * profileImageView;                             //@synthesize profileImageView=_profileImageView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MNProfileImageView *)profileImageView;
-(id)previewableProfileAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)_layoutProfileImage;
-(id)initWithReuseIdentifier:(id)arg1 avatarImageDecoration:(id)arg2 callButtonImageProvider:(id)arg3 directVideoCallingEnabled:(BOOL)arg4 dateFormatter:(id)arg5 ;
-(void)configureWithCallCellData:(id)arg1 onlineStatus:(BOOL)arg2 profileImageModel:(id)arg3 ;
-(void)_audioButtonClick;
-(void)_videoButtonClick;
-(void)_setPlatformIconType:(unsigned long long)arg1 ;
-(void)_layoutCellSeparator;
-(void)_threadButtonClick;
-(void)setDelegate:(id<FBWebRTCDetailUserInfoCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBWebRTCDetailUserInfoCellDelegate>)delegate;
-(void)prepareForReuse;
-(void)_layoutLabels;
-(void)_layoutButtons;
@end

