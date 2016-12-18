/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNSyncPersonsDialogListDelegateListener.h>
#import <Messenger/MNSyncPersonsListDisplayer.h>

@protocol MNSyncPersonsDialogListViewListener;
@class UIButton, MNSyncPersonsDialogListDataSource, MNSyncPersonsDialogListDelegate, UITableView, CALayer, UILabel, NSString;

@interface MNSyncPersonsDialogListView : UIView <MNSyncPersonsDialogListDelegateListener, MNSyncPersonsListDisplayer> {

	UIButton* _confirmationButton;
	MNSyncPersonsDialogListDataSource* _dataSource;
	MNSyncPersonsDialogListDelegate* _delegate;
	id<MNSyncPersonsDialogListViewListener> _listener;
	UITableView* _syncPersonsTable;
	CALayer* _titleBottomBorder;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UIButton * confirmationButton;                                        //@synthesize confirmationButton=_confirmationButton - In the implementation block
@property (nonatomic,retain) MNSyncPersonsDialogListDataSource * dataSource;                       //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) MNSyncPersonsDialogListDelegate * delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MNSyncPersonsDialogListViewListener> listener;              //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) UITableView * syncPersonsTable;                                       //@synthesize syncPersonsTable=_syncPersonsTable - In the implementation block
@property (nonatomic,retain) CALayer * titleBottomBorder;                                          //@synthesize titleBottomBorder=_titleBottomBorder - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)displaySyncPersons:(id)arg1 withTitle:(id)arg2 ;
-(id)initWithListener:(id)arg1 peopleCellFactory:(id)arg2 ;
-(void)tappedSyncPerson:(id)arg1 ;
-(void)tappedConfirmationButton:(id)arg1 ;
-(UIButton *)confirmationButton;
-(void)setConfirmationButton:(UIButton *)arg1 ;
-(UITableView *)syncPersonsTable;
-(void)setSyncPersonsTable:(UITableView *)arg1 ;
-(CALayer *)titleBottomBorder;
-(void)setTitleBottomBorder:(CALayer *)arg1 ;
-(void)setDataSource:(MNSyncPersonsDialogListDataSource *)arg1 ;
-(void)setDelegate:(MNSyncPersonsDialogListDelegate *)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(MNSyncPersonsDialogListDataSource *)dataSource;
-(MNSyncPersonsDialogListDelegate *)delegate;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id<MNSyncPersonsDialogListViewListener>)listener;
-(void)setListener:(id<MNSyncPersonsDialogListViewListener>)arg1 ;
@end

