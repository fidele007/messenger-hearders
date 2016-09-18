/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIButton.h>

@class NSString, UIImage;

@interface FBPaymentsButton : UIButton {

	NSString* _title;
	UIImage* _image;
	long long _buttonState;

}

@property (assign,nonatomic) long long buttonState;              //@synthesize buttonState=_buttonState - In the implementation block
+(CGSize)sizeWithTitle:(id)arg1 ;
-(void)setButtonState:(long long)arg1 ;
-(long long)buttonState;
-(void)_configButton;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(id)initWithTitle:(id)arg1 ;
@end

