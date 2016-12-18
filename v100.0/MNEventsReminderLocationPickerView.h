/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView, MNLoadingView, UITableView, UITextField;

@interface MNEventsReminderLocationPickerView : UIView {

	UIView* _textFieldLeftView;
	UIView* _lineSeparator;
	MNLoadingView* _loadingView;
	unsigned long long _viewState;
	UITableView* _tableView;
	UITextField* _textField;
	double _topOffset;

}

@property (nonatomic,readonly) UITableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) UITextField * textField;              //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic) double topOffset;                       //@synthesize topOffset=_topOffset - In the implementation block
-(void)setViewState:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UITableView *)tableView;
-(UITextField *)textField;
-(void)setTopOffset:(double)arg1 ;
-(double)topOffset;
@end

