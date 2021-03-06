/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol MNContactCardCollectionViewDelegate;
@class UICollectionView, UIButton;

@interface MNContactCardCollectionView : UIView {

	UICollectionView* _collectionView;
	UIButton* _dismissButton;
	id<MNContactCardCollectionViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNContactCardCollectionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didTapDismissButton:(id)arg1 ;
-(void)scrollToItemAtIndexPath:(id)arg1 ;
-(void)mn_setTopContentInset:(double)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNContactCardCollectionViewDelegate>)arg1 ;
-(void)dealloc;
-(id<MNContactCardCollectionViewDelegate>)delegate;
-(id)initWithCollectionView:(id)arg1 ;
@end

