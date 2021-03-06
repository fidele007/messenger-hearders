/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <Messenger/MNPeopleCellActionButtonDelegate.h>
#import <Messenger/MNProfilePreviewing.h>

@protocol MNAvatarImageDecorating, MNPeopleCellDelegate;
@class MNProfileImageView, MNProfileImageViewController, MNThreadImageManager, MNPeopleCellViewModel, FBLazyCreator, MNConversationContact, UILabel, MNPeopleCellActionButtonConfiguration, MNTableViewCellStyle, UIImageView, UITapGestureRecognizer, UIView, MNPeopleCellActionButton, UIImage, NSString;

@interface MNPeopleCell : UITableViewCell <MNPeopleCellActionButtonDelegate, MNProfilePreviewing> {

	MNProfileImageView* _profileImageView;
	MNProfileImageViewController* _profileImageViewController;
	id<MNAvatarImageDecorating> _avatarImageDecoration;
	MNThreadImageManager* _threadImageManager;
	MNPeopleCellViewModel* _viewModel;
	FBLazyCreator* _audioButtonCreator;
	FBLazyCreator* _videoButtonCreator;
	BOOL _useSelectionBackground;
	BOOL _forceSelected;
	BOOL _showsLineSeparator;
	BOOL _enabled;
	MNConversationContact* _photoContact;
	unsigned long long _iconType;
	UILabel* _accessoryLabel;
	double _paddingOnRightEdge;
	id<MNPeopleCellDelegate> _delegate;
	MNPeopleCellActionButtonConfiguration* _actionButtonConfiguration;
	MNTableViewCellStyle* _cellStyle;
	UILabel* _mainLabel;
	UILabel* _detailLabel;
	UIImageView* _maskImage;
	UIImageView* _maskImagePressed;
	UITapGestureRecognizer* _contextActionRecognizer;
	UIImageView* _contextImage;
	UILabel* _contextLabel;
	unsigned long long _contextStyle;
	UIView* _lineSeparator;
	UIView* _disabledOverlayView;
	MNPeopleCellActionButton* _actionButton;

}

