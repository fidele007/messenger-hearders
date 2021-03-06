/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:51 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassInjectable.h>
#import <FBSharedFramework/MNExternalForwardDataFetcherListener.h>
#import <FBSharedFramework/MNMultiPeoplePickerViewControllerDelegate.h>
#import <FBSharedFramework/MNMultiPeoplePickerViewControllerDataSource.h>
#import <Messenger/MNMediaPreviewActionSheetPresenterDelegate.h>

@class MNBusinessWebShareHandlerInjector, MNBusinessWebShareMutator, MNCanonicalThreadFetcher, MNBusinessWebShareData, NSString, MNForwardComposerView, MNStaticForwardDataFetcher, MNMultiPeoplePickerViewController, MNMediaPreviewActionSheetPresenter;

@interface MNBusinessWebShareHandler : NSObject <FBClassInjectable, MNExternalForwardDataFetcherListener, MNMultiPeoplePickerViewControllerDelegate, MNMultiPeoplePickerViewControllerDataSource, MNMediaPreviewActionSheetPresenterDelegate> {

	MNBusinessWebShareHandlerInjector* _injector;
	MNBusinessWebShareMutator* _shareMutator;
	MNCanonicalThreadFetcher* _canonicalThreadFetcher;
	MNBusinessWebShareData* _shareData;
	BOOL _didPerformShare;
	/*^block*/id _successBlock;
	/*^block*/id _failureBlock;
	NSString* _targetThreadId;
	MNForwardComposerView* _forwardComposerView;
	MNStaticForwardDataFetcher* _forwardDataFetcher;
	MNMultiPeoplePickerViewController* _peoplePickerViewController;
	MNMediaPreviewActionSheetPresenter* _actionSheetPresenter;
	BOOL _currentlySharing;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(void)shareWithShareData:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)actionSheetPresenter:(id)arg1 didTapSendWithContent:(id)arg2 recipientFBIDs:(id)arg3 conversationInitiator:(id)arg4 ;
-(void)actionSheetPresenter:(id)arg1 didTapSendWithCustomPreviewView:(id)arg2 ;
-(void)actionSheetPresenter:(id)arg1 didTapEditWithContent:(id)arg2 recipientFBIDs:(id)arg3 conversationInitiator:(id)arg4 ;
-(void)actionSheetPresenter:(id)arg1 didTapCancelWithRecipientFBIDs:(id)arg2 conversationInitiator:(id)arg3 ;
-(void)actionSheetPresenter:(id)arg1 didPresentWithRecipientFBIDs:(id)arg2 conversationInitiator:(id)arg3 ;
-(void)actionSheetPresenter:(id)arg1 didDismissContentViewController:(id)arg2 ;
-(void)willFetchExternalForwardDataWithMessageOutgoingAttribution:(id)arg1 ;
-(void)didFailToFetchDataWithError:(id)arg1 ;
-(void)shareToThreadWithThreadId:(id)arg1 shareData:(id)arg2 successBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(void)_cleanupShare;
-(void)_didFinishBroadcastFlow;
-(void)_checkIfIsCanonicalThreadBeforeSharingToThreadWithThreadId:(id)arg1 shareData:(id)arg2 successBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(void)_fetchUserBeforeSharingToThreadWithThreadId:(id)arg1 shareData:(id)arg2 successBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(void)_performShareToThreadWithThreadId:(id)arg1 shareData:(id)arg2 sendButtonTitle:(id)arg3 successBlock:(/*^block*/id)arg4 failureBlock:(/*^block*/id)arg5 ;
-(id)_previewViewForShareData:(id)arg1 ;
-(void)_handleFailedShareWithPeoplePickerViewController:(id)arg1 shareData:(id)arg2 threadIDs:(id)arg3 ;
-(void)_performShareWithShareData:(id)arg1 messageText:(id)arg2 threadIDs:(id)arg3 successBlock:(/*^block*/id)arg4 failureBlock:(/*^block*/id)arg5 ;
-(id)_previewViewForShareDataWithScrapingURLString:(id)arg1 ;
-(id)_previewViewForExtensionShareData:(id)arg1 ;
-(void)_updateShareDataWithFetchedPreviewContentIfNeeded:(id)arg1 ;
-(void)_updatePreviewViewWithContent:(id)arg1 ;
-(void)_didFinishDirectShareFlow;
-(void)didFetchExternalForwardData:(id)arg1 messageOutgoingAttribution:(id)arg2 extraClientTags:(id)arg3 ;
-(void)multiPeoplePickerViewController:(id)arg1 didPickContacts:(id)arg2 ;
-(void)multiPeoplePickerViewController:(id)arg1 didSelectContact:(id)arg2 fromSearch:(BOOL)arg3 ;
-(id)multiPeoplePickerViewControllerStringForSearchBarPlaceholderText:(id)arg1 ;
-(id)multiPeoplePickerViewControllerAccessoryViewAboveSearchBar:(id)arg1 ;
-(id)initWithInjector:(id)arg1 ;
@end

