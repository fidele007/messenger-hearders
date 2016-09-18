/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class MNBusinessSeparatorView, MNCommerceItemView;

@interface MNCommerceOrderDetailsItemViewCollectionCell : UICollectionViewCell {

	MNBusinessSeparatorView* _separatorView;
	MNCommerceItemView* _itemView;

}

@property (nonatomic,readonly) MNCommerceItemView * itemView;              //@synthesize itemView=_itemView - In the implementation block
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(void)setupWithItemView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(MNCommerceItemView *)itemView;
@end

