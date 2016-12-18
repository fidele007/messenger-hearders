/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UILabel, UISlider, NSString;

@interface MNNetworkLinkConditionerSettingsSliderCell : UITableViewCell {

	UILabel* _label;
	double _value;
	UISlider* _slider;
	NSString* _unit;

}

@property (nonatomic,readonly) UISlider * slider;              //@synthesize slider=_slider - In the implementation block
@property (assign,nonatomic) double value;                     //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSString * unit;                    //@synthesize unit=_unit - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(double)value;
-(void)setValue:(double)arg1 ;
-(UISlider *)slider;
-(NSString *)unit;
-(void)setUnit:(NSString *)arg1 ;
@end

