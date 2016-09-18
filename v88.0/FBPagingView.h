/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:01 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol FBPagingViewDataSource, FBPagingViewInfiniteDataSource, FBPagingViewDelegate;
@class NSMutableDictionary, NSMutableArray, FBAnimationPerformanceLogger, UIScrollView, UIView, NSString;

@interface FBPagingView : UIView <UIScrollViewDelegate> {

	NSMutableDictionary* _displayedViews;
	int _mode;
	UIEdgeInsets _inset;
	BOOL _needsReload;
	unsigned long long _numberOfPages;
	unsigned long long _startPageIndex;
	CGPoint _decelerationRateEstimate;
	CGPoint _decelerationLastContentOffset;
	CGPoint _decelerateTargetContentOffset;
	BOOL _decelerationSnapRequested;
	struct {
		unsigned pagingViewDelegateRespondsToShouldRecycle : 1;
		unsigned pagingViewDelegateRespondsToDidEndDisplayingView : 1;
		unsigned pagingViewDelegateRespondsToDidFinishReloadData : 1;
		unsigned pagingViewDelegateRespondsToStartScrollNextIndex : 1;
		unsigned pagingViewDelegateRespondsToEndScroll : 1;
		unsigned pagingViewDelegateRespondsToDidScroll : 1;
		unsigned pagingViewDelegateRespondsToDidChangePageIndex : 1;
		unsigned pagingViewDelegateRespondsToDidEndScrollingAnimation : 1;
		unsigned pagingViewDelegateRespondsToWillLayout : 1;
		unsigned pagingViewDelegateRespondsToDidLayout : 1;
		unsigned pagingViewDelegateRespondsToDisposeViewData : 1;
		unsigned inLayout : 1;
	}  _flags;
	NSMutableArray* _recycledViews;
	FBAnimationPerformanceLogger* _animationPerformanceTracker;
	unsigned long long _tileCount;
	unsigned long long _currentPageIndex;
	id<FBPagingViewDataSource> _dataSource;
	id<FBPagingViewInfiniteDataSource> _infiniteDataSource;
	id<FBPagingViewDelegate> _delegate;
	double _pageGapSize;
	double _adjacentPagePadding;
	UIScrollView* _scrollView;

}

@property (nonatomic,readonly) UIScrollView * scrollView;                                               //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) unsigned long long tileCount;                                              //@synthesize tileCount=_tileCount - In the implementation block
@property (assign,nonatomic) unsigned long long currentPageIndex;                                       //@synthesize currentPageIndex=_currentPageIndex - In the implementation block
@property (nonatomic,readonly) BOOL decelerating; 
@property (nonatomic,readonly) CGPoint currentDecelerationRemainingFrameEstimate; 
@property (assign,nonatomic,__weak) id<FBPagingViewDataSource> dataSource;                              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<FBPagingViewInfiniteDataSource> infiniteDataSource;              //@synthesize infiniteDataSource=_infiniteDataSource - In the implementation block
@property (assign,nonatomic,__weak) id<FBPagingViewDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double pageGapSize;                                                        //@synthesize pageGapSize=_pageGapSize - In the implementation block
@property (assign,nonatomic) double adjacentPagePadding;                                                //@synthesize adjacentPagePadding=_adjacentPagePadding - In the implementation block
@property (nonatomic,__weak,readonly) UIView * currentPageView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 mode:(int)arg2 withInset:(UIEdgeInsets)arg3 ;
-(void)setAdjacentPagePadding:(double)arg1 ;
-(void)setPageGapSize:(double)arg1 ;
-(void)setCurrentPageIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(id)dequeueReusableView;
-(id)displayedViews;
-(UIView *)currentPageView;
-(void)setInfiniteDataSource:(id<FBPagingViewInfiniteDataSource>)arg1 ;
-(void)clearDataAndViews;
-(void)startAnimationPerformanceTracker:(id)arg1 ;
-(double)adjacentPagePadding;
-(double)pageGapSize;
-(void)_performReloadData;
-(void)_updateContentOffset:(double)arg1 ;
-(void)_clearViewsAndDisposeData:(BOOL)arg1 ;
-(void)_scrollImmediatelyToCurrentPageIndex:(BOOL)arg1 ;
-(void)_updateVisiblePages;
-(BOOL)decelerating;
-(double)_onePageDistance;
-(void)_calculateDeceleratonDelta;
-(void)_performReloadDataFiniteMode;
-(void)_performReloadDataInfiniteMode;
-(void)_updateFb_coveringSplitViewControllerShouldNotModifyScrollsToTopAndScrollsToTopForAllPages;
-(unsigned long long)_oneSideTileCount;
-(void)_addPagesForIndices:(id)arg1 ;
-(id)_addView:(id)arg1 atIndex:(long long)arg2 ;
-(void)_shiftPagesByDelta:(long long)arg1 ;
-(void)_shiftPagesInInfiniteScroll;
-(void)_recycleView:(id)arg1 ;
-(void)setVerticalScrollEnabled:(BOOL)arg1 ;
-(void)snapFinishDeceleration:(BOOL)arg1 ;
-(CGPoint)currentDecelerationRemainingFrameEstimate;
-(id<FBPagingViewInfiniteDataSource>)infiniteDataSource;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setClipsToBounds:(BOOL)arg1 ;
-(void)setDataSource:(id<FBPagingViewDataSource>)arg1 ;
-(void)setDelegate:(id<FBPagingViewDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<FBPagingViewDataSource>)dataSource;
-(id<FBPagingViewDelegate>)delegate;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(UIScrollView *)scrollView;
-(void)_updateContentSize;
-(void)_didReceiveMemoryWarning:(id)arg1 ;
-(id)_addPageAtIndex:(long long)arg1 ;
-(unsigned long long)currentPageIndex;
-(void)setCurrentPageIndex:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 mode:(int)arg2 ;
-(void)setTileCount:(unsigned long long)arg1 ;
-(unsigned long long)tileCount;
@end

