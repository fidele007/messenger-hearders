/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBViewerContextClassProvidable.h>

@protocol FBProvider, MNSecureMessagingCapabilityQuerying;
@class FBKeyboardResettingTracker, NSString;

@interface FBPlatformNewThreadViewControllerFactory : NSObject <FBViewerContextClassProvidable> {

	id<FBProvider> _navigationCoordinatorProvider;
	id<FBProvider> _composeViewControllerProvider;
	id<FBProvider> _peoplePickerViewControllerProvider;
	id<FBProvider> _sessionProvider;
	id<FBProvider> _attachmentPreparerProvider;
	id<FBProvider> _topContactsRetrieverProvider;
	id<FBProvider> _photoMediaAttachmentFactoryProvider;
	id<FBProvider> _userStoreProvider;
	id<FBProvider> _addressBookContactSyncPolicyProvider;
	id<FBProvider> _imageUploadCandidateStoreProvider;
	FBKeyboardResettingTracker* _keyboardResettingTracker;
	id<MNSecureMessagingCapabilityQuerying> _secureMessagingCapabilityQuerier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNavigationCoordinatorProvider:(id)arg1 composeViewControllerProvider:(id)arg2 peoplePickerViewControllerProvider:(id)arg3 sessionProvider:(id)arg4 topContactsRetrieverProvider:(id)arg5 attachmentPreparerProvider:(id)arg6 keyboardResettingTracker:(id)arg7 userStoreProvider:(id)arg8 imageUploadCandidateStoreProvider:(id)arg9 addressBookContactSyncPolicyProvider:(id)arg10 secureMessagingCapabilityQuerier:(id)arg11 ;
-(id)platformViewControllerForAction:(id)arg1 error:(id*)arg2 ;
-(id)initWithProviderMapData:(id)arg1 ;
@end

