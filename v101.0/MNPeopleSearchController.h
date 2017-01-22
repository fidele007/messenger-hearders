/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBContactsSearchDelegate.h>
#import <Messenger/MNPeopleSearchTableSelectionDelegate.h>
#import <Messenger/FBFriendListMonitorListener.h>
#import <Messenger/FBFriendChangedMonitorListener.h>
#import <Messenger/MNPeopleCellDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNPeopleCellActionButtonsStateCoordinatorListener.h>

@protocol FBContactsSearch, MNUserMonitoring, MNPeopleSearchControllerDelegate, MNPeopleSearchControllerRTCDelegate, MNPeopleSearchControllerActionButtonDelegate;
@class FBAnalytics, FBCombinedContactsSearch, MNPeopleSearchResultsDataSource, NSString, MNThreadParticipantNameFormatter, FBMThreadParticipantFilter, FBMobileConfigContextManager, MNPeopleCellFactory, MNTopResultCellFactory, FBTimeThrottler, MNPeopleSearchControllerLogger, MNPeopleCellActionButtonsStateCoordinator, MNPeopleCellStyle, MNPeopleSearchTableDelegate;

@interface MNPeopleSearchController : NSObject <FBContactsSearchDelegate, MNPeopleSearchTableSelectionDelegate, FBFriendListMonitorListener, FBFriendChangedMonitorListener, MNPeopleCellDelegate, FBClassProvidable, MNPeopleCellActionButtonsStateCoordinatorListener> {

	FBAnalytics* _analytics;
	FBCombinedContactsSearch* _defaultContactsSearch;
	MNPeopleSearchResultsDataSource* _defaultSearchResultsDataSource;
	id<FBContactsSearch> _customContactSearch;
	MNPeopleSearchResultsDataSource* _customSearchResultsDataSource;
	NSString* _searchSessionId;
	id<MNUserMonitoring> _userMonitor;
	MNThreadParticipantNameFormatter* _nameFormatter;
	FBMThreadParticipantFilter* _threadParticipantFilter;
	FBMobileConfigContextManager* _configManager;
	MNPeopleCellFactory* _peopleCellFactory;
	MNTopResultCellFactory* _topResultCellFactory;
	FBTimeThrottler* _timeThrottler;
	BOOL _isObserving;
	id<MNPeopleSearchControllerDelegate> _delegate;
	id<MNPeopleSearchControllerRTCDelegate> _rtcDelegate;
	id<MNPeopleSearchControllerActionButtonDelegate> _actionButtonDelegate;
	MNPeopleSearchControllerLogger* _logger;
	MNPeopleCellActionButtonsStateCoordinator* _peopleCellActionButtonsStateCoordinator;
	MNPeopleCellStyle* _peopleCellStyle;
	MNPeopleSearchTableDelegate* _searchTableDelegate;

}

@property (nonatomic,retain) MNPeopleCellStyle * peopleCellStyle;                                                              //@synthesize peopleCellStyle=_peopleCellStyle - In the implementation block
@property (nonatomic,readonly) MNPeopleSearchTableDelegate * searchTableDelegate;                                              //@synthesize searchTableDelegate=_searchTableDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<MNPeopleSearchControllerDelegate> delegate;                                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MNPeopleSearchControllerRTCDelegate> rtcDelegate;                                       //@synthesize rtcDelegate=_rtcDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<MNPeopleSearchControllerActionButtonDelegate> actionButtonDelegate;                     //@synthesize actionButtonDelegate=_actionButtonDelegate - In the implementation block
@property (nonatomic,readonly) MNPeopleSearchResultsDataSource * searchResultsDataSource; 
@property (nonatomic,readonly) MNPeopleSearchControllerLogger * logger;                                                        //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) MNPeopleCellActionButtonsStateCoordinator * peopleCellActionButtonsStateCoordinator;              //@synthesize peopleCellActionButtonsStateCoordinator=_peopleCellActionButtonsStateCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)bindToTableView:(id)arg1 ;
-(id)analyticsModule;
-(void)addScrollingListener:(id)arg1 ;
-(void)didFinishSearch:(id)arg1 ;
-(BOOL)shouldHideResult:(id)arg1 ;
-(void)didPickResult:(id)arg1 ;
-(BOOL)shouldSelectResultWhenTapped:(id)arg1 ;
-(void)selectedResult:(id)arg1 withAnalyticsExtras:(id)arg2 ;
-(void)contextTappedForConversationContact:(id)arg1 ;
-(void)callButtonTappedForConversationContact:(id)arg1 isVideoCall:(BOOL)arg2 ;
-(void)peopleCell:(id)arg1 didTapLightweightActionButtonForConversationContact:(id)arg2 ;
-(void)peopleCell:(id)arg1 didTapActionButtonForConversationContact:(id)arg2 ;
-(void)peopleCell:(id)arg1 didTapSecondaryActionButtonForConversationContact:(id)arg2 ;
-(void)didUpdatePeopleCellActionButtonState:(id)arg1 forConversationContact:(id)arg2 ;
-(void)configureWithPeopleCellStyle:(id)arg1 ;
-(void)unbindFromTableView:(id)arg1 ;
-(void)endSearchSession;
-(void)startSearch;
-(void)startSearchSession;
-(void)setRtcDelegate:(id<MNPeopleSearchControllerRTCDelegate>)arg1 ;
-(void)removeScrollingListener:(id)arg1 ;
-(void)setActionButtonDelegate:(id<MNPeopleSearchControllerActionButtonDelegate>)arg1 ;
-(void)endSearchSessionIfNeeded;
-(BOOL)isBindedToTableView:(id)arg1 ;
-(void)setShouldHideHeaderForFirstSectionIfNecessary:(BOOL)arg1 ;
-(void)didUpdateUsersWithIds:(id)arg1 ;
-(void)setPeopleCellActionButtonsStateCoordinator:(MNPeopleCellActionButtonsStateCoordinator *)arg1 ;
-(void)didUpdateAllActionButtonsToNormalState:(BOOL)arg1 ;
-(void)didTapActionButtonForConversationContact:(id)arg1 ;
-(id<MNPeopleSearchControllerActionButtonDelegate>)actionButtonDelegate;
-(id)_searchResultsDataSourceForContactSearch:(id)arg1 ;
-(void)_refreshContactsIfNeededThrottled;
-(void)_updateCustomContactSearchFromDelegate;
-(id)_newPeopleCellWithReuseIdentifier:(id)arg1 ;
-(id)_newTopResultCellWithReuseIdentifier:(id)arg1 ;
-(void)_setCustomContactSearch:(id)arg1 ;
-(void)setPeopleCellStyle:(MNPeopleCellStyle *)arg1 ;
-(MNPeopleCellStyle *)peopleCellStyle;
-(void)didWriteUpdatesToSyncStoreInvalidatingFriendList;
-(id<MNPeopleSearchControllerRTCDelegate>)rtcDelegate;
-(MNPeopleCellActionButtonsStateCoordinator *)peopleCellActionButtonsStateCoordinator;
-(MNPeopleSearchTableDelegate *)searchTableDelegate;
-(void)setDelegate:(id<MNPeopleSearchControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNPeopleSearchControllerDelegate>)delegate;
-(MNPeopleSearchResultsDataSource *)searchResultsDataSource;
-(void)search;
-(MNPeopleSearchControllerLogger *)logger;
-(void)startObserving;
-(void)cancelSearch;
-(void)stopObserving;
@end
