/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:58 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPopoverController.h>

@class FBModalViewCoordinator, FBDelegateForwarder;

@interface _FBPopoverControllerCoordinatorNotifyingPopoverController : FBPopoverController {

	FBModalViewCoordinator* _coordinator;
	FBDelegateForwarder* _forwarder;
	id _mainDelegate;

}
-(void)presentPopoverAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_resetForwarder;
-(void)_configureCoordinator:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
@end

