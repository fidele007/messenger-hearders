/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:34 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
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

