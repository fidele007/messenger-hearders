/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMemAvatarTaggingSearchProviderDelegate.h>
#import <Messenger/FBAvatarTaggingSectionDataSource.h>

@protocol FBAvatarProtocol, FBTableViewMutating, FBAvatarTaggingSearchProviderProtocol, FBAvatarTaggingSectionDataSourceDelegate;
@class NSArray, NSMutableArray, FBUserSession, FBMemModelObject, NSString;

@interface FBAvatarTaggingTagSearchDataSource : NSObject <FBMemAvatarTaggingSearchProviderDelegate, FBAvatarTaggingSectionDataSource> {

	NSArray* _excludeFBIDs;
	NSMutableArray* _unfilteredAvatars;
	FBUserSession* _session;
	FBMemModelObject*<FBAvatarProtocol> _currentViewer;
	id<FBTableViewMutating> _tableViewMutator;
	NSString* _searchText;
	id<FBAvatarTaggingSearchProviderProtocol> _searchProvider;
	id<FBAvatarTaggingSectionDataSourceDelegate> _delegate;
	NSArray* _avatars;
	NSArray* _avatarSectionNames;

}

@property (nonatomic,copy) NSArray * avatars;                                                           //@synthesize avatars=_avatars - In the implementation block
@property (nonatomic,retain) NSArray * avatarSectionNames;                                              //@synthesize avatarSectionNames=_avatarSectionNames - In the implementation block
@property (getter=isFetchingResults,nonatomic,readonly) BOOL fetchingResults; 
@property (nonatomic,copy) NSString * searchText;                                                       //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,retain) id<FBAvatarTaggingSearchProviderProtocol> searchProvider;                  //@synthesize searchProvider=_searchProvider - In the implementation block
@property (assign,nonatomic,__weak) id<FBAvatarTaggingSectionDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<FBTableViewMutating> tableViewMutator;                                  //@synthesize tableViewMutator=_tableViewMutator - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active; 
-(id<FBTableViewMutating>)tableViewMutator;
-(void)setTableViewMutator:(id<FBTableViewMutating>)arg1 ;
-(void)setAvatars:(NSArray *)arg1 ;
-(NSArray *)avatars;
-(BOOL)isFetchingResults;
-(id)initWithSearchProvider:(id)arg1 session:(id)arg2 ;
-(void)searchProvider:(id)arg1 foundResults:(id)arg2 forText:(id)arg3 ;
-(void)searchProviderDidFinishFetchingResults:(id)arg1 ;
-(void)setSearchText:(id)arg1 andSearch:(BOOL)arg2 ;
-(void)setAvatarSectionNames:(NSArray *)arg1 ;
-(id)_bottomRowBackgroundImageView;
-(BOOL)_hasExcludeFBID:(id)arg1 ;
-(void)setUnfilteredAvatars:(id)arg1 searchedText:(id)arg2 ;
-(id)currentViewerForViewerFBID:(id)arg1 ;
-(BOOL)hasAvatarsInSection:(unsigned long long)arg1 ;
-(id)tableView:(id)arg1 noResultsCellAtIndexPath:(id)arg2 ;
-(id)fullAvatarAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg1 cellForAvatar:(id)arg2 isLastCell:(BOOL)arg3 ;
-(void)_updateSearchedAvatars:(id)arg1 forSearchedText:(id)arg2 ;
-(void)clearSearchText;
-(id)avatarAtIndexPath:(id)arg1 ;
-(id)fetchOrInsertFullAvatarAtIndexPath:(id)arg1 ;
-(id)loggingSourceForAvatarAtIndexPath:(id)arg1 ;
-(void)setExcludeFBIDs:(id)arg1 ;
-(void)_styleCell:(id)arg1 isLastCell:(BOOL)arg2 ;
-(NSArray *)avatarSectionNames;
-(id)indexPathForObject:(id)arg1 ;
-(void)setDelegate:(id<FBAvatarTaggingSectionDataSourceDelegate>)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id<FBAvatarTaggingSectionDataSourceDelegate>)delegate;
-(void)reset;
-(NSString *)searchText;
-(id<FBAvatarTaggingSearchProviderProtocol>)searchProvider;
-(void)setSearchProvider:(id<FBAvatarTaggingSearchProviderProtocol>)arg1 ;
-(void)setSearchText:(NSString *)arg1 ;
-(id)_backgroundImageView;
@end

