/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNTableViewCell.h>

@class UITextField, UIActivityIndicatorView;

@interface MNEditUsernameTableViewCell : MNTableViewCell {

	UITextField* _textField;
	UIActivityIndicatorView* _activityIndicatorView;

}

@property (nonatomic,readonly) UITextField * textField;                                      //@synthesize textField=_textField - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * activityIndicatorView;              //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
-(id)initWithCellStyle:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)layoutSubviews;
-(UITextField *)textField;
-(UIActivityIndicatorView *)activityIndicatorView;
@end
