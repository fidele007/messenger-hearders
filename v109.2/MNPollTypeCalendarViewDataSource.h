/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol MNPollTypeCalendarViewDataSourceDelegate;
@class UICollectionView, NSMutableSet, NSCalendar, NSDate, NSMutableArray, NSMapTable, NSString;

@interface MNPollTypeCalendarViewDataSource : NSObject <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource> {

	UICollectionView* _collectionView;
	NSMutableSet* _selectedDates;
	NSCalendar* _calendar;
	NSDate* _toDate;
	NSMutableArray* _rangeViews;
	NSMapTable* _headerControllerMap;
	id<MNPollTypeCalendarViewDataSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNPollTypeCalendarViewDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_calendarHeaderViewControllerForIndexPath:(id)arg1 inCollectionView:(id)arg2 ;
-(id)initWithMinimumDate:(id)arg1 collectionView:(id)arg2 ;
-(id)_dateForIndexPath:(id)arg1 ;
-(void)_scrollToDate:(id)arg1 withScope:(long long)arg2 animated:(BOOL)arg3 ;
-(unsigned long long)_cellStyleForDate:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_indexPathForDate:(id)arg1 ;
-(void)_scrollToHeaderOfSection:(unsigned long long)arg1 ;
-(void)setDelegate:(id<MNPollTypeCalendarViewDataSourceDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<MNPollTypeCalendarViewDataSourceDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
@end

