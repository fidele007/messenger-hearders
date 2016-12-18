/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Messenger/MNSetPinnedGroupsSenderDelegate.h>
#import <Messenger/FBClassProvidable.h>

@class UITableView, FBUserSession, FBMPinnedGroupsManager, MNPinnedGroupsEditManager, MNSetPinnedGroupsSender, NSString;

@interface MNGroupsSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MNSetPinnedGroupsSenderDelegate, FBClassProvidable> {

	UITableView* _tableView;
	FBUserSession* _session;
	FBMPinnedGroupsManager* _pinnedGroupsManager;
	MNPinnedGroupsEditManager* _pinnedGroupsEditManager;
	MNSetPinnedGroupsSender* _setPinnedGroupsSender;
	unsigned long long _numClearRetries;
	unsigned long long _clearPinnedBgTask;
	BOOL _isObserving;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithSession:(id)arg1 pinnedGroupsManager:(id)arg2 pinnedGroupsEditManager:(id)arg3 ;
-(void)_stopObservers;
-(void)_startObservers;
-(void)_clearPinnedGroups;
-(void)_endSavingPinnedGroupBackgroundTask;
-(void)_cancelSavingPinnedGroups;
-(void)setPinnedGroupsSender:(id)arg1 didSucceedWithResult:(id)arg2 updateTime:(long long)arg3 ;
-(void)setPinnedGroupsSender:(id)arg1 didFailWithError:(id)arg2 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_didEnterBackground:(id)arg1 ;
@end

