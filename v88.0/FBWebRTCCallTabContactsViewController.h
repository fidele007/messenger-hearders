/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBWebRTCRecentCallerViewModelListener.h>
#import <Messenger/MNPeopleCellDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchDisplayDelegate.h>
#import <Messenger/MNPeopleSearchControllerDelegate.h>
#import <Messenger/MNPeopleSearchControllerRTCDelegate.h>
#import <Messenger/MNPeopleSearchResultsDataSourceRTCCallButtonDataSource.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBWebRTCCallTabContactsViewControllerDelegate;
@class FBWebRTCCallController, FBWebRTCRecentCallerViewModel, FBWebRTCCallButtonImageProvider, FBWebRTCCallLogView, UITableView, UISearchBar, FBImageDownloader, MNDateFormatter, UISearchDisplayController, MNPeopleSearchController, MNPeopleCellFactory, MNCDNProfileImageDownloader, NSString;

@interface FBWebRTCCallTabContactsViewController : UIViewController <FBWebRTCRecentCallerViewModelListener, MNPeopleCellDelegate, UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, UISearchDisplayDelegate, MNPeopleSearchControllerDelegate, MNPeopleSearchControllerRTCDelegate, MNPeopleSearchResultsDataSourceRTCCallButtonDataSource, FBClassProvidable> {

	FBWebRTCCallController* _callController;
	FBWebRTCRecentCallerViewModel* _recentCallerViewModel;
	FBWebRTCCallButtonImageProvider* _callButtonImageProvider;
	FBWebRTCCallLogView* _callLogView;
	UITableView* _tableView;
	UISearchBar* _searchBar;
	FBImageDownloader* _imageDownloader;
	MNDateFormatter* _dateFormatter;
	UISearchDisplayController* _searchDisplayController;
	MNPeopleSearchController* _peopleSearchController;
	BOOL _searching;
	MNPeopleCellFactory* _peopleCellFactory;
	MNCDNProfileImageDownloader* _profileImageDownloader;
	id<FBWebRTCCallTabContactsViewControllerDelegate> _delegate;
	unsigned long long _dialerMode;

}

@property (assign,nonatomic,__weak) id<FBWebRTCCallTabContactsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long dialerMode;                                                  //@synthesize dialerMode=_dialerMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)contextTappedForConversationContact:(id)arg1 ;
-(void)callButtonTappedForConversationContact:(id)arg1 isVideoCall:(BOOL)arg2 ;
-(void)peopleCellActionButtonTappedForConversationContact:(id)arg1 ;
-(void)didUpdatePeopleCellActionButtonState:(id)arg1 forConversationContact:(id)arg2 ;
-(BOOL)peopleSearchControllerShouldIncludeGroup:(id)arg1 ;
-(BOOL)peopleSearchControllerShouldIncludeAddressBookContacts:(id)arg1 ;
-(BOOL)peopleSearchControllerShouldIncludePages:(id)arg1 ;
-(BOOL)peopleSearchControllerShouldIncludeBlendedResults:(id)arg1 ;
-(BOOL)peopleSearchControllerShouldIncludeNicknameResults:(id)arg1 ;
-(id)searchTextForPeopleSearchController:(id)arg1 ;
-(id)pickedUserIdsForPeopleSearchController:(id)arg1 ;
-(void)peopleSearchControllerDidFinishSearch:(id)arg1 ;
-(BOOL)peopleSearchController:(id)arg1 shouldSelectResultWhenTapped:(id)arg2 ;
-(void)peopleSearchController:(id)arg1 didSelectResult:(id)arg2 withAnalyticsExtras:(id)arg3 ;
-(BOOL)peopleSearchController:(id)arg1 shouldShowResult:(id)arg2 ;
-(BOOL)peopleSearchControllerShouldSearchServer:(id)arg1 ;
-(unsigned long long)surfaceForPeopleSearchSession;
-(void)didPressClose;
-(void)_endSearchSession;
-(void)_startSearchSession;
-(void)recentCallerViewModelDidFinishFetching:(id)arg1 ;
-(void)peopleSearchController:(id)arg1 didTapCallButtonForContact:(id)arg2 isVideoCall:(BOOL)arg3 ;
-(id)peopleSearchDataSourceAudioCallButtonImage;
-(BOOL)peopleSearchDataSourceIsAudioCallingAvailableForContact:(id)arg1 ;
-(id)peopleSearchDataSourceVideoCallButtonImage;
-(BOOL)peopleSearchDataSourceIsVideoCallingAvailableForContact:(id)arg1 ;
-(void)setDialerMode:(unsigned long long)arg1 ;
-(id)initWithRecentCallerViewModel:(id)arg1 callController:(id)arg2 imageDownloader:(id)arg3 dateFormatter:(id)arg4 callButtonImageProvider:(id)arg5 peopleSearchController:(id)arg6 peopleCellFactory:(id)arg7 profileImageDownloader:(id)arg8 ;
-(BOOL)_isAudioCallingAvailable;
-(BOOL)_isVideoCallingAvailable;
-(void)_configreCellForDialerMode:(id)arg1 ;
-(void)_startImageDownloadWithImageDownloader:(id)arg1 imageUrl:(id)arg2 scenePath:(id)arg3 imageDownloaderCompletion:(/*^block*/id)arg4 ;
-(unsigned long long)dialerMode;
-(void)_startCallWithContact:(id)arg1 callType:(unsigned long long)arg2 ;
-(BOOL)_isVideoCall:(unsigned long long)arg1 ;
-(void)setDelegate:(id<FBWebRTCCallTabContactsViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<FBWebRTCCallTabContactsViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchDisplayController:(id)arg1 willUnloadSearchResultsTableView:(id)arg2 ;
-(void)searchDisplayControllerDidBeginSearch:(id)arg1 ;
-(void)searchDisplayControllerDidEndSearch:(id)arg1 ;
-(void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2 ;
-(void)scrollToTopAnimated:(BOOL)arg1 ;
@end
