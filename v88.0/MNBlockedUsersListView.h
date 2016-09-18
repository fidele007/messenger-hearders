/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol UITableViewDelegate, UITableViewDataSource;
@class UITableView, MNLoadingView;

@interface MNBlockedUsersListView : UIView {

	UITableView* _tableView;
	MNLoadingView* _loadingView;
	id<UITableViewDelegate> _tableViewDelegate;
	id<UITableViewDataSource> _tableViewDataSource;

}

@property (assign,nonatomic,__weak) id<UITableViewDelegate> tableViewDelegate;                  //@synthesize tableViewDelegate=_tableViewDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<UITableViewDataSource> tableViewDataSource;              //@synthesize tableViewDataSource=_tableViewDataSource - In the implementation block
-(void)setTableViewDelegate:(id<UITableViewDelegate>)arg1 ;
-(void)setTableViewDataSource:(id<UITableViewDataSource>)arg1 ;
-(void)hideLoader;
-(id<UITableViewDelegate>)tableViewDelegate;
-(id<UITableViewDataSource>)tableViewDataSource;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)reloadData;
-(void)layoutSubviews;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)deleteRowAtIndexPath:(id)arg1 ;
@end

