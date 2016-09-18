/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class MNGetQuoteViewModel, UILabel, NSMutableArray, MNGetQuoteAddressHandler;

@interface MNGetQuoteDetailsView : UIView {

	MNGetQuoteViewModel* _viewModel;
	UILabel* _titleLabel;
	UILabel* _nameTitleLabel;
	UILabel* _nameLabel;
	UILabel* _phoneNumberTitleLabel;
	UILabel* _phoneNumberLabel;
	UILabel* _emailAddressTitleLabel;
	UILabel* _emailAddressLabel;
	UILabel* _streetAddressTitleLabel;
	UILabel* _streetAddressLabel;
	NSMutableArray* _questionLabels;
	NSMutableArray* _answerLabels;
	MNGetQuoteAddressHandler* _addressHandler;

}
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(void)_phoneNumberLabelTapped;
-(void)_emailAddressLabelTapped;
-(void)_streetAddressLabelTapped;
-(id)initWithViewModel:(id)arg1 mapData:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

