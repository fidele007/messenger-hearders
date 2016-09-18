/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNJoinableGroupThreadInterstitialViewDelegate.h>
#import <Messenger/MNNavigationListener.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/FBMSPDeltaHandlerListener.h>

@protocol FBMSPDeltaHandlerListener;
@class MNNavigationCoordinator, MNThreadNavigationCoordinator, MNProfileImageViewController, MNThreadImageManager, FBUserSession, MNJoinableGroupThreadInterstitialView, MNJoinableGroupThreadInterstitialViewModel, FBLanguageNameFormatFactory, NSString, FBMSPDeltaHandlerListenerAnnouncer, MNThreadStore, FBTimer;

@interface MNJoinableGroupThreadInterstitialViewController : UIViewController <MNJoinableGroupThreadInterstitialViewDelegate, MNNavigationListener, FBClassProvidable, FBMSPDeltaHandlerListener> {

	MNNavigationCoordinator* _navigationCoordinator;
	MNThreadNavigationCoordinator* _threadNavigationCoordinator;
	MNProfileImageViewController* _profileImageViewController;
	MNThreadImageManager* _threadImageManager;
	FBUserSession* _session;
	MNJoinableGroupThreadInterstitialView* _joinableThreadInterstitialView;
	MNJoinableGroupThreadInterstitialViewModel* _joinableThreadInterstitialViewModel;
	FBLanguageNameFormatFactory* _languageNameFormatFactory;
	NSString* _joinableGroupThreadId;
	FBMSPDeltaHandlerListenerAnnouncer* _deltaHandlerListenerAnnouncer;
	id<FBMSPDeltaHandlerListener> _dispatchSelfDeltaHandlerListener;
	MNThreadStore* _threadStore;
	FBTimer* _reloadInterstitialViewModelTimer;
	NSString* _groupThreadHash;

}

@property (nonatomic,copy) NSString * groupThreadHash;              //@synthesize groupThreadHash=_groupThreadHash - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_navigateToThread:(id)arg1 ;
-(void)joinableGroupThreadInterstitialViewDidAcceptJoinGroupThread:(id)arg1 ;
-(void)_reloadInterstitialView:(BOOL)arg1 ;
-(void)_configureNavigationBarWhiteTheme;
-(void)_addCancelButtonToNavigationBar;
-(void)_restoreNavigationBarDefaultTheme;
-(void)_removeDeltaHandlerListener;
-(void)_performAddCurrentUserToGroupThreadMutationWithCompletion:(/*^block*/id)arg1 ;
-(void)didTapCancelButton;
-(void)_showErrorMessageAlertWithErrorMessage:(id)arg1 ;
-(void)_dismissInterstitialAsModalViewControllerIfRequired;
-(void)_loadInterstitialViewWithInterstitialViewModel:(id)arg1 groupThreadImageURL:(id)arg2 groupThreadParticipantIds:(id)arg3 threadHasCustomName:(BOOL)arg4 ;
-(void)_navigateToInboxAndDisplayAlertWithErrorMessage:(id)arg1 ;
-(void)_handleFetchedThreadQueueMessageThread:(id)arg1 onComplete:(/*^block*/id)arg2 ;
-(void)_fetchGroupThreadInfoForThreadHash:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)_isThreadViewerStatusActiveForLoggedInUser:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)groupThreadHash;
-(void)setGroupThreadHash:(NSString *)arg1 ;
-(void)syncProtocolDeltasDidFinishProcessingWithAffectedThreadKeys:(id)arg1 ;
-(void)splitViewControllerWillChangeState:(BOOL)arg1 ;
-(id)navigationBar;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end

