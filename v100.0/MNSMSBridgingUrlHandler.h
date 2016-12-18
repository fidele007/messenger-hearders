/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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

