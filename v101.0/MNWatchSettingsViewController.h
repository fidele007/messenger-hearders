/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Messenger/MNSettingsTextFieldCellDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Messenger/FBKeyboardObserverDelegate.h>

@class MNSettingsView, MNSettingsSectionFooterView, NSArray, MNWatchDefaultRepliesUpdater, FBKeyboardObserver, NSString;

@interface MNWatchSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MNSettingsTextFieldCellDelegate, UITextFieldDelegate, FBKeyboardObserverDelegate> {

	MNSettingsView* _settingsView;
	MNSettingsSectionFooterView* _subtitleView;
	NSArray* _settingsSections;
	NSArray* _settingsSectionFooterViews;
	NSArray* _displayingReplies;
	MNWatchDefaultRepliesUpdater* _defaultRepliesUpdater;
	FBKeyboardObserver* _keyboardObserver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)keyboardObserver:(id)arg1 keyboardFrameDidChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(id)initWithDefaultRepliesUpdater:(id)arg1 ;
-(void)_initializeSettingsSections;
-(void)_initializeSettingsSectionFooterViews;
-(void)_initializeSubtitleView;
-(void)setDefaultRepliesText:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)textFieldDidEndEditing:(id)arg1 settingsCell:(id)arg2 ;
-(void)textFieldShouldReturn:(id)arg1 settingsCell:(id)arg2 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
@end
