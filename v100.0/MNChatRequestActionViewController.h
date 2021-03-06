/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNChatRequestActionViewDelegate.h>
#import <Messenger/FBClassProvidable.h>

@class MNChatRequestActionView, MNThreadUpdateRunningService, FBUserSession, MNNavigationCoordinator, UIAlertController, FBAnalytics, MNAddMessengerContactController, FBMLoggedInUserInfoManager, FBMobileConfigContextManager, MNMessageRequestActionController, MNThreadViewModel, NSString;

@interface MNChatRequestActionViewController : UIViewController <MNChatRequestActionViewDelegate, FBClassProvidable> {

	MNChatRequestActionView* _requestView;
	MNThreadUpdateRunningService* _updateRunner;
	BOOL _hideReplyButton;
	FBUserSession* _session;
	MNNavigationCoordinator* _navigationCoordinator;
	UIAlertController* _declineAlertController;
	FBAnalytics* _analytics;
	MNAddMessengerContactController* _addMessengerContactController;
	FBMLoggedInUserInfoManager* _loggedInUserInfoManager;
	FBMobileConfigContextManager* _configManager;
	MNMessageRequestActionController* _messageRequestActionController;
	MNThreadViewModel* _threadViewModel;

}

@property (nonatomic,copy) MNThreadViewModel * threadViewModel;              //@synthesize threadViewModel=_threadViewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(MNThreadViewModel *)threadViewModel;
-(void)setThreadViewModel:(MNThreadViewModel *)arg1 ;
-(void)requestActionViewDidPressAccept:(id)arg1 ;
-(void)requestActionViewDidPressAddContact:(id)arg1 ;
-(void)requestActionViewDidPressDecline:(id)arg1 ;
-(void)requestActionViewDidPressIgnore:(id)arg1 ;
-(id)initWithSummaryUpdateRunner:(id)arg1 session:(id)arg2 navigationCoordinator:(id)arg3 analytics:(id)arg4 addMessengerContactController:(id)arg5 loggedInUserManager:(id)arg6 configManager:(id)arg7 messageRequestActionController:(id)arg8 ;
-(void)_addAsMessengerContact;
-(void)setHidesReplyButton:(BOOL)arg1 ;
-(void)loadView;
@end

