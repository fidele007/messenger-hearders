/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:39 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIActivityIndicatorView, UITextField, UISwitch, UILabel;

@interface FBSavedListCreationView : UIView {

	UIView* _containerView;
	UIView* _privacyBackgroundView;
	UIView* _overlay;
	UIActivityIndicatorView* _spinner;
	UIView* _listSeparator;
	UIView* _privacySeparator;
	BOOL _isSaving;
	UITextField* _nameTextField;
	UISwitch* _privateListSwitch;
	UILabel* _privateListLabel;
	UILabel* _privateListDescription;

}

@property (nonatomic,readonly) UITextField * nameTextField;                   //@synthesize nameTextField=_nameTextField - In the implementation block
@property (nonatomic,readonly) UISwitch * privateListSwitch;                  //@synthesize privateListSwitch=_privateListSwitch - In the implementation block
@property (nonatomic,readonly) UILabel * privateListLabel;                    //@synthesize privateListLabel=_privateListLabel - In the implementation block
@property (nonatomic,readonly) UILabel * privateListDescription;              //@synthesize privateListDescription=_privateListDescription - In the implementation block
@property (assign,nonatomic) BOOL isSaving;                                   //@synthesize isSaving=_isSaving - In the implementation block
-(UITextField *)nameTextField;
-(void)setIsSaving:(BOOL)arg1 ;
-(UISwitch *)privateListSwitch;
-(UILabel *)privateListLabel;
-(UILabel *)privateListDescription;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isSaving;
@end

