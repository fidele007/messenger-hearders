/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <UIKit/UISearchDisplayDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <Messenger/FBExperimentListSearchResponderProtocol.h>

@protocol FBAlertViewCreating;
@class FBUserSession, UISwitch, FBPreferenceChangeConfirmer, FBExperimentListViewControllerDataSource, FBExperimentListSearchResultController, UISearchDisplayController, NSArray, NSString;

@interface FBExperimentListViewController : UITableViewController <UISearchDisplayDelegate, UIAlertViewDelegate, FBExperimentListSearchResponderProtocol> {

	FBUserSession* _session;
	UISwitch* _overridesDisabledSwitch;
	FBPreferenceChangeConfirmer* _preferenceConfirmer;
	FBPreferenceChangeConfirmer* _experimentConfirmer;
	id<FBAlertViewCreating> _alertViewCreator;
	FBExperimentListViewControllerDataSource* _dataSource;
	FBExperimentListSearchResultController* _searchResultController;
	BOOL _fetchingConfigFromTask;
	BOOL _fetchedSuccessfullyFromTask;
	UISearchDisplayController* searchDisplayController;
	NSArray* _experimentNames;
	/*^block*/id _confirmationBlock;

}

@property (nonatomic,copy) NSArray * experimentNames;                                          //@synthesize experimentNames=_experimentNames - In the implementation block
@property (nonatomic,copy) id confirmationBlock;                                               //@synthesize confirmationBlock=_confirmationBlock - In the implementation block
@property (nonatomic,retain) UISearchDisplayController * searchDisplayController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDataSource:(id)arg1 preferenceChangeConfirmer:(id)arg2 experimentChangeConfirmer:(id)arg3 alertViewCreator:(id)arg4 session:(id)arg5 ;
-(id)analyticsModule;
-(BOOL)fb_showAuxiliaryViewController;
-(BOOL)fb_showNavBarSearchField;
-(void)performWithSearchResultItem:(id)arg1 ;
-(void)_enableSwitchDidChange:(id)arg1 ;
-(id)_getTitleForExperiment:(id)arg1 experiment:(id)arg2 ;
-(void)_refreshExperiments;
-(void)_removeAllOverrides;
-(void)_importConfigFromTask;
-(void)_tryToRegisterOverridesWithExperimentNames:(id)arg1 registrationBlock:(/*^block*/id)arg2 ;
-(BOOL)_importOverridesFromServerResponse:(id)arg1 error:(id)arg2 errorMessage:(id*)arg3 ;
-(void)_showConfigImportErrorAlertWithServerMessage:(id)arg1 ;
-(void)_handleConfigImportResponse:(id)arg1 error:(id)arg2 ;
-(void)selectExperimentAtIndexPath:(id)arg1 ;
-(void)_showInvalidTaskNumberAlert;
-(void)_importConfigFromTaskNumber:(id)arg1 ;
-(NSArray *)experimentNames;
-(void)setExperimentNames:(NSArray *)arg1 ;
-(id)confirmationBlock;
-(void)setConfirmationBlock:(id)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(UISearchDisplayController *)searchDisplayController;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setSearchDisplayController:(UISearchDisplayController *)arg1 ;
-(BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2 ;
@end

