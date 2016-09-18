/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNFormHeaderViewDelegate.h>

@protocol MNGroupMergeViewDelegate;
@class UIView, UIButton, MNButton, UILabel, MNPhoneVerificationHeaderView, UITableView, NSString;

@interface MNGroupMergeView : UIView <MNFormHeaderViewDelegate> {

	UIView* _footerView;
	UIButton* _skipButton;
	MNButton* _okButton;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	MNPhoneVerificationHeaderView* _headerView;
	UIView* _tableTopSeparator;
	UIView* _tableBottomSeparator;
	unsigned long long _threadCount;
	UITableView* _tableView;
	id<MNGroupMergeViewDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long threadCount;                            //@synthesize threadCount=_threadCount - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                                 //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) MNButton * okButton;                                     //@synthesize okButton=_okButton - In the implementation block
@property (assign,nonatomic,__weak) id<MNGroupMergeViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)formHeaderViewHideKeyboardButtonTapped:(id)arg1 ;
-(void)_updateHeaderLabels;
-(void)_setupWithFrame:(CGRect)arg1 ;
-(void)_skipThisStepPressed:(id)arg1 ;
-(void)_okPressed:(id)arg1 ;
-(void)setThreadCount:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNGroupMergeViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNGroupMergeViewDelegate>)delegate;
-(UITableView *)tableView;
-(MNButton *)okButton;
-(unsigned long long)threadCount;
@end

