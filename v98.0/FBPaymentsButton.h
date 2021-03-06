/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
-(void)_configButton;
-(long long)buttonState;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(id)initWithTitle:(id)arg1 ;
@end

