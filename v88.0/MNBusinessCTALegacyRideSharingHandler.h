/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession;

@interface MNBusinessCTALegacyRideSharingHandler : NSObject {

	FBUserSession* _session;

}
-(void)handleButtonClickWithTargetID:(id)arg1 ;
-(void)_sendCancelMutationWithTargetID:(id)arg1 userHasConfirmed:(BOOL)arg2 ;
-(void)_showUserConfirmCancelRideDialogWithTargetID:(id)arg1 CancellationMessage:(id)arg2 ;
-(void)_showUserCannotCancelRideDialogWithMessage:(id)arg1 ;
-(void)_handleRideCancelResponsePayload:(id)arg1 targetID:(id)arg2 ;
-(id)initWithSession:(id)arg1 ;
@end

