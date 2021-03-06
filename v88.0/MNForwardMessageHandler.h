/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNForwardMessageViewControllerDelegate.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@protocol FBMPaymentsBridge, FBProvider;
@class MNNavigationCoordinator, MNThreadNavigationCoordinator, MNForwardMessageViewControllerFactory, FBUserSession, MNContactsRetrieverSimpleLogger, MNPhotoImageRequester, FBMobileConfigContextManager, NSString;

@interface MNForwardMessageHandler : NSObject <MNForwardMessageViewControllerDelegate, FBViewerContextClassProvidable> {

	MNNavigationCoordinator* _navigationCoordinator;
	MNThreadNavigationCoordinator* _threadNavigationCoordinator;
	MNForwardMessageViewControllerFactory* _forwardMessageViewControllerFactory;
	FBUserSession* _session;
	id<FBMPaymentsBridge> _paymentsBridge;
	id<FBProvider> _suggestedContactsRetrieverProvider;
	id<FBProvider> _messageSenderProvider;
	MNContactsRetrieverSimpleLogger* _contactsRetrieversSimpleLogger;
	MNPhotoImageRequester* _imageRequester;
	FBMobileConfigContextManager* _configManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithNavigationCoordinator:(id)arg1 threadNavigationCoordinator:(id)arg2 forwardMessageViewControllerFactory:(id)arg3 userSession:(id)arg4 paymentBridge:(id)arg5 suggestedContactsRetrieverProvider:(id)arg6 messageSenderProvider:(id)arg7 photoImageRequester:(id)arg8 configManager:(id)arg9 ;
-(id)_forwardMessageViewControllerWithNavigationBarTitle:(id)arg1 sendConversionContext:(id)arg2 dataFetcher:(id)arg3 showComposerView:(BOOL)arg4 showMontageSection:(BOOL)arg5 ;
-(void)_presentForwardMessageViewController:(id)arg1 ;
-(void)_presentForwardMessageViewControllerForAttachment:(id)arg1 outgoingAttribution:(id)arg2 contentType:(long long)arg3 sendConversionContext:(id)arg4 showMontageSection:(BOOL)arg5 ;
-(BOOL)_canShowMontageSection;
-(void)_handleNavigationForForwardToSingleRecipient:(id)arg1 sendConversionContext:(id)arg2 ;
-(void)_handleNavigationForForwardToManyRecipients;
-(void)forwardMessageViewControllerDidCancel:(id)arg1 ;
-(BOOL)forwardMessageViewControllerShouldHandleForwardWithRecipientInfos:(id)arg1 ;
-(void)forwardMessageViewController:(id)arg1 willForwardMessageWithRecipientInfos:(id)arg2 forwardContent:(id)arg3 ;
-(void)forwardMessageViewController:(id)arg1 didForwardMessageWithRecipientInfos:(id)arg2 didCompleteFlow:(BOOL)arg3 ;
-(void)forwardMessageViewController:(id)arg1 didForwardMessage:(id)arg2 ;
-(BOOL)forwardMessageViewControllerShouldShowSentMessageConfirmation:(id)arg1 ;
-(void)presentForwardMessageViewControllerForSharableId:(id)arg1 contentType:(long long)arg2 sendConversionContext:(id)arg3 ;
-(void)presentForwardMessageViewControllerForPlainPhotoViewModel:(id)arg1 outgoingAttribution:(id)arg2 sendConversionContext:(id)arg3 ;
-(void)presentForwardMessageViewControllerForMessage:(id)arg1 sendConversionContext:(id)arg2 ;
-(void)presentForwardMessageViewControllerForURL:(id)arg1 contentType:(long long)arg2 sendConversionContext:(id)arg3 ;
@end

