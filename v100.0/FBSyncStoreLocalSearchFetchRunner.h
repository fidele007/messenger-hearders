/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBLocalContactSearchFetchRunning.h>

@protocol FBLocalContactSearchFetchRunnerDelegate, FBLocalNicknameSearchModelAdapter;
@class NSOperationQueue, FBSyncStore, FBAnalytics, NSString;

@interface FBSyncStoreLocalSearchFetchRunner : NSObject <FBLocalContactSearchFetchRunning> {

	NSOperationQueue* _operationQueue;
	FBSyncStore* _syncStore;
	FBAnalytics* _analytics;
	BOOL _shouldExcludeNonConnectedContacts;
	id<FBLocalContactSearchFetchRunnerDelegate> _delegate;
	id<FBLocalNicknameSearchModelAdapter> _modelAdapter;
	NSString* _currentSearch;

}
-(id)initWithSyncStore:(id)arg1 shouldExcludeNonConnectedContacts:(BOOL)arg2 ;
-(id)searchContactsWithSearchText:(id)arg1 delegate:(id)arg2 ;
-(void)_beginSearchOperationCompleted:(id)arg1 ;
-(void)_onSearchOperationCompleted:(id)arg1 ;
-(void)_additionalPersonFetch:(id)arg1 finishedWithPeople:(id)arg2 withNicknameMapping:(id)arg3 ;
-(id)initWithSyncStore:(id)arg1 withModelAdapter:(id)arg2 shouldExcludeNonConnectedContacts:(BOOL)arg3 ;
@end

