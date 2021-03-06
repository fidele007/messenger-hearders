/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Messenger/FBContactSyncDeltaListener.h>

@protocol MNAuthenticationManager;
@class FBContactStore, UITableView, NSMutableDictionary, NSString;

@interface MNContactSyncInternalSettingsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, FBContactSyncDeltaListener> {

	FBContactStore* _contactStore;
	UITableView* _tableView;
	NSMutableDictionary* _contactInfo;
	id<MNAuthenticationManager> _authManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithContactStore:(id)arg1 authManager:(id)arg2 ;
-(void)contactsDidUpdate:(id)arg1 ;
-(void)contactsDidDelete:(id)arg1 ;
-(void)dealloc;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)_refresh;
@end

