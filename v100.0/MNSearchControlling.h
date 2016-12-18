/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UISearchBar, UITableView, UIViewController;


@protocol MNSearchControlling <MNScrollViewScrollingListener>
@property (assign,nonatomic,__weak) id<MNSearchControllingDelegate><MNSearchResultUpdating> delegate; 
@property (nonatomic,readonly) UISearchBar * searchBar; 
@property (nonatomic,readonly) UITableView * resultsTableView; 
@property (nonatomic,readonly) BOOL shouldDisplayNullState; 
@property (nonatomic,readonly) UIViewController * searchResultsController; 
@property (assign,nonatomic) BOOL hidesNavigationBarDuringPresentation; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@required
-(void)configureDisplaysSearchBarInNavigationBar;
-(void)configureTableViewHeader:(id)arg1;
-(UITableView *)resultsTableView;
-(BOOL)shouldDisplayNullState;
-(void)setDelegate:(id)arg1;
-(id<MNSearchControllingDelegate><MNSearchResultUpdating>)delegate;
-(BOOL)isActive;
-(UISearchBar *)searchBar;
-(void)setActive:(BOOL)arg1;
-(BOOL)hidesNavigationBarDuringPresentation;
-(UIViewController *)searchResultsController;
-(void)setActive:(BOOL)arg1 animated:(BOOL)arg2;
-(void)setHidesNavigationBarDuringPresentation:(BOOL)arg1;

@end

