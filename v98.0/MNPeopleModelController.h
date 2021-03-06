/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNFriendsFetcherAggregatorDelegate.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@protocol OS_dispatch_queue, MNPeopleModelControllerDelegate;
@class MNFriendsFetcherAggregator, MNOnlineStatusManager, NSArray, FBUserSession, NSObject, MNPeopleTabConfiguration, FBLocalizedIndexedCollation, FBMPresenceObserver, MNFriendsFetcherAggregatedResults, NSString;

@interface MNPeopleModelController : NSObject <MNFriendsFetcherAggregatorDelegate, FBViewerContextClassProvidable> {

	MNFriendsFetcherAggregator* _friendsFetcherAggregator;
	MNOnlineStatusManager* _onlineStatusManager;
	NSArray* _sectionTitles;
	NSArray* _sectionIndexTitles;
	FBUserSession* _session;
	NSObject*<OS_dispatch_queue> _collationQueue;
	MNPeopleTabConfiguration* _peopleTabConfig;
	BOOL _friendsLoaded;
	BOOL _hasMessengerSections;
	id<MNPeopleModelControllerDelegate> _delegate;
	NSArray* _messengerFriends;
	NSArray* _activeFriends;
	NSArray* _messengerSectionTitles;
	FBLocalizedIndexedCollation* _currentCollation;
	FBMPresenceObserver* _presenceObserver;
	MNFriendsFetcherAggregatedResults* _friendFetchResults;

}

@property (nonatomic,copy) NSArray * messengerFriends;                                            //@synthesize messengerFriends=_messengerFriends - In the implementation block
@property (nonatomic,copy) NSArray * activeFriends;                                               //@synthesize activeFriends=_activeFriends - In the implementation block
@property (nonatomic,copy) NSArray * messengerSectionTitles;                                      //@synthesize messengerSectionTitles=_messengerSectionTitles - In the implementation block
@property (assign,nonatomic) BOOL friendsLoaded;                                                  //@synthesize friendsLoaded=_friendsLoaded - In the implementation block
@property (assign,nonatomic) BOOL hasMessengerSections;                                           //@synthesize hasMessengerSections=_hasMessengerSections - In the implementation block
@property (nonatomic,retain) FBLocalizedIndexedCollation * currentCollation;                      //@synthesize currentCollation=_currentCollation - In the implementation block
@property (nonatomic,retain) FBMPresenceObserver * presenceObserver;                              //@synthesize presenceObserver=_presenceObserver - In the implementation block
@property (nonatomic,retain) MNFriendsFetcherAggregatedResults * friendFetchResults;              //@synthesize friendFetchResults=_friendFetchResults - In the implementation block
@property (assign,nonatomic,__weak) id<MNPeopleModelControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MNOnlineStatusManager * onlineStatusManager;                       //@synthesize onlineStatusManager=_onlineStatusManager - In the implementation block
@property (nonatomic,readonly) BOOL presenceLoaded; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(NSArray *)activeFriends;
-(NSArray *)messengerFriends;
-(void)didUpdateAggregatedFriends:(id)arg1 aggregatedResults:(id)arg2 ;
-(void)friendsAggregatorDidStartLoading:(id)arg1 ;
-(void)friendsAggregatorDidFinishLoading:(id)arg1 ;
-(BOOL)isLoggedInUserOnlineForChat;
-(id)initWithPeopleTabConfiguration:(id)arg1 onlineStatusManager:(id)arg2 session:(id)arg3 presenceObserver:(id)arg4 friendsFetcherAggregator:(id)arg5 ;
-(void)_buildTableViewSectionData;
-(void)setFriendsLoaded:(BOOL)arg1 ;
-(void)setActiveFriends:(NSArray *)arg1 ;
-(void)setMessengerFriends:(NSArray *)arg1 ;
-(void)setMessengerSectionTitles:(NSArray *)arg1 ;
-(MNFriendsFetcherAggregatedResults *)friendFetchResults;
-(void)clearSectionData;
-(void)setHasMessengerSections:(BOOL)arg1 ;
-(BOOL)hasMessengerSections;
-(BOOL)presenceLoaded;
-(void)setFriendFetchResults:(MNFriendsFetcherAggregatedResults *)arg1 ;
-(unsigned long long)numberOfSectionsForFilter:(unsigned long long)arg1 ;
-(unsigned long long)numberOfRowsInSection:(unsigned long long)arg1 forFilter:(unsigned long long)arg2 ;
-(BOOL)_hasTopFriendsForFilter:(unsigned long long)arg1 ;
-(id)_facebookFilterSectionHeaderTitle;
-(unsigned long long)topFriendsCountForFilter:(unsigned long long)arg1 ;
-(BOOL)hasAnyFriends;
-(void)reloadFriends;
-(void)stopReloadingFriends;
-(unsigned long long)lastVisibleSectionIndex:(unsigned long long)arg1 ;
-(BOOL)shouldDisplayHeaderInSection:(unsigned long long)arg1 forFilter:(unsigned long long)arg2 ;
-(id)titleForHeaderInSection:(unsigned long long)arg1 forFilter:(unsigned long long)arg2 ;
-(id)conversationInitiatorForSection:(unsigned long long)arg1 forFilter:(unsigned long long)arg2 ;
-(id)sectionIndexTitlesforFilter:(unsigned long long)arg1 ;
-(long long)sectionForSectionIndexTitle:(id)arg1 atIndex:(long long)arg2 forFilter:(unsigned long long)arg3 ;
-(id)conversationPersonForIndexPath:(id)arg1 forFilter:(unsigned long long)arg2 ;
-(unsigned long long)friendsCountForFilter:(unsigned long long)arg1 ;
-(MNOnlineStatusManager *)onlineStatusManager;
-(BOOL)friendsLoaded;
-(NSArray *)messengerSectionTitles;
-(void)setCurrentCollation:(FBLocalizedIndexedCollation *)arg1 ;
-(FBMPresenceObserver *)presenceObserver;
-(void)setPresenceObserver:(FBMPresenceObserver *)arg1 ;
-(void)setDelegate:(id<MNPeopleModelControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNPeopleModelControllerDelegate>)delegate;
-(FBLocalizedIndexedCollation *)currentCollation;
@end

