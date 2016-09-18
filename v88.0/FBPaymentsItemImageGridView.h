/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBPaymentsItemImageCollectionViewItemImageCellDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@class UICollectionView, FBPaymentsItemImageCollectionViewLayout, FBImageDownloader, NSArray, NSString;

@interface FBPaymentsItemImageGridView : UIView <FBPaymentsItemImageCollectionViewItemImageCellDelegate, UICollectionViewDataSource> {

	UICollectionView* _imageCollectionView;
	FBPaymentsItemImageCollectionViewLayout* _imageGridLayout;
	FBImageDownloader* _imageDownloader;
	NSArray* _imagesToDisplay;

}

@property (nonatomic,copy) NSArray * imagesToDisplay;               //@synthesize imagesToDisplay=_imagesToDisplay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 imageDownloader:(id)arg2 ;
-(id)imageDownloaderForItemImageCell:(id)arg1 ;
-(void)setImagesToDisplay:(NSArray *)arg1 ;
-(NSArray *)imagesToDisplay;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
@end

