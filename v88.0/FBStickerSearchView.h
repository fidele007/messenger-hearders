/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FBStickerSearchViewDelegate;
@class UIButton, FBLoadingIndicatorView, FBStickerSearchErrorView, UISearchBar, UICollectionView, UIColor;

@interface FBStickerSearchView : UIView {

	UIButton* _cancelButton;
	BOOL _showsCancelButton;
	FBLoadingIndicatorView* _loadingView;
	FBStickerSearchErrorView* _errorView;
	BOOL _searchInputEnabled;
	UISearchBar* _searchBar;
	UICollectionView* _collectionView;
	UIColor* _searchViewBackgroundColor;
	id<FBStickerSearchViewDelegate> _delegate;

}

@property (nonatomic,readonly) UISearchBar * searchBar;                                    //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,readonly) UICollectionView * collectionView;                          //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UIColor * searchViewBackgroundColor;                          //@synthesize searchViewBackgroundColor=_searchViewBackgroundColor - In the implementation block
@property (assign,nonatomic,__weak) id<FBStickerSearchViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setSearchViewBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)searchViewBackgroundColor;
-(id)initWithSearchInputEnabled:(BOOL)arg1 ;
-(void)setUserInteractionEnabledInCollectionView:(BOOL)arg1 ;
-(void)showLoadingIndicatorAnimated:(BOOL)arg1 ;
-(void)showErrorViewWithText:(id)arg1 ;
-(void)hideErrorView;
-(void)setVerticalBounceEnabled:(BOOL)arg1 ;
-(void)setDelegate:(id<FBStickerSearchViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<FBStickerSearchViewDelegate>)delegate;
-(UICollectionView *)collectionView;
-(UISearchBar *)searchBar;
-(void)setShowsCancelButton:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)hideLoadingIndicator;
-(void)_cancelButtonTapped;
@end
