/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBProvider, MNMontageArtPickerSectionViewControllerDelegate;
@class MNMontageArtPickerDataProvider, UICollectionView, MNCollectionViewUpdater, MNMontageArtPickerSectionViewModel, NSString, MNMediaFilterDescriptor;

@interface MNMontageArtPickerSectionViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, FBClassProvidable> {

	id<FBProvider> _artPickerStickerCellProvider;
	id<FBProvider> _artPickerCompositionCellProvider;
	id<FBProvider> _artPickerFilterDescriptorCellProvider;
	MNMontageArtPickerDataProvider* _dataProvider;
	UICollectionView* _collectionView;
	MNCollectionViewUpdater* _collectionViewUpdater;
	BOOL _isFetchingMore;
	MNMontageArtPickerSectionViewModel* _viewModel;
	id<MNMontageArtPickerSectionViewControllerDelegate> _delegate;
	NSString* _searchTerm;
	NSString* _selectedCompositionId;
	MNMediaFilterDescriptor* _selectedFilterDescriptor;

}

@property (nonatomic,retain) MNMontageArtPickerSectionViewModel * viewModel;                                   //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<MNMontageArtPickerSectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * searchTerm;                                                              //@synthesize searchTerm=_searchTerm - In the implementation block
@property (nonatomic,copy) NSString * selectedCompositionId;                                                   //@synthesize selectedCompositionId=_selectedCompositionId - In the implementation block
@property (nonatomic,copy) MNMediaFilterDescriptor * selectedFilterDescriptor;                                 //@synthesize selectedFilterDescriptor=_selectedFilterDescriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_setupCollectionView;
-(id)_sectionUnitAtIndex:(long long)arg1 ;
-(BOOL)_shouldFetchMoreAtItem:(long long)arg1 ;
-(BOOL)_canFetchMore;
-(id)initWithArtPickerStickerCellProvider:(id)arg1 artPickerCompositionCellProvider:(id)arg2 artPickerFilterDescriptorCellProvider:(id)arg3 dataProvider:(id)arg4 ;
-(void)_updateSelectedCompositionOrFilter;
-(void)setSelectedCompositionId:(NSString *)arg1 ;
-(void)setSelectedFilterDescriptor:(MNMediaFilterDescriptor *)arg1 ;
-(void)_fetchNextPage;
-(NSString *)selectedCompositionId;
-(MNMediaFilterDescriptor *)selectedFilterDescriptor;
-(void)_updateViewModelWithSectionUnits:(id)arg1 pageInfo:(id)arg2 ;
-(void)setDelegate:(id<MNMontageArtPickerSectionViewControllerDelegate>)arg1 ;
-(id<MNMontageArtPickerSectionViewControllerDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(void)setSearchTerm:(NSString *)arg1 ;
-(NSString *)searchTerm;
-(MNMontageArtPickerSectionViewModel *)viewModel;
-(void)setViewModel:(MNMontageArtPickerSectionViewModel *)arg1 ;
@end

