/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:55 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface FBIOSNewLocationSettingsView : UIView {

	UIButton* _openSettingsButton;
	UILabel* _openSettingsLabel;
	UILabel* _privacyLabel;
	UILabel* _locationServices;
	UILabel* _locationAccess;

}

@property (nonatomic,retain) UIButton * openSettingsButton;              //@synthesize openSettingsButton=_openSettingsButton - In the implementation block
@property (nonatomic,retain) UILabel * openSettingsLabel;                //@synthesize openSettingsLabel=_openSettingsLabel - In the implementation block
@property (nonatomic,retain) UILabel * privacyLabel;                     //@synthesize privacyLabel=_privacyLabel - In the implementation block
@property (nonatomic,retain) UILabel * locationServices;                 //@synthesize locationServices=_locationServices - In the implementation block
@property (nonatomic,retain) UILabel * locationAccess;                   //@synthesize locationAccess=_locationAccess - In the implementation block
-(UIButton *)openSettingsButton;
-(void)setOpenSettingsButton:(UIButton *)arg1 ;
-(UILabel *)openSettingsLabel;
-(void)setOpenSettingsLabel:(UILabel *)arg1 ;
-(UILabel *)privacyLabel;
-(void)setPrivacyLabel:(UILabel *)arg1 ;
-(UILabel *)locationServices;
-(void)setLocationServices:(UILabel *)arg1 ;
-(UILabel *)locationAccess;
-(void)setLocationAccess:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

