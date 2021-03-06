/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/MNSearchBarDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBCancelable;
@class UISegmentedControl, MNSearchToolbar, UITableView, NSString;

@interface MNSimpleSearchViewController : UIViewController <MNSearchBarDelegate, FBClassProvidable> {

	UISegmentedControl* _segmentedControl;
	MNSearchToolbar* _searchBar;
	UITableView* _tableView;
	id<FBCancelable> _currentQueryToken;
	FBPair* _blendedSystem;
	FBPair* _standardSystem;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_onSystemSwitch;
-(id)_currentDisplayController;
-(void)_performSearch;
-(id)_currentSearchEngine;
-(void)_searchForQuery:(id)arg1 producedResults:(id)arg2 isFinished:(BOOL)arg3 ;
-(FBPair*)_currentSystem;
-(void)searchBarActionButtonPressed:(id)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
@end

