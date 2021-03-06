/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol UILayoutSupport;
@class UIView;

@interface FBPaymentsCartView : UIView {

	UIView* _contentView;
	UIView* _searchBarView;
	UIView* _cartItemsCollectionView;
	UIView* _actionButtonView;
	UIView* _invoiceSummaryView;
	UIView* _searchBarViewButtomSeparatorView;
	UIView* _cartItemsCollectionViewBottomSeparatorView;
	UIView* _invoiceSummaryButtomSeparatorView;
	id<UILayoutSupport> _topLayoutGuide;

}

@property (nonatomic,retain) id<UILayoutSupport> topLayoutGuide;              //@synthesize topLayoutGuide=_topLayoutGuide - In the implementation block
-(void)_updateViewsLayout;
-(id)_viewsLayout;
-(id)initWithSearchBarView:(id)arg1 cartItemsCollectionView:(id)arg2 invoiceSummaryView:(id)arg3 actionButtonView:(id)arg4 ;
-(void)layoutSubviews;
-(id<UILayoutSupport>)topLayoutGuide;
-(void)setTopLayoutGuide:(id<UILayoutSupport>)arg1 ;
@end

