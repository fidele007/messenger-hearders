/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIStepper, NSString;

@interface FBSettingsStepperSpecifierTableViewCell : UITableViewCell {

	UILabel* _valueLabel;
	long long _decimalPrecision;
	UIStepper* _stepper;
	NSString* _title;

}

@property (nonatomic,copy) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIStepper * stepper;              //@synthesize stepper=_stepper - In the implementation block
-(void)setStepperValue:(double)arg1 ;
-(void)updateTitleValue;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setMaxValue:(double)arg1 ;
-(void)setMinValue:(double)arg1 ;
-(void)setStepValue:(double)arg1 ;
-(UIStepper *)stepper;
-(void)setStepper:(UIStepper *)arg1 ;
-(void)setCellTitle:(id)arg1 ;
@end

