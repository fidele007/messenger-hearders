/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBClassInjectable.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Messenger/MNMessageReactionsDetailHeaderViewDelegate.h>

@class MNMessageReactionsDetailViewControllerInjector, MNMessageReactionsDetailView, MNMessageReactionsDetailViewModel, MNAppMessage, MNThreadViewModel, NSMutableDictionary, NSString;

@interface MNMessageReactionsDetailViewController : UIViewController <FBClassInjectable, UIScrollViewDelegate, MNMessageReactionsDetailHeaderViewDelegate> {

	MNMessageReactionsDetailViewControllerInjector* _injector;
	MNMessageReactionsDetailView* _detailView;
	MNMessageReactionsDetailViewModel* _viewModel;
	MNAppMessage* _message;
	MNThreadViewModel* _threadViewModel;
	NSMutableDictionary* _controllers;
	unsigned long long _currentPageIndex;
	BOOL _viewLayoutInProgress;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(void)setMessage:(id)arg1 inThread:(id)arg2 ;
-(void)messageReactionsDetailHeaderView:(id)arg1 didSelectPageIndex:(unsigned long long)arg2 ;
-(void)_setupListControllers;
-(void)_layoutListViews;
-(void)_scrollToCurrentPageIndex;
-(void)_reloadListControllers;
-(void)_scrollToPage:(unsigned long long)arg1 ;
-(id)_setupListControllerForPageIndex:(unsigned long long)arg1 ;
-(id)_reactionForPageIndex:(unsigned long long)arg1 ;
-(id)_reactionsForPageIndex:(unsigned long long)arg1 ;
-(void)_layoutListView:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)_numberOfTabs;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
@end
