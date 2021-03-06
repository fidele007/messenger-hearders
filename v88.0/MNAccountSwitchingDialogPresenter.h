/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBPersistentLoadingDialogCapableAlertViewPresenter;

@interface MNAccountSwitchingDialogPresenter : NSObject {

	FBPersistentLoadingDialogCapableAlertViewPresenter* _persistentLoadingDialogAlertViewPresenter;

}

@property (assign,nonatomic) BOOL showsPersistentLoadingDialog; 
-(BOOL)showsPersistentLoadingDialog;
-(void)_presentRequiredTextFieldLeftEmptyWarningDialogWithDismissedBlock:(/*^block*/id)arg1 ;
-(void)presentAccountRemovalConfirmationDialogWithAccountDisplayName:(id)arg1 didConfirmBlock:(/*^block*/id)arg2 didCancelBlock:(/*^block*/id)arg3 ;
-(void)presentAddAccountDialogWithDidProvideUsernameAndPasswordBlock:(/*^block*/id)arg1 didCancelBlock:(/*^block*/id)arg2 ;
-(void)presentLoginApprovalCodeDialogWithDidProvideLoginApprovalCodeBlock:(/*^block*/id)arg1 didCancelBlock:(/*^block*/id)arg2 ;
-(void)presentPasswordDialogWithAccountDisplayName:(id)arg1 didProvidePasswordBlock:(/*^block*/id)arg2 didCancelBlock:(/*^block*/id)arg3 ;
-(void)presentAccountSwitchingConfirmationDialogWithAccountDisplayName:(id)arg1 didConfirmBlock:(/*^block*/id)arg2 didCancelBlock:(/*^block*/id)arg3 ;
-(void)presentRequirePasswordForNextLoginConfirmationDialogWithDidRequirePasswordForNextLoginBlock:(/*^block*/id)arg1 didChoosePasswordlessLoginBlock:(/*^block*/id)arg2 ;
-(void)presentAccountSwitchingErrorDialogWithError:(id)arg1 ;
-(void)presentUnableToSwitchToLoggedInAccountErrorDialog;
-(void)setShowsPersistentLoadingDialog:(BOOL)arg1 ;
-(id)init;
@end

