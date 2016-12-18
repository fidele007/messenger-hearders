/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBContainerViewController.h>
#import <Messenger/MNPeoplePickerSearchBarViewDelegate.h>
#import <Messenger/MNPeopleSuggestionsViewControllerDelegate.h>
#import <Messenger/MNPeopleSearchViewControllerDelegate.h>
#import <Messenger/MNPeopleSearchResultsDataSourceDelegate.h>
#import <Messenger/MNPeopleSearchResultsDataSourceActionButtonDataSource.h>
#import <UIKit/UISearchBarDelegate.h>
#import <Messenger/MNPeopleCellActionButtonsStateCoordinatorListener.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBProvider, MNSuggestedContactsRetriever, MNPeoplePickerSearchBarViewControllerDelegate, MNPeoplePickerSearchBarViewControllerActionButtonDelegate, MNPeoplePickerSearchBarViewControllerSearchBarDataSource;
@class MNPeoplePickerSearchBarView, MNPeopleSuggestionsViewController, MNPeopleSearchViewController, NSArray, MNPeoplePickerSearchBarViewConfiguration, NSMutableArray, UIView, MNPeopleCellActionButtonsStateCoordinator, MNPeoplePickerConfiguration, NSString;

@interface MNPeoplePickerSearchBarViewController : FBContainerViewController <MNPeoplePickerSearchBarViewDelegate, MNPeopleSuggestionsViewControllerDelegate, MNPeopleSearchViewControllerDelegate, MNPeopleSearchResultsDataSourceDelegate, MNPeopleSearchResultsDataSourceActionButtonDataSource, UISearchBarDelegate, MNPeopleCellActionButtonsStateCoordinatorListener, FBClassProvidable> {

	MNPeoplePickerSearchBarView* _peoplePickerSearchBarView;
	id<FBProvider> _peopleSuggestionsViewControllerProvider;
	id<FBProvider> _peopleSearchViewControllerProvider;
	MNPeopleSuggestionsViewController* _peopleSuggestionsViewController;
	MNPeopleSearchViewController* _peopleSearchViewController;
	id<MNSuggestedContactsRetriever> _suggestedContactsRetriever;
	NSArray* _peopleSuggestionsListeners;
	MNPeoplePickerSearchBarViewConfiguration* _searchBarViewConfiguration;
	NSMutableArray* _pickedContacts;
	UIView* _searchBarHeaderView;
	MNPeopleCellActionButtonsStateCoordinator* _peopleCellActionButtonsStateCoordinator;
	BOOL _disableContactSelection;
	id<MNPeoplePickerSearchBarViewControllerDelegate> _delegate;
	id<MNPeoplePickerSearchBarViewControllerActionButtonDelegate> _actionButtonDelegate;
	id<MNPeoplePickerSearchBarViewControllerSearchBarDataSource> _searchBarDataSource;
	unsigned long long _searchBarVisibility;
	MNPeoplePickerConfiguration* _configuration;
	unsigned long long _viewState;

}

