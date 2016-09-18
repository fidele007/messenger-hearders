/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewCell.h>

@class MNButton;

@interface MNButtonCell : UITableViewCell {

	double _verticalPadding;
	double _horizontalPadding;
	double _buttonHeight;
	MNButton* _button;

}

@property (nonatomic,retain) MNButton * button;              //@synthesize button=_button - In the implementation block
+(CGSize)sizeThatFits:(CGSize)arg1 withButtonHeight:(double)arg2 verticalPadding:(double)arg3 ;
-(id)initWithVerticalPadding:(double)arg1 horizontalPadding:(double)arg2 buttonHeight:(double)arg3 reuseIdentifier:(id)arg4 ;
-(MNButton *)button;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setButton:(MNButton *)arg1 ;
@end

