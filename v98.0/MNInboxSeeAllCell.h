/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, MNThreadCellLayout;

@interface MNInboxSeeAllCell : UITableViewCell {

	UILabel* _seeAllLabel;
	MNThreadCellLayout* _threadCellLayout;
	unsigned long long _numberOfAllItems;

}

@property (nonatomic,retain) MNThreadCellLayout * threadCellLayout;              //@synthesize threadCellLayout=_threadCellLayout - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfAllItems;                //@synthesize numberOfAllItems=_numberOfAllItems - In the implementation block
-(MNThreadCellLayout *)threadCellLayout;
-(void)setThreadCellLayout:(MNThreadCellLayout *)arg1 ;
-(void)setNumberOfAllItems:(unsigned long long)arg1 ;
-(unsigned long long)numberOfAllItems;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
@end
