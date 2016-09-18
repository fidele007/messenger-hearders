/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class MNButton;

@interface MNAuthenticationOptionsButtonsContainerView : UIView {

	MNButton* _loginWithFacebookButton;
	MNButton* _notOnFacebookButton;

}

@property (nonatomic,readonly) MNButton * loginWithFacebookButton;              //@synthesize loginWithFacebookButton=_loginWithFacebookButton - In the implementation block
@property (nonatomic,readonly) MNButton * notOnFacebookButton;                  //@synthesize notOnFacebookButton=_notOnFacebookButton - In the implementation block
-(void)_layoutButton:(id)arg1 yOffset:(double)arg2 ;
-(MNButton *)loginWithFacebookButton;
-(MNButton *)notOnFacebookButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

