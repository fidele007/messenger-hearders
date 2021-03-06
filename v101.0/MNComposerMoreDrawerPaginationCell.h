/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <Messenger/MNComposerMoreDrawerGridCellDelegate.h>

@protocol MNComposerMoreDrawerPaginationCellDelegate, FBProvider;
@class UIPageControl, UICollectionView, FBViewStateDebouncer, NSArray, NSString;

@interface MNComposerMoreDrawerPaginationCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource, MNComposerMoreDrawerGridCellDelegate> {

	UIPageControl* _pageControl;
	UICollectionView* _collectionView;
	FBViewStateDebouncer* _reloadDebouncer;
	NSArray* _reorderedTabBarItems;
	id<MNComposerMoreDrawerPaginationCellDelegate> _delegate;
	NSArray* _tabBarItems;
	id<FBProvider> _iconControllerProvider;

}

@property (assign,nonatomic,__weak) id<MNComposerMoreDrawerPaginationCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * tabBarItems;                                                         //@synthesize tabBarItems=_tabBarItems - In the implementation block
@property (nonatomic,retain) id<FBProvider> iconControllerProvider;                                       //@synthesize iconControllerProvider=_iconControllerProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)heightThatFitsWithTabBarItems:(id)arg1 maxWidth:(double)arg2 ;
-(void)composerMoreDrawerGridCellDidEndDisplay:(id)arg1 ;
-(void)_scrollToCurrentPageAnimated:(BOOL)arg1 ;
-(void)_updatePageControlState;
-(id)_tabBarItemAtIndexPath:(id)arg1 ;
-(void)_updateCurrentPageWithScrollView:(id)arg1 ;
-(id<FBProvider>)iconControllerProvider;
-(void)setIconControllerProvider:(id<FBProvider>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNComposerMoreDrawerPaginationCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<MNComposerMoreDrawerPaginationCellDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)prepareForReuse;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)_pageControlValueChanged:(id)arg1 ;
-(void)_reload;
-(void)setTabBarItems:(NSArray *)arg1 ;
-(NSArray *)tabBarItems;
@end

