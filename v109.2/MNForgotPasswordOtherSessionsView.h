/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:32 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol MNForgotPasswordOtherSessionsViewDelegate;
@class MNStackedContainerView, MNHeaderView, UITableView, NSString;

@interface MNForgotPasswordOtherSessionsView : UIView <UITableViewDataSource, UITableViewDelegate> {

	MNStackedContainerView* _stackedContainerView;
	MNHeaderView* _headerView;
	UITableView* _tableView;
	id<MNForgotPasswordOtherSessionsViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNForgotPasswordOtherSessionsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNForgotPasswordOtherSessionsViewDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<MNForgotPasswordOtherSessionsViewDelegate>)delegate;
@end

