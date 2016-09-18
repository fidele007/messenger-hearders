/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol MNPlatformComposerPromotedAppsListViewDelegate;
@class UICollectionView, FBImageDownloader, NSArray, NSString;

@interface MNPlatformComposerPromotedAppsListView : UICollectionViewCell <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	UICollectionView* _collectionView;
	FBImageDownloader* _imageDownloader;
	NSArray* _tabBarItems;
	id<MNPlatformComposerPromotedAppsListViewDelegate> _delegate;

}

@property (nonatomic,copy) NSArray * tabBarItems;                                                             //@synthesize tabBarItems=_tabBarItems - In the implementation block
@property (assign,nonatomic,__weak) id<MNPlatformComposerPromotedAppsListViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)intrinsicHeight;
-(id)initWithImageDownloader:(id)arg1 ;
-(void)setDelegate:(id<MNPlatformComposerPromotedAppsListViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(id<MNPlatformComposerPromotedAppsListViewDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)setTabBarItems:(NSArray *)arg1 ;
-(NSArray *)tabBarItems;
@end

