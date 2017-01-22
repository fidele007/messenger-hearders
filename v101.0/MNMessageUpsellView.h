/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class MNMessageUpsellViewModel, UILabel, UIImageView;

@interface MNMessageUpsellView : UIView {

	MNMessageUpsellViewModel* _upsellViewModel;
	UILabel* _textLabel;
	UIImageView* _iconView;

}
+(CGSize)sizeForUpsellViewModel:(id)arg1 maxWidth:(double)arg2 ;
-(void)setUpsellViewModel:(id)arg1 ;
-(id)tooltipAnchorView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;
@end
