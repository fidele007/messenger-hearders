/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewDataSource.h>

@protocol MNComposerOverflowTabDataSourceDelegate;
@class FBImageDownloader, NSArray, UIColor, NSString;

@interface MNComposerOverflowTabDataSource : NSObject <UICollectionViewDataSource> {

	FBImageDownloader* _imageDownloader;
	BOOL _shouldIgnoreInstall;
	NSArray* _tabRows;
	id<MNComposerOverflowTabDataSourceDelegate> _delegate;
	UIColor* _tintColor;

}

@property (assign,nonatomic,__weak) id<MNComposerOverflowTabDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) UIColor * tintColor;                                                        //@synthesize tintColor=_tintColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)registerCellClassesForCollectionView:(id)arg1 ;
-(void)_updateCollectionView:(id)arg1 withTabRows:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_collectionView:(id)arg1 cellForTabRow:(id)arg2 atIndexPath:(id)arg3 ;
-(id)_collectionView:(id)arg1 cellForSingleItemRow:(id)arg2 showSeparator:(BOOL)arg3 showPreviewContent:(BOOL)arg4 atIndexPath:(id)arg5 ;
-(id)_collectionView:(id)arg1 cellForHeaderRow:(id)arg2 atIndexPath:(id)arg3 ;
-(void)_collectionView:(id)arg1 performBatchUpdates:(/*^block*/id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithImageDownloader:(id)arg1 shouldIgnoreInstall:(BOOL)arg2 ;
-(void)updateCollectionView:(id)arg1 withTabRows:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)tabRowAtIndexPath:(id)arg1 ;
-(void)setDelegate:(id<MNComposerOverflowTabDataSourceDelegate>)arg1 ;
-(id<MNComposerOverflowTabDataSourceDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
@end

