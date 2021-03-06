/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBCollectionViewDataSource.h>
#import <Messenger/FBCollectionViewMutating.h>
#import <Messenger/FBCollectionViewSectionDataSource.h>

@protocol FBCollectionViewMutating;
@class NSMutableArray, NSMapTable, FBCollectionViewAggregatedDataSourceListenerAnnouncer, NSArray, NSString;

@interface FBCollectionViewAggregatedDataSource : NSObject <FBCollectionViewDataSource, FBCollectionViewMutating, FBCollectionViewSectionDataSource> {

	NSMutableArray* _dataSources;
	map<id<FBCollectionViewSectionDataSource>, FBCollectionViewDelegateRespondsToCache, std::__1::less<id<FBCollectionViewSectionDataSource> >, std::__1::allocator<std::__1::pair<const id<FBCollectionViewSectionDataSource>, FBCollectionViewDelegateRespondsToCache> > >* _dataSourceRespondsTo;
	NSMapTable* _cellToDataSourceIndexPathMap;
	FBCollectionViewAggregatedDataSourceListenerAnnouncer* _announcer;
	BOOL _active;
	id<FBCollectionViewMutating> _collectionViewMutator;

}

@property (nonatomic,copy) NSArray * dataSources;                                                              //@synthesize dataSources=_dataSources - In the implementation block
@property (assign,nonatomic,__weak) id<FBCollectionViewMutating> collectionViewMutator;                        //@synthesize collectionViewMutator=_collectionViewMutator - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                                      //@synthesize active=_active - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBCollectionViewDataSourceDelegateTransitioning> delegate; 
-(void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2 forDataSource:(id)arg3 ;
-(id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2 forDataSource:(id)arg3 ;
-(id)absoluteIndexPathFor:(id)arg1 fromDataSource:(id)arg2 ;
-(id<FBCollectionViewMutating>)collectionViewMutator;
-(id)indexPathsForVisibleItemsInDataSource:(id)arg1 ;
-(void)deleteItemsAtIndexPaths:(id)arg1 forDataSource:(id)arg2 ;
-(id)rootCollectionView;
-(void)registerClassWithReuseIdentifier;
-(void)setCollectionViewMutator:(id<FBCollectionViewMutating>)arg1 ;
-(void)_clearDataSource:(id)arg1 ;
-(void)_prepDataSource:(id)arg1 ;
-(void)_announceRootCollectionViewChange;
-(long long)_startSectionIndexForSection:(long long)arg1 collectionView:(id)arg2 dataSource:(id*)arg3 ;
-(id)_translateIndexPath:(id)arg1 fromCollectionView:(id)arg2 dataSource:(id*)arg3 ;
-(id)_translateIndexPath:(id)arg1 fromDataSource:(id)arg2 forCollectionView:(id)arg3 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 forDataSource:(id)arg2 ;
-(id)_translatedIndexPaths:(id)arg1 inDataSource:(id)arg2 ;
-(void)insertItemsAtIndexPaths:(id)arg1 forDataSource:(id)arg2 ;
-(void)reloadItemsAtIndexPaths:(id)arg1 forDataSource:(id)arg2 ;
-(void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 forDataSource:(id)arg3 ;
-(void)performBatchUpdates:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 forDataSource:(id)arg3 ;
-(id)cellForItemAtIndexPath:(id)arg1 forDataSource:(id)arg2 ;
-(id)firstDataSourceForIndexPath:(id)arg1 translatedIndexPath:(id*)arg2 ;
-(void)insertSections:(id)arg1 forDataSource:(id)arg2 ;
-(void)deleteSections:(id)arg1 forDataSource:(id)arg2 ;
-(void)reloadSections:(id)arg1 forDataSource:(id)arg2 ;
-(id)dataSourceForIndexPath:(id)arg1 translatedIndexPath:(id*)arg2 ;
-(id)_translatedSections:(id)arg1 inDataSource:(id)arg2 ;
-(unsigned long long)_sectionIndexForSection:(unsigned long long)arg1 inDataSource:(id)arg2 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(BOOL)isActive;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)setActive:(BOOL)arg1 ;
-(void)setDataSources:(NSArray *)arg1 ;
-(id)initWithDataSources:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(NSArray *)dataSources;
@end

