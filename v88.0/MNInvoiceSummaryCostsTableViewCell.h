/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface MNInvoiceSummaryCostsTableViewCell : UITableViewCell {

	UILabel* _subtotalTitleLabel;
	UILabel* _subtotalPriceLabel;
	UILabel* _shippingTitleLabel;
	UILabel* _shippingPriceLabel;
	UILabel* _totalTitleLabel;
	UILabel* _totalPriceLabel;

}
-(void)configureWithInvoice:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

