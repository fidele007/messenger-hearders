/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:16 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Messenger/MNSecureMessagingRegisteredDeviceStatusChangeListening.h>

@protocol MNSecureMessagingServiceManipulating, MNSecureMessagingRegisteredDeviceStatusUpdateRunning, MNSecureMessagingDeviceInformation;
@class UITableView, NSString;

@interface MNSecureMessageSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MNSecureMessagingRegisteredDeviceStatusChangeListening> {

	UITableView* _tableView;
	id<MNSecureMessagingServiceManipulating> _manipulator;
	id<MNSecureMessagingRegisteredDeviceStatusUpdateRunning> _makePrimaryDeviceRunner;
	id<MNSecureMessagingDeviceInformation> _secureDeviceInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithServiceProvider:(id)arg1 ;
-(void)registeredPrimaryDeviceStatusDidChangeTo:(long long)arg1 from:(long long)arg2 ;
-(void)registeredDeviceStatusDidChangeTo:(long long)arg1 from:(long long)arg2 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)loadView;
@end

