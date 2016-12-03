/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBContainerViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Messenger/MNPhotosDataSourceUpdateListener.h>
#import <Messenger/MNMontagePermissionsViewDelegate.h>
#import <Messenger/MNMontageAlbumListViewControllerDelegate.h>
#import <Messenger/MNMontageMediaPickerViewDelegate.h>
#import <Messenger/MNCollectionViewUpdaterDelegate.h>
#import <Messenger/FBInteractiveScrollViewControlling.h>
#import <Messenger/MNListViewContaining.h>

@protocol FBInteractiveScrollViewControllerDelegate, MNMontageMediaPickerViewControllerDelegate;
@class PHFetchResult, MNCollectionViewUpdater, MNMontageMediaPickerHeader, FBLazyCreator, MNScrollViewScrollingListenerAnnouncer, _MNMontageAssetLoadingState, PHAssetCollection, MNMontageMediaPickerListenerAnnouncer, NSString;

@interface MNMontageMediaPickerViewController : FBContainerViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UIScrollViewDelegate, MNPhotosDataSourceUpdateListener, MNMontagePermissionsViewDelegate, MNMontageAlbumListViewControllerDelegate, MNMontageMediaPickerViewDelegate, MNCollectionViewUpdaterDelegate, FBInteractiveScrollViewControlling, MNListViewContaining> {

	PHFetchResult* _fetchResult;
	MNCollectionViewUpdater* _collectionViewUpdater;
	BOOL _needsUpdate;
	MNMontageMediaPickerHeader* _externalHeader;
	FBLazyCreator* _mediaPickerViewCreator;
	FBLazyCreator* _permissionsViewCreator;
	MNScrollViewScrollingListenerAnnouncer* _scrollingAnnouncer;
	_MNMontageAssetLoadingState* _assetLoadingState;
	FBLazyCreator* _photosDataSourceCreator;
	PHAssetCollection* _currentAlbum;
	MNMontageMediaPickerListenerAnnouncer* _announcer;
	BOOL _isVisible;
	id<FBInteractiveScrollViewControllerDelegate> _scrollDelegate;
	id<MNMontageMediaPickerViewControllerDelegate> _delegate;
	long long _selectionStyle;

}

@property (assign,nonatomic) BOOL isVisible;                                                                   //@synthesize isVisible=_isVisible - In the implementation block
@property (assign,nonatomic,__weak) id<MNMontageMediaPickerViewControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long selectionStyle;                                                       //@synthesize selectionStyle=_selectionStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBInteractiveScrollViewControllerDelegate> scrollDelegate;              //@synthesize scrollDelegate=_scrollDelegate - In the implementation block
-(void)addListViewScrollingListener:(id)arg1 ;
-(void)removeListViewScrollingListener:(id)arg1 ;
-(id)containedListView;
-(void)collectionViewUpdater:(id)arg1 willUpdateWithCollectionViewData:(id)arg2 ;
-(void)collectionViewUpdater:(id)arg1 didUpdateWithCollectionViewData:(id)arg2 ;
-(void)collectionViewUpdater:(id)arg1 willApplyCollectionViewUpdates:(id)arg2 ;
-(id)initWithExternalHeader:(id)arg1 allowsMultipleSelection:(BOOL)arg2 allowsVideo:(BOOL)arg3 ;
-(BOOL)_viewHasValidSize;
-(void)photosDataSourceDidUpdateWithChangeInstance:(id)arg1 ;
-(void)photosDataSourceDidFinishLoadingDefaultAlbum;
-(BOOL)_canUpdate;
-(void)_showMaxAssetsSelectedAlertView;
-(BOOL)_isAuthorized;
-(void)montagePermissisonsViewDidRequestPermissions:(id)arg1 ;
-(CGRect)rectForImageWithIdentifier:(id)arg1 ;
-(void)montageAlbumListViewController:(id)arg1 didSelectCollection:(id)arg2 ;
-(void)montageMediaPickerViewDidShowAblumListView:(BOOL)arg1 ;
-(void)montageMediaPickerViewDidTapSelectionButton:(id)arg1 ;
-(id)_createMediaPickerWithHeaderEnabled:(BOOL)arg1 allowsMultipleSelection:(BOOL)arg2 ;
-(void)_setNeedsUpdateCollectionView;
-(void)_updateCollectionViewIfNeeded;
-(void)setIsVisible:(BOOL)arg1 ;
-(void)_setAssetLoadingState:(id)arg1 ;
-(void)_updatePickerViewAndHeaderAppearanceWith:(long long)arg1 ;
-(void)_setCurrentAlbum:(id)arg1 ;
-(void)_deselectAllSelectedItems;
-(void)_updateVisibleCellSelectionStyle:(long long)arg1 ;
-(id)_mediaPickerHeader;
-(void)_startLoadingDefaultAlbumIfNeeded;
-(BOOL)_isLoadingAsset:(id)arg1 ;
-(void)_selectedIndexPathsDidUpdate;
-(void)_updateCellLoadingStateForAsset:(id)arg1 ;
-(void)_showPhotoOrVideoLoadErrorAlert;
-(BOOL)_isDownloadingAsset:(id)arg1 ;
-(void)_cancelAssetLoadingFor:(id)arg1 ;
-(id)_indexPathForAsset:(id)arg1 ;
-(void)_updateHeaderTitle;
-(void)setContentInset:(UIEdgeInsets)arg1 expanding:(BOOL)arg2 ;
-(void)setDelegate:(id<MNMontageMediaPickerViewControllerDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(id<MNMontageMediaPickerViewControllerDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)reset;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)_updateView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)isVisible;
-(void)setSelectionStyle:(long long)arg1 ;
-(long long)selectionStyle;
-(id<FBInteractiveScrollViewControllerDelegate>)scrollDelegate;
-(void)setScrollDelegate:(id<FBInteractiveScrollViewControllerDelegate>)arg1 ;
-(void)scrollToTopAnimated:(BOOL)arg1 ;
-(id)selectedAssets;
-(id)_assetAtIndexPath:(id)arg1 ;
-(void)_updateCollectionView;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
