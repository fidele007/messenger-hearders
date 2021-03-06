/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:54 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNPollTypeTimePickerFooterViewDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Messenger/MNPollTypeTimePickerViewDelegate.h>

@protocol MNPollTypeTimePickerViewDataSourceDelegate;
@class MNPollTypeTimePickerViewCell, NSArray, NSMutableDictionary, NSDate, UICollectionView, NSString;

@interface MNPollTypeTimePickerViewDataSource : NSObject <MNPollTypeTimePickerFooterViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, MNPollTypeTimePickerViewDelegate> {

	MNPollTypeTimePickerViewCell* _selectedTimePickerViewCell;
	NSArray* _initSelectedDates;
	NSMutableDictionary* _timeOptions;
	NSDate* _mostRecentSelectedDate;
	UICollectionView* _collectionView;
	id<MNPollTypeTimePickerViewDataSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNPollTypeTimePickerViewDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pollTypeTimePickerFooterViewDidTapAddTime:(id)arg1 forDate:(id)arg2 ;
-(void)pollTypeTimePickerView:(id)arg1 didUpdateDate:(id)arg2 ;
-(void)pollTypeTimePickerViewDidCancel:(id)arg1 ;
-(id)initWithSelectedDates:(id)arg1 collectionView:(id)arg2 ;
-(id)_keyFromDate:(id)arg1 ;
-(void)pollTypeTimePickerViewCell:(id)arg1 didTapEditTime:(id)arg2 ;
-(void)setDelegate:(id<MNPollTypeTimePickerViewDataSourceDelegate>)arg1 ;
-(void)dealloc;
-(id<MNPollTypeTimePickerViewDataSourceDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
@end

