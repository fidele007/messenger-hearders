/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class FBProfServicesBookingDataModel, UILabel;

@interface MNBookingRequestsOverviewCell : UITableViewCell {

	FBProfServicesBookingDataModel* _viewModel;
	UILabel* _dateLabel;
	UILabel* _monthLabel;
	UILabel* _titleLabel;
	UILabel* _subTitleLabel;
	UILabel* _statusLabel;

}
-(void)configureWithViewModel:(id)arg1 cellType:(unsigned long long)arg2 ;
-(void)_configLabelsWithViewModel:(id)arg1 cellType:(unsigned long long)arg2 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end
