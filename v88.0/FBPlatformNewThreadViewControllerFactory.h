/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

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
	id<FBProvider> _photoUploadResultCacherProvider;
	FBKeyboardResettingTracker* _keyboardResettingTracker;
	id<MNSecureMessagingCapabilityQuerying> _secureMessagingCapabilityQuerier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithNavigationCoordinatorProvider:(id)arg1 composeViewControllerProvider:(id)arg2 peoplePickerViewControllerProvider:(id)arg3 sessionProvider:(id)arg4 topContactsRetrieverProvider:(id)arg5 attachmentPreparerProvider:(id)arg6 keyboardResettingTracker:(id)arg7 userStoreProvider:(id)arg8 photoUploadResultCacherProvider:(id)arg9 addressBookContactSyncPolicyProvider:(id)arg10 secureMessagingCapabilityQuerier:(id)arg11 ;
-(id)platformViewControllerForAction:(id)arg1 error:(id*)arg2 ;
@end
