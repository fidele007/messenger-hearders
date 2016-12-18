/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionView.h>
#import <Messenger/MNCollectionViewLayoutListener.h>

@protocol MNCollectionViewAnimationDelegate;
@class NSHashTable, NSMutableArray, NSMutableSet, FBTimeThrottler, NSString;

@interface MNCollectionView : UICollectionView <MNCollectionViewLayoutListener> {

	NSHashTable* _visibleSupplementaryViews;
	NSMutableArray* _updatingItems;
	NSMutableSet* _hiddenPhantomViews;
	long long _contentOffsetIgnoreCounter;
	FBTimeThrottler* _phantomViewRemovalThrottler;
	BOOL _preupdateScrollingEnabled;
	BOOL _allowsRemovalOfPhantomViews;
	BOOL _enforceCorrectZIndexOfViews;
	BOOL _isPerformingBatchUpdate;
	id<MNCollectionViewAnimationDelegate> _animationDelegate;
	/*^block*/id _pendingScrollingUpdate;

}

@property (assign,nonatomic) BOOL isPerformingBatchUpdate;                                                //@synthesize isPerformingBatchUpdate=_isPerformingBatchUpdate - In the implementation block
@property (nonatomic,copy) id pendingScrollingUpdate;                                                     //@synthesize pendingScrollingUpdate=_pendingScrollingUpdate - In the implementation block
@property (assign,nonatomic,__weak) id<MNCollectionViewAnimationDelegate> animationDelegate;              //@synthesize animationDelegate=_animationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 preupdateScrollingEnabled:(BOOL)arg3 allowsRemovalOfPhantomViews:(BOOL)arg4 enforceCorrectZIndexOfViews:(BOOL)arg5 ;
-(void)didEndDisplayingSupplementaryView:(id)arg1 ;
-(void)performBatchUpdates:(/*^block*/id)arg1 scrollingUpdate:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateItemAtIndexPath:(id)arg1 finalIndexPath:(id)arg2 ;
-(void)willBeginDisplayingSupplementaryView:(id)arg1 ;
-(void)reloadDataAndLayoutImmediately;
-(void)_updatePhantomViews;
-(void)_setNeedsPhantomViewRemoval;
-(id)pendingScrollingUpdate;
-(void)setPendingScrollingUpdate:(id)arg1 ;
-(void)_beginBatchUpdates;
-(id)_messagesCollectionViewLayout;
-(void)_didCompleteBatchUpdates;
-(void)_endBatchUpdates;
-(void)setIsPerformingBatchUpdate:(BOOL)arg1 ;
-(void)_performWithoutContentOffsetUpdate:(/*^block*/id)arg1 ;
-(void)_reAddPreviousPhantomViews;
-(void)_removePhantomViews;
-(void)didPrepareLayout;
-(BOOL)isPerformingBatchUpdate;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)reloadData;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(NSString *)description;
-(CGSize)contentSize;
-(void)layoutIfNeeded;
-(void)setAnimationDelegate:(id<MNCollectionViewAnimationDelegate>)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)insertItemsAtIndexPaths:(id)arg1 ;
-(void)deleteItemsAtIndexPaths:(id)arg1 ;
-(void)performBatchUpdates:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)reloadItemsAtIndexPaths:(id)arg1 ;
-(void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(id)supplementaryViewForElementKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id<MNCollectionViewAnimationDelegate>)animationDelegate;
@end

