/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBCalendarDateTimePickerViewDelegate;
@class FBCalendarDateContextRow, UICollectionView, UIDatePicker;

@interface FBCalendarDateTimePickerView : UIView {

	BOOL _hideTimePicker;
	BOOL _hasEndTime;
	long long _pickerType;
	FBCalendarDateContextRow* _startDateContextRow;
	FBCalendarDateContextRow* _endDateContextRow;
	UICollectionView* _collectionView;
	UIDatePicker* _timePicker;
	long long _state;
	id<FBCalendarDateTimePickerViewDelegate> _delegate;

}

@property (nonatomic,readonly) long long pickerType;                                                //@synthesize pickerType=_pickerType - In the implementation block
@property (nonatomic,readonly) FBCalendarDateContextRow * startDateContextRow;                      //@synthesize startDateContextRow=_startDateContextRow - In the implementation block
@property (nonatomic,readonly) FBCalendarDateContextRow * endDateContextRow;                        //@synthesize endDateContextRow=_endDateContextRow - In the implementation block
@property (nonatomic,readonly) UICollectionView * collectionView;                                   //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) UIDatePicker * timePicker;                                           //@synthesize timePicker=_timePicker - In the implementation block
@property (assign,nonatomic) long long state;                                                       //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<FBCalendarDateTimePickerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 pickerType:(long long)arg2 hideTimePicker:(BOOL)arg3 hasEndTime:(BOOL)arg4 ;
-(void)setState:(long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(long long)pickerType;
-(FBCalendarDateContextRow *)startDateContextRow;
-(FBCalendarDateContextRow *)endDateContextRow;
-(UIDatePicker *)timePicker;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<FBCalendarDateTimePickerViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBCalendarDateTimePickerViewDelegate>)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(UICollectionView *)collectionView;
@end

