/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@class MNAccountNotificationsAccessTokenStore, MNAccountStore, MNAccountSettings, NSString, MNAccountRemovalControllerListenerAnnouncer;

@interface MNAccountRemovalController : NSObject <FBViewerContextClassProvidable> {

	MNAccountNotificationsAccessTokenStore* _notificationsAccessTokenStore;
	MNAccountStore* _accountStore;
	MNAccountSettings* _accountSettings;
	NSString* _loggedInAccountFBID;
	MNAccountRemovalControllerListenerAnnouncer* _accountRemovalControllerListenerAnnouncer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithNotificationsAccessTokenStore:(id)arg1 accountStore:(id)arg2 accountSettings:(id)arg3 loggedInAccountFBID:(id)arg4 ;
-(void)_deleteAssociatedInformationForAccount:(id)arg1 didRemoveAccountBlock:(/*^block*/id)arg2 ;
-(void)removeAccount:(id)arg1 didRemoveAccountBlock:(/*^block*/id)arg2 didFailWithErrorBlock:(/*^block*/id)arg3 ;
-(void)addAccountRemovalControllerListener:(id)arg1 ;
-(void)removeAccountRemovalControllerListener:(id)arg1 ;
@end

