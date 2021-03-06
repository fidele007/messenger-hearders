/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:51 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class MNProfileImageViewController, MNProfileImageView, MNJoinableGroupActionHeaderLabelView, MNJoinableGroupActionHeaderViewModel;

@interface MNJoinableGroupActionHeaderView : UIView {

	MNProfileImageViewController* _profileImageViewController;
	MNProfileImageView* _profileImageView;
	MNJoinableGroupActionHeaderLabelView* _labelView;
	MNJoinableGroupActionHeaderViewModel* _viewModel;

}

@property (nonatomic,copy) MNJoinableGroupActionHeaderViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
-(id)initWithProfileImageViewController:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(MNJoinableGroupActionHeaderViewModel *)viewModel;
-(void)setViewModel:(MNJoinableGroupActionHeaderViewModel *)arg1 ;
@end

