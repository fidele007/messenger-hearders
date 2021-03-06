/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:47 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPlatformShareDataLoadListener.h>
#import <FBSharedFramework/MNForwardMessageViewControllerDelegate.h>
#import <FBSharedFramework/FBViewerContextClassProvidable.h>

@protocol FBProvider;
@class MNNavigationCoordinator, MNThreadNavigationCoordinator, FBUserSession, MNForwardMessageViewController, MNForwardMessageViewControllerFactory, FBPlatformActionShareProcessor, MNContactsRetrieverSimpleLogger, MNImageUploadCandidateStore, NSString, MNLocalNotificationController;

@interface MNStickeredForwardMessageHandler : NSObject <FBPlatformShareDataLoadListener, MNForwardMessageViewControllerDelegate, FBViewerContextClassProvidable> {

	MNNavigationCoordinator* _navigationCoordinator;
	MNThreadNavigationCoordinator* _threadNavigationCoordinator;
	id<FBProvider> _inboxSuggestedContactsRetrieverProvider;
	id<FBProvider> _messageSenderProvider;
	FBUserSession* _session;
	MNForwardMessageViewController* _forwardMessageViewController;
	MNForwardMessageViewControllerFactory* _forwardMessageViewControllerFactory;
	FBPlatformActionShareProcessor* _platformActionShareProcessor;
	MNContactsRetrieverSimpleLogger* _contactsRetrieversSimpleLogger;
	BOOL _presentingForwardMessageViewController;
	MNImageUploadCandidateStore* _imageUploadCandidateStore;
	NSString* _appName;
	MNLocalNotificationController* _localNotificationController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNavigationCoordinator:(id)arg1 threadNavigationCoordinator:(id)arg2 forwardMessageViewControllerFactory:(id)arg3 inboxSuggestedContactsRetrieverProvider:(id)arg4 messageSenderProvider:(id)arg5 session:(id)arg6 analytics:(id)arg7 imageUploadCandidateStore:(id)arg8 appName:(id)arg9 localNotificationController:(id)arg10 ;
-(void)_presentForwardMessageViewControllerWithPhotoAttachments:(id)arg1 ;
-(void)_handleNavigationForForwardToManyRecipients;
-(void)_handleNavigationForForwardToSingleRecipient:(id)arg1 ;
-(void)_setupForwardMessageViewControllerWithDataFetcher:(id)arg1 ;
-(void)platformLoadedPayload:(id)arg1 ;
-(void)presentForwardMessageViewControllerFromURL:(id)arg1 sourceApplication:(id)arg2 ;
-(BOOL)forwardMessageViewControllerShouldHandleForwardWithRecipientInfos:(id)arg1 ;
-(void)forwardMessageViewController:(id)arg1 willForwardMessageWithRecipientInfos:(id)arg2 forwardContent:(id)arg3 ;
-(void)forwardMessageViewController:(id)arg1 didForwardMessageWithRecipientInfos:(id)arg2 didCompleteFlow:(BOOL)arg3 ;
-(void)forwardMessageViewControllerDidDismiss:(id)arg1 withState:(long long)arg2 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)dealloc;
@end

