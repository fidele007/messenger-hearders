/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:55 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UISlider, NSString;

@interface FBSettingsSliderSpecifierTableViewCell : UITableViewCell {

	UILabel* _minLabel;
	UILabel* _maxLabel;
	UISlider* _slider;
	NSString* _title;

}

@property (nonatomic,copy) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UISlider * slider;              //@synthesize slider=_slider - In the implementation block
-(void)setSliderValue:(long long)arg1 ;
-(void)updateTitleValue;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setMaxValue:(long long)arg1 ;
-(void)setMinValue:(long long)arg1 ;
-(UISlider *)slider;
-(void)setCellTitle:(id)arg1 ;
@end

