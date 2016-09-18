/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNContactImportInitiationListener.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNPermissionRequestController.h>

@protocol MNPermissionRequestControllerDelegate;
@class MNAddressBookContactImportInitiator, FBAnalytics, MNAddressBook, NSString;

@interface MNContactImportPermissionRequestController : NSObject <MNContactImportInitiationListener, FBClassProvidable, MNPermissionRequestController> {

	MNAddressBookContactImportInitiator* _contactImportInitiator;
	FBAnalytics* _analytics;
	MNAddressBook* _addressBook;
	id<MNPermissionRequestControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNPermissionRequestControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithProviderMapData:(id)arg1 ;
-(id)analyticsModule;
-(void)userInitiatedContactImportAllowed;
-(void)userInitiatedContactImportDisallowed;
-(void)userInitiatedContactImportFailedToInitiate;
-(void)_initiateContactImporting;
-(id)initWithContactImporter:(id)arg1 syncLock:(id)arg2 userSettings:(id)arg3 analytics:(id)arg4 addressBook:(id)arg5 ;
-(void)requestPermission;
-(void)setDelegate:(id<MNPermissionRequestControllerDelegate>)arg1 ;
-(id<MNPermissionRequestControllerDelegate>)delegate;
@end

