/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKComponentController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class FBHScrollComponentCollectionViewLayout, NSMapTable, NSNumber, NSString;

@interface FBHScrollComponentController : CKComponentController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	FBHScrollComponentCollectionViewLayout* _layout;
	shared_ptr<const std::__1::vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > >* _mountedChildren;
	unordered_map<UICollectionViewCell *, FBHScrollMountInfo, FB::HashFunctor<NSObject *>, std::__1::equal_to<UICollectionViewCell *>, std::__1::allocator<std::__1::pair<UICollectionViewCell *const, FBHScrollMountInfo> > >* _cellToMountInfo;
	unordered_map<id, UICollectionViewCell *, FB::HashFunctor<NSObject *>, std::__1::equal_to<id>, std::__1::allocator<std::__1::pair<const id, UICollectionViewCell *> > >* _scopeFrameTokenToCell;
	FBHScrollOffsetState _offsetState;
	FBImpressionContentOffsetTrigger _impressionTrigger;
	NSMapTable* _fullyVisibleComponents;
	NSNumber* _mostRecentlyFullyVisibleComponentIndex;
	double _spacing;
	unsigned long long _alignItems;
	unsigned long long _snapBehavior;
	SEL _endDraggingScrollViewAction;
	BOOL _scrollViewHasBeenDragged;
	BOOL _scrollToPreviewInProgress;
	BOOL _isMounted;
	BOOL _isScrolling;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didUpdateComponent;
-(void)didMount;
-(void)willUnmount;
-(void)componentDidAcquireView;
-(void)componentWillRelinquishView;
-(void)willRemount;
-(void)didRemount;
-(id)scopeFrameTokenOfCell:(id)arg1 ;
-(void)scrollToComponentAtIndex:(unsigned long long)arg1 withDelay:(BOOL)arg2 animated:(BOOL)arg3 ;
-(BOOL)scrollInDirection:(unsigned long long)arg1 withDelay:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)scrollToPreviewNextComponentWithDelay:(double)arg1 andBackWithDelay:(double)arg2 ;
-(void)scheduleLogImpressionsDueToUpdate;
-(void)updateChildMountState;
-(void)restoreOffset;
-(void)saveOffset;
-(void)logImpressions;
-(void)mountLayout:(const CKComponentLayout*)arg1 onCell:(id)arg2 ;
-(void)scrollToPreviewNextComponent;
-(void)scrollBackFromNextComponentPreview;
-(void)updateAndNotifyIsScrolling:(BOOL)arg1 ;
-(id)scopeFrameTokenOfLeftmostVisibleComponent;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
@end

