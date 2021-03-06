/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:32 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class FBUpdater, MNBuildInfo, UITableView, NSString;

@interface MNBuildInfoViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	FBUpdater* _updater;
	MNBuildInfo* _appInfo;
	MNBuildInfo* _shellInfo;
	UITableView* _tableView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_reuseIdentifierForSection:(unsigned long long)arg1 ;
-(id)_newCellForSection:(unsigned long long)arg1 ;
-(void)_didSelectActionRow:(unsigned long long)arg1 ;
-(void)_didSelectAppBuildInfoRow:(unsigned long long)arg1 ;
-(void)_configureCell:(id)arg1 forSummaryRow:(unsigned long long)arg2 ;
-(void)_configureCell:(id)arg1 forAppBuildInfoRow:(unsigned long long)arg2 ;
-(void)_configureCell:(id)arg1 forShellBuildInfoRow:(unsigned long long)arg2 ;
-(id)_buildTimeString;
-(void)_checkForUpdates;
-(void)_redirectToMobileBuildsPage;
-(void)_showAppBuildInfoBranchName;
-(id)initWithUpdater:(id)arg1 appBuildInfo:(id)arg2 shellBuildInfo:(id)arg3 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)loadView;
-(void)_configureCell:(id)arg1 forAction:(unsigned long long)arg2 ;
-(void)_configureCell:(id)arg1 forIndexPath:(id)arg2 ;
@end

