/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:55 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBFriendingPossibilitiesCountListener.h>
#import <Messenger/FBFriendingPossibilitiesEdgesListener.h>

@protocol FBFriendingPossibilitiesBufferedDataSourceDelegate;
@class NSMutableArray, FBFriendingPossibilitiesDataCoordinator, FBFriendingPossibilitiesDataSource, NSArray, NSString;

@interface FBFriendingPossibilitiesBufferedDataSource : NSObject <FBFriendingPossibilitiesCountListener, FBFriendingPossibilitiesEdgesListener> {

	NSMutableArray* _friendingPossibilitiesBuffer;
	FBFriendingPossibilitiesDataCoordinator* _friendingDataCoordinator;
	FBFriendingPossibilitiesDataSource* _friendingDataSource;
	unsigned long long _numberToFetch;
	/*^block*/id _fetchCompletionBlock;
	BOOL _alreadyReturnedPartialResults;
	id<FBFriendingPossibilitiesBufferedDataSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBFriendingPossibilitiesBufferedDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long totalCount; 
@property (nonatomic,readonly) long long unseenCount; 
@property (nonatomic,readonly) BOOL hasMoreObjects; 
@property (nonatomic,copy,readonly) NSArray * allFetchedMemPersons; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)unseenCount;
-(BOOL)hasMoreObjects;
-(void)_finishPendingFetchRequest;
-(void)_finishPendingFetchRequestWithPartialResults;
-(void)_resetLoadingState;
-(id)_identicalEdgeInBuffer:(id)arg1 ;
-(id)friendingPossibilitiesBuffer;
-(void)asyncFetchObjects:(unsigned long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSArray *)allFetchedMemPersons;
-(BOOL)allUnseenObjectsLoaded;
-(void)friendingPossibilitiesDidChangeTotalCount:(long long)arg1 andUnseenCount:(long long)arg2 ;
-(void)friendingPossibilitiesDataSource:(id)arg1 didInsertEdges:(id)arg2 forLoadType:(long long)arg3 withError:(id)arg4 ;
-(void)friendingPossibilitiesDataSource:(id)arg1 didRemoveEdges:(id)arg2 isReloading:(BOOL)arg3 ;
-(void)friendingPossibilitiesDataSource:(id)arg1 didUpdateEdges:(id)arg2 isReloading:(BOOL)arg3 ;
-(void)setDelegate:(id<FBFriendingPossibilitiesBufferedDataSourceDelegate>)arg1 ;
-(void)dealloc;
-(id<FBFriendingPossibilitiesBufferedDataSourceDelegate>)delegate;
-(id)initWithSession:(id)arg1 ;
-(long long)totalCount;
@end

