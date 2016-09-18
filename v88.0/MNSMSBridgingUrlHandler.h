/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNUrlHandlerExtending.h>
#import <Messenger/MNContactSyncUpsellDialogControllerDelegate.h>

@class MNContactSyncUpsellDialogController, MNSMSBridgingUrlHandlerListenerAnnouncer, NSString;

@interface MNSMSBridgingUrlHandler : NSObject <MNUrlHandlerExtending, MNContactSyncUpsellDialogControllerDelegate> {

	MNContactSyncUpsellDialogController* _contactSyncUpsellDialogController;
	MNSMSBridgingUrlHandlerListenerAnnouncer* _smsBridgingUrlHandlerListenerAnnouncer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canOpenURL:(id)arg1 sourceApplication:(id)arg2 ;
-(BOOL)openURL:(id)arg1 sourceApplication:(id)arg2 ;
-(BOOL)isPublic;
-(void)contactSyncUpsellDialogController:(id)arg1 didCompleteWithSuccess:(BOOL)arg2 ;
-(id)initWithContactSyncUpsellDialogController:(id)arg1 smsBridgingUrlHandlerListenerAnnouncer:(id)arg2 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
