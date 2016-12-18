/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <Messenger/MNThreadDetailsHeaderViewDelegate.h>
#import <Messenger/MNThreadDetailsContactTableViewDataSourceDelegate.h>
#import <Messenger/MNPresenceUpdateListening.h>
#import <Messenger/FBWebRTCCallStarterDelegate.h>
#import <Messenger/MNThreadViewModelConfigurable.h>

@protocol FBClock, MNAuthenticationManager, MNInviteEligibilityChecking, MNPerformanceMarking, MNThreadDetailsContactViewControllerDelegate;
@class FBUserSession, MNThreadDetailsContactView, MNThreadDetailsHeaderView, FBMUser, MNThreadImageManager, MNProfileImageViewController, MNThreadDetailsContactTableViewDataSource, MNPresenceSubscriptionService, MNThreadViewModel, FBWebRTCCallStarter, FBWebRTCCallButtonImageProvider, MNUserInfoControllerCoordinator, MNThreadDetailsPageConfiguration, NSString;

@interface MNThreadDetailsContactViewController : UIViewController <UITableViewDelegate, MNThreadDetailsHeaderViewDelegate, MNThreadDetailsContactTableViewDataSourceDelegate, MNPresenceUpdateListening, FBWebRTCCallStarterDelegate, MNThreadViewModelConfigurable> {

	FBUserSession* _session;
	MNThreadDetailsContactView* _view;
	MNThreadDetailsHeaderView* _threadContactHeaderView;
	FBMUser* _contact;
	MNThreadImageManager* _threadImageManager;
	MNProfileImageViewController* _profileImageViewController;
	MNThreadDetailsContactTableViewDataSource* _tableViewDataSource;
	id<FBClock> _clock;
	MNPresenceSubscriptionService* _presenceService;
	MNThreadViewModel* _threadViewModel;
	FBWebRTCCallStarter* _callStarter;
	FBWebRTCCallButtonImageProvider* _callButtonImageProvider;
	MNUserInfoControllerCoordinator* _userInfoControllerCoordinator;
	MNThreadDetailsPageConfiguration* _threadDetailsPageConfiguration;
	id<MNAuthenticationManager> _authManager;
	id<MNInviteEligibilityChecking> _inviteEligibilityChecker;
	id<MNPerformanceMarking> _performanceMarker;
	id<MNThreadDetailsContactViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNThreadDetailsContactViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tearDownThreadViewModelDependencies;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(id)threadViewModel;
-(void)callStarterDidUpdateCallState:(id)arg1 ;
-(void)callStarter:(id)arg1 canMakeOutboundCallDidChange:(BOOL)arg2 ;
-(void)didReceivePresenceUpdate:(id)arg1 ;
-(id)initWithSession:(id)arg1 contact:(id)arg2 threadImageManager:(id)arg3 profileImageViewController:(id)arg4 clock:(id)arg5 presenceSubscriptionService:(id)arg6 callStarter:(id)arg7 callButtonImageProvider:(id)arg8 avatarImageDecoration:(id)arg9 userInfoControllerCoordinator:(id)arg10 inviteEligibilityChecker:(id)arg11 threadDetailsPageConfig:(id)arg12 authManager:(id)arg13 blockFeatureConfiguration:(id)arg14 performanceMarker:(id)arg15 configManager:(id)arg16 ;
-(BOOL)threadDetailsContactTableViewDataShourceShouldShowRoundedCorners:(id)arg1 ;
-(void)_configureHeaderView;
-(void)_updateHeaderViewWithSyncPresence:(id)arg1 ;
-(void)threadDetailsHeaderViewDidPressImageView:(id)arg1 ;
-(void)threadDetailsHeaderViewDidPressThreadNameLabel:(id)arg1 ;
-(void)threadDetailsHeaderViewDidTapEmptySpace:(id)arg1 ;
-(void)threadDetailsHeaderViewDidEndEditingThreadName:(id)arg1 ;
-(BOOL)threadDetailsHeaderViewCanEditThreadName:(id)arg1 ;
-(void)setDelegate:(id<MNThreadDetailsContactViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<MNThreadDetailsContactViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end
