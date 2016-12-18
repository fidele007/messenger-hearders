/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNPhotoEditingTabControllerDelegate;
@class UICollectionView, NSArray, NSDictionary, NSString;

@interface MNPhotoEditingTabController : NSObject <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, FBClassProvidable> {

	UICollectionView* _tabBarCollectionView;
	NSArray* _tabList;
	NSDictionary* _tabPropertiesByTab;
	long long _selectedTab;
	id<MNPhotoEditingTabControllerDelegate> _delegate;

}

@property (assign,nonatomic) long long selectedTab;                                                //@synthesize selectedTab=_selectedTab - In the implementation block
@property (assign,nonatomic,__weak) id<MNPhotoEditingTabControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)configureWithTabBarCollectionView:(id)arg1 ;
-(void)_deselectMutuallyExclusiveTabs;
-(void)_handleTabSelection:(id)arg1 ;
-(unsigned long long)indexOfTab:(long long)arg1 ;
-(void)_loadCellImages:(id)arg1 tab:(long long)arg2 ;
-(void)_refreshTabBarIcon:(long long)arg1 ;
-(void)setDelegate:(id<MNPhotoEditingTabControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNPhotoEditingTabControllerDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(long long)selectedTab;
-(void)setSelectedTab:(long long)arg1 ;
@end

