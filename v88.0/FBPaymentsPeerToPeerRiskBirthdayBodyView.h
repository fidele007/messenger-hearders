/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class FBRichTextView, UITextField, UIDatePicker;

@interface FBPaymentsPeerToPeerRiskBirthdayBodyView : UIView {

	FBRichTextView* _labelView;
	UITextField* _dateTextFieldHidden;
	UIDatePicker* _datePicker;
	FBRichTextView* _dateTextView;

}

@property (nonatomic,readonly) UIDatePicker * datePicker;                  //@synthesize datePicker=_datePicker - In the implementation block
@property (nonatomic,readonly) FBRichTextView * dateTextView;              //@synthesize dateTextView=_dateTextView - In the implementation block
-(FBRichTextView *)dateTextView;
-(void)layoutSubviews;
-(BOOL)resignFirstResponder;
-(id)initWithDate:(id)arg1 ;
-(UIDatePicker *)datePicker;
@end

