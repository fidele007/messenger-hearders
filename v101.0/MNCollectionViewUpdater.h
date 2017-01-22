/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
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
