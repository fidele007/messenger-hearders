/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class FBReportingFlowDetailedResponsesViewHeader, UITableView;

@interface FBReportingFlowDetailedResponsesView : UIView {

	FBReportingFlowDetailedResponsesViewHeader* _tableHeaderView;
	int _presentationStyle;
	UITableView* _detailedResponsesTableView;

}

@property (nonatomic,retain) UITableView * detailedResponsesTableView;              //@synthesize detailedResponsesTableView=_detailedResponsesTableView - In the implementation block
-(void)updateTableViewHeaderLayout;
-(void)setDetailedResponsesTableView:(UITableView *)arg1 ;
-(id)initWithPromptModel:(id)arg1 presentationStyle:(int)arg2 ;
-(UITableView *)detailedResponsesTableView;
-(void)layoutSubviews;
@end
