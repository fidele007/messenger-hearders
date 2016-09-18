/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBWebRTCScheduleCallViewDelegate;
@class UIView, UITextField, UILabel, UIDatePicker;

@interface FBWebRTCScheduleCallView : UIView {

	UIView* _titleBarContainerView;
	UITextField* _textField;
	UIView* _textFieldBottomSeparator;
	UILabel* _startsLabel;
	UILabel* _timeLabel;
	UIView* _timeFieldBottomSeparator;
	UIView* _contentView;
	UIView* _contentTopSeparator;
	UIView* _titleBarDatePickerDismissOverlay;
	UIView* _contentDatePickerDismissOverlay;
	UIDatePicker* _datePicker;
	UIView* _grayOutOverlayView;
	BOOL _enabled;
	BOOL _datePickerShown;
	id<FBWebRTCScheduleCallViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBWebRTCScheduleCallViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                      //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL datePickerShown;                                              //@synthesize datePickerShown=_datePickerShown - In the implementation block
@property (nonatomic,readonly) UITextField * textField;                                         //@synthesize textField=_textField - In the implementation block
@property (nonatomic,readonly) UILabel * timeLabel;                                             //@synthesize timeLabel=_timeLabel - In the implementation block
-(void)_layoutMainSections;
-(void)_layoutTitleBar;
-(CGRect)_viewPortRect;
-(void)_didChangeTextField:(id)arg1 ;
-(void)_didTapTimeLabel:(id)arg1 ;
-(void)_didChangeDatePicker:(id)arg1 ;
-(void)_didTapDatePickerDismissOverlay:(id)arg1 ;
-(void)setDatePickerShown:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)datePickerShown;
-(void)configureWithContentView:(id)arg1 ;
-(void)setDatePickerShown:(BOOL)arg1 ;
-(BOOL)enabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBWebRTCScheduleCallViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBWebRTCScheduleCallViewDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UITextField *)textField;
-(UILabel *)timeLabel;
@end

