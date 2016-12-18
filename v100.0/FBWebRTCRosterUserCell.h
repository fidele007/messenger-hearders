/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Messenger/MNPresenceUpdateListening.h>

@protocol MNAvatarImageDecorating, MNPresenceSubscribing, FBWebRTCRosterCellDelegate;
@class UILabel, FBWebRTCCircleAudioLevelView, FBWebRTCPhotoCircleView, UIImageView, UIView, UIButton, FBWebRTCCallButton, FBMUser, FBWebRTCCallButtonImageProvider, FBWebRTCPinLockView, MNPresence, NSString;

@interface FBWebRTCRosterUserCell : UICollectionViewCell <MNPresenceUpdateListening> {

	UILabel* _nameLabel;
	UILabel* _detailsLabel;
	FBWebRTCCircleAudioLevelView* _circleAudioLevelView;
	FBWebRTCPhotoCircleView* _profilePhotoView;
	UIImageView* _squareProfilePhotoView;
	UIView* _selectionMaskView;
	UIView* _selectionFrameView;
	UIButton* _muteButton;
	FBWebRTCCallButton* _audioCallButton;
	FBMUser* _user;
	unsigned long long _state;
	BOOL _isMutingSupported;
	FBWebRTCCallButtonImageProvider* _callButtonImageProvider;
	id<MNAvatarImageDecorating> _avatarImageDecoration;
	id<MNPresenceSubscribing> _presenceSubscriptionService;
	FBWebRTCPinLockView* _pinLockView;
	unsigned long long _defaultCallButtonType;
	MNPresence* _lastPresence;
	BOOL _locked;
	id<FBWebRTCRosterCellDelegate> _delegate;

}

@property (nonatomic,copy,readonly) FBMUser * user;                                       //@synthesize user=_user - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebRTCRosterCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL locked;                                                 //@synthesize locked=_locked - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)maxVideoCellSize;
+(double)cellHeight;
-(void)didReceivePresenceUpdate:(id)arg1 ;
-(void)_startPresenceListener;
-(void)_stopPresenceListener;
-(void)_setPlatformIconType:(BOOL)arg1 ;
-(void)updateAudioLevel:(unsigned long long)arg1 ;
-(void)prepareWithCallButtonImageProvider:(id)arg1 callButtonType:(unsigned long long)arg2 avatarImageDecoration:(id)arg3 delegate:(id)arg4 ;
-(void)configureCellWithPlaceholder;
-(void)configureCellWithUser:(id)arg1 usingMessenger:(BOOL)arg2 inState:(unsigned long long)arg3 isMutingSupported:(BOOL)arg4 isMuted:(BOOL)arg5 isLocked:(BOOL)arg6 presenceSubscriptionService:(id)arg7 darkMode:(BOOL)arg8 ;
-(void)setProfilePhoto:(id)arg1 ;
-(id)getRingViewIfVisibile;
-(void)_muteButtonClick;
-(void)setMutingState:(BOOL)arg1 isSupported:(BOOL)arg2 ;
-(void)_ringButtonClick;
-(void)updateToState:(unsigned long long)arg1 ;
-(void)_setDetailLabelTextForState:(unsigned long long)arg1 isActive:(BOOL)arg2 ;
-(void)_setRingButtonTextForState:(unsigned long long)arg1 ;
-(FBMUser *)user;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBWebRTCRosterCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBWebRTCRosterCellDelegate>)delegate;
-(void)setLocked:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)locked;
@end