@property (nonatomic,retain) MNPeoplePickerConfiguration * configuration;                                                            //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) unsigned long long viewState;                                                                           //@synthesize viewState=_viewState - In the implementation block
@property (assign,nonatomic,__weak) id<MNPeoplePickerSearchBarViewControllerDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MNPeoplePickerSearchBarViewControllerActionButtonDelegate> actionButtonDelegate;              //@synthesize actionButtonDelegate=_actionButtonDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<MNPeoplePickerSearchBarViewControllerSearchBarDataSource> searchBarDataSource;                //@synthesize searchBarDataSource=_searchBarDataSource - In the implementation block
@property (assign,nonatomic) BOOL disableContactSelection;                                                                           //@synthesize disableContactSelection=_disableContactSelection - In the implementation block
@property (assign,nonatomic) unsigned long long searchBarVisibility;                                                                 //@synthesize searchBarVisibility=_searchBarVisibility - In the implementation block
@property (nonatomic,retain) UIView * headerView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)configureWith:(id)arg1 suggestedContactsRetriever:(id)arg2 peopleSuggestionsListeners:(id)arg3 ;
-(void)setSearchDimmingViewColor:(id)arg1 ;
-(void)setSearchBarCancelButtonTitle:(id)arg1 ;
-(void)setPeoplePickerViewBackgroundColor:(id)arg1 ;
-(id)pickedContacts;
-(void)restartPeopleSuggestionsRetrieving;
-(void)dimmingViewTouched;
-(BOOL)peopleSuggestionsViewController:(id)arg1 shouldShowContact:(id)arg2 ;
-(BOOL)peopleSuggestionsViewController:(id)arg1 didTapContact:(id)arg2 ;
-(void)peopleSuggestionsViewController:(id)arg1 didTapActionButtonWithContact:(id)arg2 ;
-(void)peopleSuggestionsViewController:(id)arg1 didTapSecondaryActionButtonWithContact:(id)arg2 ;
-(BOOL)peopleSuggestionViewController:(id)arg1 shouldSelectCellWithContact:(id)arg2 ;
-(BOOL)peopleSuggestionViewController:(id)arg1 shouldDisableCellWithContact:(id)arg2 ;
-(void)peopleSuggestionViewControllerDidShowNullState:(id)arg1 ;
-(BOOL)peopleSuggestionViewController:(id)arg1 shouldDisableActionButtonForContact:(id)arg2 ;
-(void)peopleSuggestionsViewController:(id)arg1 didFetchPreselectedContacts:(id)arg2 ;
-(long long)peopleSuggestionsViewControllerAccessoryTypeForCellWithContact:(id)arg1 ;
-(id)peopleSearchDataSourceAccessoryLabelForCellWithContact:(id)arg1 ;
-(long long)peopleSearchDataSourceAccessoryTypeForCellWithContact:(id)arg1 ;
-(BOOL)peopleSearchDataSourceShouldEnableCellWithContact:(id)arg1 ;
-(id)sectionOrderingForQuery:(id)arg1 ;
-(BOOL)peopleSearchDataSourceCanShowContextInTwoLines;
-(BOOL)peopleSearchDataSourceShouldShowLargeProfileImage;
-(void)clearPickedContacts;
-(void)filterPickedContactsWithPredicateBlock:(/*^block*/id)arg1 ;
-(void)addPickedContact:(id)arg1 ;
-(BOOL)peopleSearchDataSourceIsActionButtonEnabledForContact:(id)arg1 ;
-(id)peopleSearchDataSourceActionButtonConfigurationForContact:(id)arg1 ;
-(void)setActionButtonDelegate:(id<MNPeoplePickerSearchBarViewControllerActionButtonDelegate>)arg1 ;
-(void)endSearching;
-(void)scrollSuggestionsViewToTopAnimated:(BOOL)arg1 ;
-(void)removePickedContact:(id)arg1 ;
-(void)showSuggestionsView;
-(unsigned long long)searchBarVisibility;
-(double)heighOfAccessoryViewAboveSearchBar;
-(void)setSearchBarVisibility:(unsigned long long)arg1 ;
-(BOOL)_isSearchBarScrollable;
-(void)_initPeopleSuggestionsViewControllerIfNecessary;
-(void)_setShowsSuggestions:(BOOL)arg1 ;
-(void)_pickedContactsDidChange;
-(BOOL)_addPickedContact:(id)arg1 fromSearch:(BOOL)arg2 notifiesDelegate:(BOOL)arg3 ;
-(BOOL)_removePickedContact:(id)arg1 fromSearch:(BOOL)arg2 notifiesDelegate:(BOOL)arg3 ;
-(void)_dismissSearchIfPossible;
-(void)_setShowsSearchResults:(BOOL)arg1 ;
-(void)clearSearchBar;
-(BOOL)_showingSuggestions;
-(BOOL)_showingSearchResults;
-(BOOL)_shouldShowConversationContact:(id)arg1 ;
-(BOOL)_didTapContact:(id)arg1 fromSearch:(BOOL)arg2 ;
-(BOOL)_isActionButtonEnabledForConversationContact:(id)arg1 ;
-(long long)_accessoryTypeForCellWithContact:(id)arg1 ;
-(BOOL)_isPermanentlyPickedConversationContact:(id)arg1 ;
-(BOOL)_isContactPicked:(id)arg1 ;
-(BOOL)_shouldDisableCellWithContact:(id)arg1 ;
-(BOOL)_shouldShowContactResult:(id)arg1 ;
-(void)_updateAccessoryTypeForVisibleCells;
-(void)_updateActionButtonEnabledStateForVisibleCells;
-(BOOL)_shouldDisableAccessoryViewForContact:(id)arg1 ;
-(unsigned long long)_indexOfPickedContact:(id)arg1 ;
-(BOOL)_shouldShowConversationGroupWithStatusForViewer:(unsigned long long*)arg1 ;
-(BOOL)peopleSearchViewControllerShouldIncludeGroup:(id)arg1 ;
-(BOOL)peopleSearchViewControllerShouldIncludeAddressBookContacts:(id)arg1 ;
-(unsigned long long)peopleSearchViewControllerPageFilterRule:(id)arg1 ;
-(BOOL)peopleSearchViewControllerShouldIncludeBlendedResults:(id)arg1 ;
-(BOOL)peopleSearchViewControllerShouldIncludeNicknameResults:(id)arg1 ;
-(BOOL)peopleSearchViewControllerShouldSearchServer:(id)arg1 ;
-(id)searchTextForPeopleSearchViewController:(id)arg1 ;
-(id)pickedUserIdsForPeopleSearchViewController:(id)arg1 ;
-(void)peopleSearchViewControllerDidFinishSearch:(id)arg1 ;
-(BOOL)peopleSearchViewController:(id)arg1 shouldShowResult:(id)arg2 ;
-(BOOL)peopleSearchViewController:(id)arg1 shouldSelectResultWhenTapped:(id)arg2 ;
-(void)peopleSearchViewController:(id)arg1 didSelectResult:(id)arg2 withAnalyticsExtras:(id)arg3 ;
-(void)peopleSearchViewController:(id)arg1 didTapActionButtonForContact:(id)arg2 ;
-(unsigned long long)surfaceForPeopleSearchView;
-(void)didUpdateAllActionButtonsToNormalState:(BOOL)arg1 ;
-(void)didTapActionButtonForConversationContact:(id)arg1 ;
-(void)beginSearching;
-(void)setSearchBarBorderColor:(id)arg1 ;
-(void)updateContainerTopContentInset;
-(void)setDisableContactSelection:(BOOL)arg1 ;
-(void)setNewGroupActionBar:(id)arg1 ;
-(id<MNPeoplePickerSearchBarViewControllerActionButtonDelegate>)actionButtonDelegate;
-(id<MNPeoplePickerSearchBarViewControllerSearchBarDataSource>)searchBarDataSource;
-(void)setSearchBarDataSource:(id<MNPeoplePickerSearchBarViewControllerSearchBarDataSource>)arg1 ;
-(BOOL)disableContactSelection;
-(void)setViewState:(unsigned long long)arg1 ;
-(void)setDelegate:(id<MNPeoplePickerSearchBarViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNPeoplePickerSearchBarViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setConfiguration:(MNPeoplePickerConfiguration *)arg1 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)setSearchBarStyle:(unsigned long long)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(MNPeoplePickerConfiguration *)configuration;
-(unsigned long long)viewState;
@end

