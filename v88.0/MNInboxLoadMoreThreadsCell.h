/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIImageView, NSString;

@interface MNInboxLoadMoreThreadsCell : UITableViewCell {

	UILabel* _loadMoreThreadLabel;
	UIImageView* _chevronView;
	NSString* _cellTitle;

}

@property (nonatomic,copy) NSString * cellTitle;              //@synthesize cellTitle=_cellTitle - In the implementation block
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSString *)cellTitle;
-(void)setCellTitle:(NSString *)arg1 ;
@end

