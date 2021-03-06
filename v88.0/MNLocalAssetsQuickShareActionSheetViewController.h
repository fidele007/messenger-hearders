/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBContainerViewController.h>
#import <Messenger/MNInboxCameraRollContactSubscriberListening.h>
#import <Messenger/MNInboxCameraRollViewControllerDelegate.h>
#import <Messenger/MNLocalAssetsQuickShareActionSheetViewDelegate.h>
#import <Messenger/MNActionSheetPresenting.h>

@protocol MNMediaTrayDataSource, MNActionSheetPresentationDelegate, MNLocalAssetsQuickShareActionSheetViewControllerDelegate;
@class MNInboxCameraRollViewController, MNLocalAssetsQuickShareActionSheetView, MNInboxCameraRollContactSubscriber, MNInboxCameraRollViewState, NSString, MNLocalAssetsQuickShareComposeViewController, MNPhotoImageUploadResultCacher, FBUserSession, MNPhotoAttachmentPhotoImageLoader, NSArray;

@interface MNLocalAssetsQuickShareActionSheetViewController : FBContainerViewController <MNInboxCameraRollContactSubscriberListening, MNInboxCameraRollViewControllerDelegate, MNLocalAssetsQuickShareActionSheetViewDelegate, MNActionSheetPresenting> {

	MNInboxCameraRollViewController* _inboxCameraRollViewController;
	MNLocalAssetsQuickShareActionSheetView* _localAssetsQuickShareActionSheet;
	MNInboxCameraRollContactSubscriber* _contactSubscriber;
	MNInboxCameraRollViewState* _cameraRollViewState;
	NSString* _presentingSessionID;
	MNLocalAssetsQuickShareComposeViewController* _composeViewController;
	MNPhotoImageUploadResultCacher* _uploadResultCacher;
	id<MNMediaTrayDataSource> _mediaTrayDataSource;
	FBUserSession* _session;
	MNPhotoAttachmentPhotoImageLoader* _photoImageLoader;
	NSString* _actionSheetTitle;
	NSString* _actionSheetSubtitle;
	NSArray* _threadSummariesOfHoistedContacts;
	id<MNActionSheetPresentationDelegate> _presentationDelegate;
	id<MNLocalAssetsQuickShareActionSheetViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNLocalAssetsQuickShareActionSheetViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNActionSheetPresentationDelegate> presentationDelegate;                         //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
-(void)inboxCameraRollViewController:(id)arg1 didUpdateViewState:(id)arg2 ;
-(void)inboxCameraRollViewController:(id)arg1 didTapItemWithLoggingData:(id)arg2 ;
-(void)inboxCameraRollViewController:(id)arg1 willDisplayItemWithLoggingData:(id)arg2 ;
-(void)inboxCameraRollViewController:(id)arg1 didEndDisplayItemWithLoggingData:(id)arg2 ;
-(void)inboxCameraRollViewController:(id)arg1 didTriggerSendNumberOfAssets:(long long)arg2 toUserFbIds:(id)arg3 inboxCameraRollInitiator:(long long)arg4 ;
-(void)inboxCameraRollViewControllerWillDismiss:(id)arg1 ;
-(void)inboxCameraRollViewController:(id)arg1 didUpdateActionButtonText:(id)arg2 actionButtonEnabled:(BOOL)arg3 ;
-(id)initWithInboxCameraRollViewController:(id)arg1 contactSubscriber:(id)arg2 presentingSessionID:(id)arg3 uploadResultCacher:(id)arg4 mediaTrayDataSource:(id)arg5 photoImageLoader:(id)arg6 session:(id)arg7 actionSheetTitle:(id)arg8 actionSheetSubtitle:(id)arg9 threadSummariesOfHoistedContacts:(id)arg10 ;
-(void)setInboxCameraViewState:(id)arg1 ;
-(void)actionSheetDidResize;
-(void)actionSheetWillDismiss;
-(void)actionSheetWillPresent;
-(void)_addViewControllerAsChild:(id)arg1 ;
-(void)didUpdateCameraRollContacts;
-(void)localAssetsQuickShareActionSheetViewDidTapAddMessageButton:(id)arg1 ;
-(void)localAssetsQuickShareActionSheetViewDidTapSendButton:(id)arg1 ;
-(void)localAssetsQuickShareActionSheetViewDidNavigationButton:(id)arg1 ;
-(void)_configInboxCameraRollViewControllerWithLatestViewModel;
-(void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2 viewState:(long long)arg3 ;
-(void)setDelegate:(id<MNLocalAssetsQuickShareActionSheetViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNLocalAssetsQuickShareActionSheetViewControllerDelegate>)delegate;
-(void)loadView;
-(void)cleanup;
-(void)setPresentationDelegate:(id<MNActionSheetPresentationDelegate>)arg1 ;
-(id<MNActionSheetPresentationDelegate>)presentationDelegate;
@end

