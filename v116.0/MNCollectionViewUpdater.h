/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:01 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNCollectionViewUpdaterDelegate;
@class UICollectionView, NSArray;

@interface MNCollectionViewUpdater : NSObject {

	UICollectionView* _collectionView;
	/*^block*/id _keyGenerator;
	/*^block*/id _itemComparator;
	/*^block*/id _itemUpdater;
	NSArray* _delayedUpdates;
	BOOL _performingBatchUpdate;
	NSArray* _collectionViewData;
	id<MNCollectionViewUpdaterDelegate> _delegate;

}

@property (assign,nonatomic) BOOL performingBatchUpdate;                                       //@synthesize performingBatchUpdate=_performingBatchUpdate - In the implementation block
@property (nonatomic,copy) NSArray * collectionViewData;                                       //@synthesize collectionViewData=_collectionViewData - In the implementation block
@property (assign,nonatomic,__weak) id<MNCollectionViewUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithCollectionView:(id)arg1 keyGenerator:(/*^block*/id)arg2 itemComparator:(/*^block*/id)arg3 ;
-(void)setCollectionViewData:(NSArray *)arg1 ;
-(NSArray *)collectionViewData;
-(void)_processPendingUpdateIfPossible;
-(BOOL)_canReload;
-(void)setPerformingBatchUpdate:(BOOL)arg1 ;
-(BOOL)performingBatchUpdate;
-(id)initWithCollectionView:(id)arg1 keyGenerator:(/*^block*/id)arg2 itemComparator:(/*^block*/id)arg3 itemUpdater:(/*^block*/id)arg4 ;
-(id)indexPathsCollectionViewWillDeleteWithData:(id)arg1 ;
-(void)_reloadWithData:(id)arg1 ;
-(id)_updateItemsFromOldData:(id)arg1 toNewData:(id)arg2 ;
-(void)_updateCollectionViewFromOldData:(id)arg1 toNewData:(id)arg2 ;
-(BOOL)_shouldUpdateCollectionViewSections;
-(void)_updateCollectionViewWithUpdateItems:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<MNCollectionViewUpdaterDelegate>)arg1 ;
-(id<MNCollectionViewUpdaterDelegate>)delegate;
@end

