/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPlatformShareDataLoadListener.h>
#import <Messenger/MNForwardMessageViewControllerDelegate.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@protocol FBProvider;
@class MNNavigationCoordinator, MNThreadNavigationCoordinator, FBUserSession, MNForwardMessageViewController, MNForwardMessageViewControllerFactory, FBPlatformActionShareProcessor, MNContactsRetrieverSimpleLogger, MNImageUploadCandidateStore, NSString;

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

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithNavigationCoordinator:(id)arg1 threadNavigationCoordinator:(id)arg2 forwardMessageViewControllerFactory:(id)arg3 inboxSuggestedContactsRetrieverProvider:(id)arg4 messageSenderProvider:(id)arg5 session:(id)arg6 analytics:(id)arg7 imageUploadCandidateStore:(id)arg8 appName:(id)arg9 ;
-(void)_presentForwardMessageViewControllerWithPhotoAttachments:(id)arg1 ;
-(void)_handleNavigationForForwardToManyRecipients;
-(void)_handleNavigationForForwardToSingleRecipient:(id)arg1 ;
-(void)_setupForwardMessageViewControllerWithDataFetcher:(id)arg1 ;
-(void)platformLoadedPayload:(id)arg1 ;
-(void)forwardMessageViewControllerDidCancel:(id)arg1 ;
-(BOOL)forwardMessageViewControllerShouldHandleForwardWithRecipientInfos:(id)arg1 ;
-(void)forwardMessageViewController:(id)arg1 willForwardMessageWithRecipientInfos:(id)arg2 forwardContent:(id)arg3 ;
-(void)forwardMessageViewController:(id)arg1 didForwardMessageWithRecipientInfos:(id)arg2 didCompleteFlow:(BOOL)arg3 ;
-(void)forwardMessageViewController:(id)arg1 didForwardMessage:(id)arg2 ;
-(BOOL)forwardMessageViewControllerShouldShowSentMessageConfirmation:(id)arg1 ;
-(void)presentForwardMessageViewControllerFromURL:(id)arg1 sourceApplication:(id)arg2 ;
-(void)dealloc;
@end

