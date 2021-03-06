/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIView, FBFourRoundedCornerView, UILabel, UIImageView;

@interface FBPaymentsSettingsCell : UITableViewCell {

	UIView* _lineSeparator;
	FBFourRoundedCornerView* roundedCornerView;
	UILabel* _mainLabel;
	UIImageView* _mainImageView;
	unsigned long long _displayLayoutMode;

}

@property (nonatomic,readonly) UILabel * mainLabel;                             //@synthesize mainLabel=_mainLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * mainImageView;                     //@synthesize mainImageView=_mainImageView - In the implementation block
@property (assign,nonatomic) unsigned long long displayLayoutMode;              //@synthesize displayLayoutMode=_displayLayoutMode - In the implementation block
-(UIImageView *)mainImageView;
-(void)_updateBackgroundColorForHighlighted:(BOOL)arg1 ;
-(unsigned long long)displayLayoutMode;
-(void)setDisplayLayoutMode:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UILabel *)mainLabel;
@end

