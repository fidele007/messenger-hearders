/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <FBSharedFramework/FBClassInjectable.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Messenger/MNRoomSuggestionCellDelegate.h>
#import <Messenger/MNRoomSuggestionsInboxUnitSeeAllViewDelegate.h>

@protocol MNRoomSuggestionsInboxUnitSeeAllViewControllerDelegate;
@class MNRoomSuggestionsInboxUnitSeeAllViewControllerInjector, MNRoomSuggestionsInboxUnitSeeAllView, NSArray, UIButton, MNRoomSuggestionsInboxUnitSeeAllHeaderView, NSString;

@interface MNRoomSuggestionsInboxUnitSeeAllViewController : UIViewController <FBClassInjectable, UITableViewDataSource, UITableViewDelegate, MNRoomSuggestionCellDelegate, MNRoomSuggestionsInboxUnitSeeAllViewDelegate> {

	MNRoomSuggestionsInboxUnitSeeAllViewControllerInjector* _injector;
	MNRoomSuggestionsInboxUnitSeeAllView* _roomSuggestionsView;
	NSArray* _allRoomSuggestions;
	UIButton* _createNewRoomButton;
	MNRoomSuggestionsInboxUnitSeeAllHeaderView* _roomSuggestionsHeaderView;
	BOOL _useCachedData;
	id<MNRoomSuggestionsInboxUnitSeeAllViewControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNRoomSuggestionsInboxUnitSeeAllViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL useCachedData;                                                                      //@synthesize useCachedData=_useCachedData - In the implementation block
+(Class)injectorClass;
-(void)roomSuggestionCell:(id)arg1 didTapHideSuggestionForViewModel:(id)arg2 ;
-(void)roomSuggestionCell:(id)arg1 didRequestViewRoomForViewModel:(id)arg2 ;
-(void)_didTapCreateNewRoomButton;
-(void)_refreshRoomSuggestions:(BOOL)arg1 ;
-(unsigned long long)_sectionAtIndex:(long long)arg1 ;
-(id)_createNewRoomCTARowForTableView:(id)arg1 ;
-(id)_roomSuggestionCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_roomSuggestionsHeaderView;
-(void)_removeRowFromTableAtIndexPath:(id)arg1 ;
-(void)_handleRoomSuggestionsFetchSuccess:(id)arg1 ;
-(void)_handleRoomSuggestionsFetchFailure:(id)arg1 ;
-(void)roomSuggestionsInboxUnitSeeAllViewDidTapCreateNewRoom:(id)arg1 ;
-(BOOL)useCachedData;
-(void)setUseCachedData:(BOOL)arg1 ;
-(id)initWithInjector:(id)arg1 ;
-(void)setDelegate:(id<MNRoomSuggestionsInboxUnitSeeAllViewControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(id<MNRoomSuggestionsInboxUnitSeeAllViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)_setTitle;
@end

