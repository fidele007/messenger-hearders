/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class MNCollectionView;

@interface MNCollectionViewPlaygroundView : UIView {

	MNCollectionView* _collectionView;
	double _topContentInset;

}

@property (nonatomic,readonly) MNCollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) double topContentInset;                           //@synthesize topContentInset=_topContentInset - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(MNCollectionView *)collectionView;
-(void)setTopContentInset:(double)arg1 ;
-(double)topContentInset;
@end

