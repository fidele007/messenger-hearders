/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMessageSendQuerying, MNAuthenticationManager;
@class MNThreadTypingStateTracker, MNThreadImageManager, MNThreadCellLayoutFactory, MNThreadParticipantNameFormatter, MNDateFormatter, FBMobileConfigContextManager, FBUserSession;

@interface MNThreadRowFactory : NSObject {

	id<MNMessageSendQuerying> _messageSendQuerier;
	MNThreadTypingStateTracker* _threadTypingStateTracker;
	MNThreadImageManager* _threadImageManager;
	MNThreadCellLayoutFactory* _threadCellLayoutFactory;
	MNThreadParticipantNameFormatter* _participantNameFormatter;
	MNDateFormatter* _dateFormatter;
	id<MNAuthenticationManager> _authManager;
	FBMobileConfigContextManager* _configManager;
	FBUserSession* _session;

}
-(id)initWithMessageSendQuerier:(id)arg1 threadTypingStateTracker:(id)arg2 threadImageManager:(id)arg3 threadCellLayoutFactory:(id)arg4 participantNameFormatter:(id)arg5 dateFormatter:(id)arg6 authManager:(id)arg7 configManager:(id)arg8 session:(id)arg9 ;
-(id)threadRowForThreadSummary:(id)arg1 loadedThreadSnippet:(id)arg2 loadedThreadGenericSnippet:(id)arg3 messageMetadata:(id)arg4 loadedUserIdToUserMap:(id)arg5 ;
-(id)threadRowForPendingThread:(id)arg1 loadedThreadSnippet:(id)arg2 loadedThreadGenericSnippet:(id)arg3 loadedUserIdToUserMap:(id)arg4 ;
@end

