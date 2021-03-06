/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNGrowingTextViewDelegate.h>

@protocol MNGroupsRoomCreateViewRoomBasicInfoCellViewDelegate;
@class MNGrowingTextView, FBFourRoundedCornerView, UIImage, UIButton, UIImageView, MNRoomPlaceholderImageView, UITapGestureRecognizer, NSString;

@interface MNGroupsRoomCreateViewRoomBasicInfoCellView : UIView <MNGrowingTextViewDelegate> {

	MNGrowingTextView* _roomNameTextField;
	FBFourRoundedCornerView* _profilePictureContainerView;
	UIImage* _roomProfileCameraIconImage;
	UIButton* _roomProfileImageCameraButton;
	UIButton* _roomProfileImageCameraOverlayButton;
	UIImageView* _roomProfileImageView;
	MNRoomPlaceholderImageView* _roomPlaceholderImageView;
	BOOL _hasProfileImage;
	UITapGestureRecognizer* _tapGestureRecognizer;
	id<MNGroupsRoomCreateViewRoomBasicInfoCellViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNGroupsRoomCreateViewRoomBasicInfoCellViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didSelectRoomProfilePhoto;
-(void)_setProfileImage:(id)arg1 ;
-(void)_layoutProfilePhotoViews;
-(void)_layoutNameTextFieldRelativeTo:(id)arg1 margin:(double)arg2 ;
-(id)_profileCoverImageBackgroundColor;
-(void)growingTextViewDidEndEditing:(id)arg1 ;
-(void)growingTextViewDidChange:(id)arg1 ;
-(void)growingTextView:(id)arg1 willChangeHeight:(double)arg2 ;
-(BOOL)growingTextViewShouldReturn:(id)arg1 ;
-(void)configureWithRoomName:(id)arg1 profileImage:(id)arg2 ;
-(void)textFieldBecomeFirstResponder;
-(void)textFieldResignFirstResponder;
-(BOOL)hasProfilePicture;
-(void)resetBasicInfo;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNGroupsRoomCreateViewRoomBasicInfoCellViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNGroupsRoomCreateViewRoomBasicInfoCellViewDelegate>)delegate;
-(void)tintColorDidChange;
@end

