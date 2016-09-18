/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, FBFriendingActionMemStore;

@interface FBFriendingActionManager : NSObject {

	FBUserSession* _session;
	FBFriendingActionMemStore* _actionStore;
	BOOL _offlineMutationEnabled;

}
-(void)pymkXoutPerson:(id)arg1 pymkLocation:(id)arg2 successBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 showAlertViewOnFailure:(BOOL)arg5 ;
-(void)sendFriendRequestToPerson:(id)arg1 howFound:(id)arg2 reference:(id)arg3 pymkLocation:(id)arg4 successBlock:(/*^block*/id)arg5 failureBlock:(/*^block*/id)arg6 showAlertViewOnFailure:(BOOL)arg7 ;
-(void)cancelFriendRequestToPerson:(id)arg1 reference:(id)arg2 successBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 showAlertViewOnFailure:(BOOL)arg5 ;
-(void)deleteFriendRequestFromPerson:(id)arg1 reference:(id)arg2 successBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 showAlertViewOnFailure:(BOOL)arg5 ;
-(void)acceptFriendRequestFromPerson:(id)arg1 reference:(id)arg2 successBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 showAlertViewOnFailure:(BOOL)arg5 ;
-(void)unfriendPerson:(id)arg1 reference:(id)arg2 successBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 showAlertViewOnFailure:(BOOL)arg5 ;
-(id)_plainStringFromHTML:(id)arg1 ;
-(BOOL)_outgoingRequestErrorActionEnabledInSession:(id)arg1 ;
-(void)_openFriendCenterOutgoingRequestsWithIntentHandler:(id)arg1 ;
-(BOOL)_canFitIntoFIGDialog:(id)arg1 ;
-(void)_displayFIGDialogAlertViewForError:(id)arg1 ;
-(void)_displayLegacyAlertViewForError:(id)arg1 ;
-(void)_displayFIGDialogForFriendRequestWarning:(id)arg1 retryBlock:(/*^block*/id)arg2 cancelBlock:(/*^block*/id)arg3 ;
-(void)_displayLegacyAlertViewForFriendRequestWarning:(id)arg1 retryBlock:(/*^block*/id)arg2 cancelBlock:(/*^block*/id)arg3 ;
-(void)_handleFriendingActionError:(id)arg1 withActionHandle:(id)arg2 targetID:(id)arg3 showAlertViewOnFailure:(BOOL)arg4 failureBlock:(/*^block*/id)arg5 ;
-(void)_sendFriendRequestToPerson:(id)arg1 howFound:(id)arg2 reference:(id)arg3 pymkLocation:(id)arg4 successBlock:(/*^block*/id)arg5 failureBlock:(/*^block*/id)arg6 cancelBlock:(/*^block*/id)arg7 showAlertViewOnFailure:(BOOL)arg8 warnAcknowledged:(BOOL)arg9 ;
-(void)_logFriendingAction:(id)arg1 targetPersonID:(id)arg2 ;
-(void)_handleFriendingActionSuccessWithActionHandle:(id)arg1 successBlock:(/*^block*/id)arg2 ;
-(void)_handleFriendRequestSentError:(id)arg1 person:(id)arg2 showAlertViewOnFailure:(BOOL)arg3 retryBlock:(/*^block*/id)arg4 failureBlock:(/*^block*/id)arg5 cancelBlock:(/*^block*/id)arg6 friendingActionHandle:(id)arg7 ;
-(void)_pymkBlacklistPersonByGraphQL:(id)arg1 pymkLocation:(id)arg2 successBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 showAlertViewOnFailure:(BOOL)arg5 ;
-(void)_blockPersonFailedWithError:(id)arg1 person:(id)arg2 showAlertViewOnFailure:(BOOL)arg3 ;
-(id)actionStore;
-(void)sendFriendRequestFromEntityCardToPerson:(id)arg1 entityCardSurface:(id)arg2 entityCardSurfaceSourceId:(id)arg3 successBlock:(/*^block*/id)arg4 failureBlock:(/*^block*/id)arg5 showAlertViewOnFailure:(BOOL)arg6 ;
-(void)sendFriendRequestFromCIToPerson:(id)arg1 howFound:(id)arg2 reference:(id)arg3 pymkLocation:(id)arg4 successBlock:(/*^block*/id)arg5 failureBlock:(/*^block*/id)arg6 cancelBlock:(/*^block*/id)arg7 showAlertViewOnFailure:(BOOL)arg8 ;
-(void)ignoreFriendSuggestion:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 showAlertViewOnFailure:(BOOL)arg4 ;
-(void)blockPerson:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 showAlertViewOnFailure:(BOOL)arg4 ;
-(id)initWithSession:(id)arg1 ;
-(id)session;
@end

