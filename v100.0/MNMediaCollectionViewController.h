/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Messenger/MNMediaCollectionFetchingDelegate.h>
#import <Messenger/MNMediaCollectionViewCellDelegate.h>
#import <Messenger/MNMediaCollectionViewIconControllerDelegate.h>
#import <Messenger/FBMStickerViewDelegate.h>

@protocol MNViewPreviewingHandling, FBProvider, MNMediaCollectionViewControllerListener, MNMediaCollectionViewControllerDelegate, MNMediaCollectionFetching, FBStickerResourceManager;
@class UICollectionView, NSArray, NSDictionary, MNPhotoViewImageDownloadController, NSIndexPath, UIView, MNMediaCollectionLoadingView, NSMutableDictionary, NSString;

@interface MNMediaCollectionViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, MNMediaCollectionFetchingDelegate, MNMediaCollectionViewCellDelegate, MNMediaCollectionViewIconControllerDelegate, FBMStickerViewDelegate> {

	UICollectionView* _collectionView;
	NSArray* _collection;
	NSDictionary* _stickerSizeByFbId;
	MNPhotoViewImageDownloadController* _photoDownloadController;
	id<MNViewPreviewingHandling> _viewPreviewingHandler;
	BOOL _visible;
	long long _layout;
	id<FBProvider> _iconControllerProvider;
	NSIndexPath* _selectedIndexPath;
	UIView* _nullStateView;
	MNMediaCollectionLoadingView* _loadingView;
	UIView* _decorateView;
	id<MNMediaCollectionViewControllerListener> _listener;
	NSMutableDictionary* _mediaLoadResult;
	double _currentCellAggregatedWidth;
	long long _numberOfCellsInFirstPage;
	BOOL _isFirstPageDismissed;
	BOOL _mediaFetcherUpdated;
	BOOL _showsHorizontalScrollIndicator;
	BOOL _expanded;
	id<MNMediaCollectionViewControllerDelegate> _delegate;
	id<MNMediaCollectionFetching> _mediaFetcher;
	id<FBStickerResourceManager> _stickerResourceManager;

}

@property (assign,nonatomic,__weak) id<MNMediaCollectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<MNMediaCollectionFetching> mediaFetcher;                               //@synthesize mediaFetcher=_mediaFetcher - In the implementation block
@property (nonatomic,retain) id<FBStickerResourceManager> stickerResourceManager;                      //@synthesize stickerResourceManager=_stickerResourceManager - In the implementation block
@property (assign,nonatomic) BOOL expanded;                                                            //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic) long long layout;                                                         //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) UICollectionView * collectionView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_registerForPreviewing;
-(void)scrollToBeginningAnimated:(BOOL)arg1 ;
-(id)initWithMediaFetcher:(id)arg1 photoDownloadController:(id)arg2 viewPreviewingHandler:(id)arg3 layout:(long long)arg4 iconControllerProvider:(id)arg5 nullStateView:(id)arg6 decorateView:(id)arg7 listener:(id)arg8 showsHorizontalScrollIndicator:(BOOL)arg9 ;
-(BOOL)stickerViewShouldAnimate:(id)arg1 ;
-(void)setStickerResourceManager:(id<FBStickerResourceManager>)arg1 ;
-(void)setMediaFetcher:(id<MNMediaCollectionFetching>)arg1 ;
-(void)hideDecorateView;
-(void)showDecorateView;
-(void)loadIndicesOfLoadedContentsWithCallbackQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)mediaCollectionViewCellDidPressSend:(id)arg1 withIndexPath:(id)arg2 ;
-(id<FBStickerResourceManager>)stickerResourceManager;
-(void)_showSubview:(id)arg1 hideOtherSubviews:(BOOL)arg2 ;
-(void)_layoutDecorateView;
-(void)_refetchIfNeeded;
-(void)_deselectSelectedItemIfNeeded;
-(void)_setScrollOffset;
-(void)_setCheckOffset;
-(void)_stopLoading;
-(void)_resetLoadingStateIfNeeded;
-(void)_didLoadMediaAtIndexPath:(id)arg1 appID:(id)arg2 startLoadTime:(double)arg3 numberOfBytes:(unsigned long long)arg4 mediaFetcher:(id)arg5 ;
-(void)_didLoadStickerAtIndexPath:(id)arg1 startLoadTime:(double)arg2 mediaFetcher:(id)arg3 ;
-(void)_selectContentAtIndexPath:(id)arg1 ;
-(void)_deselectSelectedItem;
-(void)_selectedItemDidDeselected;
-(CGSize)_cellSizeForItemAtIndexPath:(id)arg1 ;
-(void)_startFetchIfNecessary;
-(BOOL)_noMediaToShow;
-(BOOL)_isFirstPageLoaded;
-(void)_recordWhenFirstContentIsLoaded;
-(void)_recordIfFirstPageIsLoaded;
-(void)_addMediaLoadResultAtIndexPath:(id)arg1 elapsedTime:(double)arg2 ;
-(void)mediaFetcherDidFetchMediaCollection:(id)arg1 ;
-(void)mediaFetcherDidFail:(id)arg1 ;
-(void)mediaCollectionViewIconController:(id)arg1 didSelectPlatformApplication:(id)arg2 ;
-(id<MNMediaCollectionFetching>)mediaFetcher;
-(void)setDelegate:(id<MNMediaCollectionViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<MNMediaCollectionViewControllerDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(long long)layout;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setLayout:(long long)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)expanded;
-(void)_startLoading;
@end
