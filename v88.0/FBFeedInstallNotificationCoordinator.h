/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBFeedInstallNotificationCoordinatorHandler, FBFeedInstallNotificationStoreEntityDelegate;
@class FBITunesStoreEntity;

@interface FBFeedInstallNotificationCoordinator : NSObject {

	id<FBFeedInstallNotificationCoordinatorHandler> _handler;
	FBITunesStoreEntity* _storeEntity;
	id<FBFeedInstallNotificationStoreEntityDelegate> _storeEntityDelegate;

}
-(void)registerHandler:(id)arg1 ;
-(void)presentNotificationWithEntity:(id)arg1 delegate:(id)arg2 ;
-(BOOL)canPresentNotificationEntity;
-(id)entityInDisplay;
-(void)didSelectStoreEntity:(id)arg1 handler:(id)arg2 ;
-(void)didDismissStoreEntity:(id)arg1 handler:(id)arg2 ;
-(void)didIgnoreStoreEntity:(id)arg1 handler:(id)arg2 ;
-(id)_init;
@end

