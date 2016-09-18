/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Messenger/MNSettingsCellSwitchDelegate.h>
#import <Messenger/MNSecureMessagingRegisteredDeviceStatusChangeListening.h>

@protocol MNSecureMessagingCapabilityManualOverriding, MNSecureMessagingDeviceInformation, MNSecureMessagingContentBatchDeleting, MNSecureMessagingRegisteredDeviceStatusChangeListening;
@class MNSettingsView, NSArray, FBAlertViewCoordinator, NSString;

@interface MNSecureThreadSettingsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, MNSettingsCellSwitchDelegate, MNSecureMessagingRegisteredDeviceStatusChangeListening> {

	MNSettingsView* _settingsView;
	id<MNSecureMessagingCapabilityManualOverriding> _secureCapabilityManualOverrider;
	id<MNSecureMessagingDeviceInformation> _secureDeviceInformation;
	id<MNSecureMessagingContentBatchDeleting> _secureMessagingContentBatchDeleter;
	id<MNSecureMessagingRegisteredDeviceStatusChangeListening> _secureDeviceStatusChangeDispatchedSelfListener;
	NSArray* _settingsSections;
	NSArray* _settingsSectionFooterViews;
	FBAlertViewCoordinator* _alertViewCoordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registeredDeviceStatusDidChangeTo:(long long)arg1 from:(long long)arg2 ;
-(id)initWithSecureCapabilityManualOverrider:(id)arg1 secureDeviceInformation:(id)arg2 secureMessagingContentDeleter:(id)arg3 secureThreadServiceController:(id)arg4 alertViewCoordinator:(id)arg5 ;
-(void)_initializeSettingsSections;
-(void)_tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_initializeSettingsSectionFooterViews;
-(void)didToggleSettingsSwitch:(id)arg1 ;
-(id)_createSecureThreadEligibilitySection;
-(id)_createDeleteAllSection;
-(BOOL)_toggleOnOffState;
-(void)_secureThreadEligibilityToggleSettingTapped:(id)arg1 ;
-(void)_deleteAllTapped:(id)arg1 ;
-(void)_showAlertViewWithTitle:(id)arg1 body:(id)arg2 confirmButtonTitle:(id)arg3 switchToggleOn:(BOOL)arg4 ;
-(void)_initiateOverrideFinishedWithSuccess:(BOOL)arg1 forRequestWithServiceEnabled:(BOOL)arg2 ;
-(void)_confirmationDialogButtonPressedForSecretConversationEligibility:(unsigned long long)arg1 onAlertView:(id)arg2 isTapped:(BOOL)arg3 withToggleOn:(BOOL)arg4 ;
-(void)_reinitiateSettingsSectionsAndReloadTable;
-(void)_secureThreadEligibilityAlertViewConfirmedWithToggleOn:(BOOL)arg1 ;
-(void)_confirmationDialogButtonPressedForDeleteAllContent:(long long)arg1 onAlertView:(id)arg2 isTapped:(BOOL)arg3 ;
-(void)_didFinishDeletingAllContentWithSuccess:(BOOL)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
@end

