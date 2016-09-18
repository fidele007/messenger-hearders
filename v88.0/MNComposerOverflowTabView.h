/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIView, NSMutableArray, FBListViewScrollManager, UICollectionView;

@interface MNComposerOverflowTabView : UIView {

	UIView* _topSeparatorView;
	NSMutableArray* _scrollStateStack;
	FBListViewScrollManager* _scrollManager;
	UICollectionView* _collectionView;

}

@property (nonatomic,readonly) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
-(void)mn_setTopContentInset:(double)arg1 ;
-(void)_pushScrollState;
-(void)_popScrollState;
-(void)layoutSubviews;
-(UICollectionView *)collectionView;
-(id)initWithCollectionView:(id)arg1 ;
@end

