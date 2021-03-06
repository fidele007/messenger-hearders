/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:48 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol MNReactivationPhoneConfirmationOptionsViewDelegate;
@class MNHeaderView, UIView, UITableView, UITableViewCell, NSString;

@interface MNReactivationPhoneConfirmationOptionsView : UIView <UITableViewDataSource, UITableViewDelegate> {

	MNHeaderView* _headerTextView;
	UIView* _headerLineView;
	UIView* _headerContainerView;
	UITableView* _tableView;
	UITableViewCell* _sizingCell;
	id<MNReactivationPhoneConfirmationOptionsViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNReactivationPhoneConfirmationOptionsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPhoneInfo:(id)arg1 ;
-(id)_cellWithTableView:(id)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNReactivationPhoneConfirmationOptionsViewDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<MNReactivationPhoneConfirmationOptionsViewDelegate>)delegate;
@end

