/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:54 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView, MNLoadingView, UITableView, UISearchBar;

@interface MNSearchAndNearbyPlacesPickerView : UIView {

	UIView* _nearbyPlacesView;
	MNLoadingView* _loadingView;
	UITableView* _searchResultsTableView;
	UISearchBar* _searchBar;
	CGRect _keyboardFrame;

}

@property (nonatomic,retain) UITableView * searchResultsTableView;              //@synthesize searchResultsTableView=_searchResultsTableView - In the implementation block
@property (nonatomic,retain) UISearchBar * searchBar;                           //@synthesize searchBar=_searchBar - In the implementation block
@property (assign,nonatomic) CGRect keyboardFrame;                              //@synthesize keyboardFrame=_keyboardFrame - In the implementation block
-(id)initWithNearbyPlacesView:(id)arg1 ;
-(void)setSearchResultsTableView:(UITableView *)arg1 ;
-(void)mn_setTopContentInset:(double)arg1 ;
-(void)layoutSubviews;
-(UISearchBar *)searchBar;
-(UITableView *)searchResultsTableView;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(void)showSpinner;
-(void)hideSpinner;
-(CGRect)keyboardFrame;
-(void)setKeyboardFrame:(CGRect)arg1 ;
@end

