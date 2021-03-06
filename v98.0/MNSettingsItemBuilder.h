/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSAttributedString, UIImage, UIColor;

@interface MNSettingsItemBuilder : NSObject {

	NSString* _title;
	NSString* _subtitle;
	NSAttributedString* _attributedSubtitle;
	UIImage* _icon;
	long long _identifier;
	NSString* _accessibilityIdentifier;
	BOOL _isOn;
	BOOL _enabled;
	UIColor* _badgeColor;
	unsigned long long _settingsItemType;
	long long _settingsItemActionType;

}
+(id)settingsItemFromExistingSettingsItem:(id)arg1 ;
+(id)settingsItem;
-(id)withSubtitle:(id)arg1 ;
-(id)withIdentifier:(long long)arg1 ;
-(id)withIcon:(id)arg1 ;
-(id)withAttributedSubtitle:(id)arg1 ;
-(id)withAccessibilityIdentifier:(id)arg1 ;
-(id)withIsOn:(BOOL)arg1 ;
-(id)withEnabled:(BOOL)arg1 ;
-(id)withBadgeColor:(id)arg1 ;
-(id)withSettingsItemType:(unsigned long long)arg1 ;
-(id)withSettingsItemActionType:(long long)arg1 ;
-(id)withTitle:(id)arg1 ;
-(id)build;
@end

