/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBPersistentLoadingDialogCapableAlertViewPresenter : NSObject {

	NSString* _loadingDialogTitle;
	unsigned long long _loadingDialogToken;
	unsigned long long _presentedDialogToken;
	BOOL _showsPersistentLoadingDialog;

}

@property (assign,nonatomic) BOOL showsPersistentLoadingDialog;              //@synthesize showsPersistentLoadingDialog=_showsPersistentLoadingDialog - In the implementation block
-(void)showAlertViewWithTitle:(id)arg1 message:(id)arg2 configuration:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 cancelButtonTitle:(id)arg5 otherButtonTitles:(id)arg6 ;
-(id)initWithLoadingDialogTitle:(id)arg1 ;
-(BOOL)showsPersistentLoadingDialog;
-(void)setShowsPersistentLoadingDialog:(BOOL)arg1 ;
-(void)_dismissLoadingDialogIfNecessary;
-(void)_presentLoadingDialogIfNecessary;
@end
