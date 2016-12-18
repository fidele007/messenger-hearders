/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Messenger/FBClassInjectable.h>

@protocol MNContactCardCellDelegate;
@class UILabel, UIButton, MNBadgedProfileImageView, UIView, MNContactCardCellInjector, MNContactCardViewModel, NSString;

@interface MNContactCardCell : UICollectionViewCell <FBClassInjectable> {

	UILabel* _nameLabel;
	UILabel* _mutualFriendsContextLabel;
	UILabel* _firstTimelineContextDetailLabel;
	UILabel* _secondTimelineContextDetailLabel;
	UILabel* _thirdTimelineContextDetailLabel;
	UIButton* _messageButton;
	UIButton* _addContactButton;
	UIButton* _callButton;
	UIButton* _videoButton;
	MNBadgedProfileImageView* _profileImageView;
	UIView* _contactInfoContainerView;
	MNContactCardCellInjector* _injector;
	id<MNContactCardCellDelegate> _delegate;
	MNContactCardViewModel* _viewModel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNContactCardCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) MNContactCardViewModel * viewModel;                           //@synthesize viewModel=_viewModel - In the implementation block
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(void)_updateProfileImageView;
-(void)_didTapAddContactButton:(id)arg1 ;
-(void)_didTapMessageButton;
-(void)_didTapCallButton;
-(void)_didTapVideoButton;
-(double)_layoutTextLabel:(id)arg1 withYOffset:(double)arg2 ;
-(void)_updateMutualFriendsContext;
-(void)_updateTimelineContextStrings;
-(void)_updateAddContactButton;
-(void)setDelegate:(id<MNContactCardCellDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNContactCardCellDelegate>)delegate;
-(MNContactCardViewModel *)viewModel;
-(void)setViewModel:(MNContactCardViewModel *)arg1 ;
-(void)_updateName;
@end

