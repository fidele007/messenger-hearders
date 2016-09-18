/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIButton.h>

@class UILabel, UIImageView, NSString;

@interface FBFNNUXShareWithButton : UIButton {

	UILabel* _shareWithLabel;
	UILabel* _sharingOptionLabel;
	UIImageView* _accessoryImageView;
	NSString* _selectedPrivacyOptionLabel;

}

@property (nonatomic,copy) NSString * selectedPrivacyOptionLabel;              //@synthesize selectedPrivacyOptionLabel=_selectedPrivacyOptionLabel - In the implementation block
-(void)_configureAppearance:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 appearanceConfiguration:(id)arg2 ;
-(void)setSelectedPrivacyOptionLabel:(NSString *)arg1 ;
-(NSString *)selectedPrivacyOptionLabel;
-(void)layoutSubviews;
@end
