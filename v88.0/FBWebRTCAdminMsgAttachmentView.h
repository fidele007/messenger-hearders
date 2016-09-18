/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNAttachmentView.h>

@protocol MNApplicationRootViewControllerGetting, MNModalPresentation, FBProvider;
@class FBWebRTCCallController, MNUserStore, FBWebRTCSchedulingLogger, FBWebRTCScheduleCallNavigationCoordinator, FBWebRTCScheduleCallMutationHelper, FBWebRTCAdminMsgAttachmentViewModel, FBMUser, MNCoreTextView, UIImageView, UIView, MNAttachmentActionButton, NSString;

@interface FBWebRTCAdminMsgAttachmentView : UIView <MNAttachmentView> {

	FBWebRTCCallController* _callController;
	MNUserStore* _userStore;
	id<MNApplicationRootViewControllerGetting> _applicationHandler;
	id<MNModalPresentation> _modalPresenter;
	FBWebRTCSchedulingLogger* _schedulingLogger;
	FBWebRTCScheduleCallNavigationCoordinator* _schedulingNavigationCoordinator;
	id<FBProvider> _scheduleCallMutationProvider;
	FBWebRTCScheduleCallMutationHelper* _scheduleCallMutation;
	FBWebRTCAdminMsgAttachmentViewModel* _rtcAdminMsgViewModel;
	FBMUser* _otherUser;
	MNCoreTextView* _titleView;
	MNCoreTextView* _subtitleView;
	UIImageView* _subtitleIconView;
	UIView* _actionSeperatorView;
	MNAttachmentActionButton* _actionButton;
	UIView* _schedulingActionSeperatorView;
	MNAttachmentActionButton* _schedulingActionButton;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id viewModel; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(void)_handleCallActionTap;
-(void)_handleScheduleCallActionTap;
-(id)_otherUserID;
-(id)_ensureScheduleCallMutation;
-(void)_handleScheduleCallActionTapCanMutateSchedule;
-(void)_showScheduleCallActionSheetWithOtherUser:(id)arg1 ;
-(id)_schedulingQuickTimePickerAlertControllerWithOtherUser:(id)arg1 ;
-(void)_tappedScheduleInOneHour;
-(void)_tappedScheduleCustomTimeWithOtherUser:(id)arg1 ;
-(void)_tappedCancelScheduleActionSheet;
-(void)_alertErrorWithTitle:(id)arg1 message:(id)arg2 ;
-(id)initWithCallController:(id)arg1 userStore:(id)arg2 applicationHandler:(id)arg3 modalPresenter:(id)arg4 schedulingLogger:(id)arg5 schedulingNavigationCoordinator:(id)arg6 scheduleCallMutationProvider:(id)arg7 ;
-(void)layoutSubviews;
-(id)viewModel;
-(void)setViewModel:(id)arg1 ;
@end

