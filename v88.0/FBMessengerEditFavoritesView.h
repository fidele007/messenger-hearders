/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FBMessengerEditFavoritesViewDelegate;
@class UITableView, FBMessengerChatBarEditFavoritesSearchView;

@interface FBMessengerEditFavoritesView : UIView {

	int _style;
	UITableView* _tableView;
	FBMessengerChatBarEditFavoritesSearchView* _searchView;
	id<FBMessengerEditFavoritesViewDelegate> _delegate;

}

@property (nonatomic,retain) UITableView * tableView;                                               //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) FBMessengerChatBarEditFavoritesSearchView * searchView;                //@synthesize searchView=_searchView - In the implementation block
@property (assign,nonatomic) int style;                                                             //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<FBMessengerEditFavoritesViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<FBMessengerEditFavoritesViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBMessengerEditFavoritesViewDelegate>)delegate;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(FBMessengerChatBarEditFavoritesSearchView *)searchView;
-(void)setSearchView:(FBMessengerChatBarEditFavoritesSearchView *)arg1 ;
-(void)_donePressed:(id)arg1 ;
@end