@property (nonatomic,readonly) MNTableViewCellStyle * cellStyle;                                             //@synthesize cellStyle=_cellStyle - In the implementation block
@property (nonatomic,retain) UILabel * mainLabel;                                                            //@synthesize mainLabel=_mainLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;                                                          //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,retain) UIImageView * maskImage;                                                        //@synthesize maskImage=_maskImage - In the implementation block
@property (nonatomic,retain) UIImageView * maskImagePressed;                                                 //@synthesize maskImagePressed=_maskImagePressed - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * contextActionRecognizer;                               //@synthesize contextActionRecognizer=_contextActionRecognizer - In the implementation block
@property (nonatomic,retain) UIImageView * contextImage;                                                     //@synthesize contextImage=_contextImage - In the implementation block
@property (nonatomic,retain) UILabel * contextLabel;                                                         //@synthesize contextLabel=_contextLabel - In the implementation block
@property (assign,nonatomic) unsigned long long contextStyle;                                                //@synthesize contextStyle=_contextStyle - In the implementation block
@property (nonatomic,retain) UIView * lineSeparator;                                                         //@synthesize lineSeparator=_lineSeparator - In the implementation block
@property (nonatomic,retain) UIView * disabledOverlayView;                                                   //@synthesize disabledOverlayView=_disabledOverlayView - In the implementation block
@property (nonatomic,retain) MNPeopleCellActionButton * actionButton;                                        //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,retain) MNConversationContact * photoContact;                                           //@synthesize photoContact=_photoContact - In the implementation block
@property (assign,nonatomic) BOOL useSelectionBackground;                                                    //@synthesize useSelectionBackground=_useSelectionBackground - In the implementation block
@property (assign,nonatomic) BOOL forceSelected;                                                             //@synthesize forceSelected=_forceSelected - In the implementation block
@property (assign,nonatomic) unsigned long long iconType;                                                    //@synthesize iconType=_iconType - In the implementation block
@property (nonatomic,retain) UILabel * accessoryLabel;                                                       //@synthesize accessoryLabel=_accessoryLabel - In the implementation block
@property (assign,nonatomic) double paddingOnRightEdge;                                                      //@synthesize paddingOnRightEdge=_paddingOnRightEdge - In the implementation block
@property (assign,nonatomic) BOOL showsLineSeparator;                                                        //@synthesize showsLineSeparator=_showsLineSeparator - In the implementation block
@property (assign,nonatomic,__weak) id<MNPeopleCellDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                  //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) UIImage * audioIcon; 
@property (nonatomic,retain) UIImage * videoIcon; 
@property (nonatomic,retain) MNPeopleCellActionButtonConfiguration * actionButtonConfiguration;              //@synthesize actionButtonConfiguration=_actionButtonConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)cellHeightForIndex:(unsigned long long)arg1 ;
-(void)_updateDrawCellAsSelected;
-(id)previewableProfileAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)setPhotoContact:(MNConversationContact *)arg1 ;
-(void)setIconType:(unsigned long long)arg1 ;
-(void)setShowsLineSeparator:(BOOL)arg1 ;
-(void)configureWithPeopleCellViewModel:(id)arg1 ;
-(void)setActionButtonConfiguration:(MNPeopleCellActionButtonConfiguration *)arg1 ;
-(void)updateContext:(id)arg1 image:(id)arg2 isActionEnabled:(BOOL)arg3 withStyle:(unsigned long long)arg4 ;
-(void)setForceSelected:(BOOL)arg1 ;
-(MNConversationContact *)photoContact;
-(UILabel *)accessoryLabel;
-(void)setActionButtonEnabled:(BOOL)arg1 ;
-(void)setUseSelectionBackground:(BOOL)arg1 ;
-(void)setAudioIcon:(UIImage *)arg1 ;
-(void)setVideoIcon:(UIImage *)arg1 ;
-(MNPeopleCellActionButtonConfiguration *)actionButtonConfiguration;
-(UIImageView *)maskImagePressed;
-(void)_contextTappedWithGestureRecognizer:(id)arg1 ;
-(void)_tappedAudioCallButton:(id)arg1 ;
-(void)_tappedVideoCallButton:(id)arg1 ;
-(double)_avatarPhotoSize;
-(UIImage *)videoIcon;
-(UIImage *)audioIcon;
-(void)_setMainLabelAttributedText:(id)arg1 ;
-(void)_setDetailLabelAttributedText:(id)arg1 ;
-(void)_createActionButtonIfNecessary;
-(void)_createDisabledOverlayViewIfNecessary;
-(BOOL)forceSelected;
-(void)_updateDrawCellBackgroundAsSelected:(BOOL)arg1 ;
-(void)didTapPeopleCellActionButton:(id)arg1 ;
-(void)peopleCellActionButton:(id)arg1 didUpdateActionButtonState:(id)arg2 ;
-(id)initWithCellStyle:(id)arg1 reuseIdentifier:(id)arg2 avatarImageDecoration:(id)arg3 threadImageManager:(id)arg4 profileImageViewController:(id)arg5 ;
-(double)maxWidthForLabelsForTableWidth:(double)arg1 ;
-(BOOL)useSelectionBackground;
-(void)setAccessoryLabel:(UILabel *)arg1 ;
-(double)paddingOnRightEdge;
-(void)setPaddingOnRightEdge:(double)arg1 ;
-(BOOL)showsLineSeparator;
-(void)setMaskImagePressed:(UIImageView *)arg1 ;
-(UITapGestureRecognizer *)contextActionRecognizer;
-(void)setContextActionRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UIImageView *)contextImage;
-(void)setContextImage:(UIImageView *)arg1 ;
-(UILabel *)contextLabel;
-(void)setContextLabel:(UILabel *)arg1 ;
-(unsigned long long)contextStyle;
-(void)setContextStyle:(unsigned long long)arg1 ;
-(UIView *)lineSeparator;
-(void)setLineSeparator:(UIView *)arg1 ;
-(UIView *)disabledOverlayView;
-(void)setDisabledOverlayView:(UIView *)arg1 ;
-(void)setDelegate:(id<MNPeopleCellDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNPeopleCellDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)setMaskImage:(UIImageView *)arg1 ;
-(void)_layoutLabels;
-(unsigned long long)iconType;
-(UIImageView *)maskImage;
-(void)setMainLabel:(UILabel *)arg1 ;
-(MNPeopleCellActionButton *)actionButton;
-(UILabel *)detailLabel;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(void)setActionButton:(MNPeopleCellActionButton *)arg1 ;
-(UILabel *)mainLabel;
-(MNTableViewCellStyle *)cellStyle;
@end

