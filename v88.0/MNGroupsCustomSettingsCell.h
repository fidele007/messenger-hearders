/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol MNGroupsCustomSettingsCellDelegate;
@class MNTableViewCellStyle, UISwitch;

@interface MNGroupsCustomSettingsCell : UITableViewCell {

	MNTableViewCellStyle* _cellStyle;
	UISwitch* _settingsSwitch;
	id<MNGroupsCustomSettingsCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNGroupsCustomSettingsCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didToggleSwitch:(id)arg1 ;
-(void)setSettingsToggleState:(BOOL)arg1 ;
-(void)setDelegate:(id<MNGroupsCustomSettingsCellDelegate>)arg1 ;
-(id)initWithStyle:(id)arg1 reuseIdentifier:(id)arg2 ;
-(id<MNGroupsCustomSettingsCellDelegate>)delegate;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

