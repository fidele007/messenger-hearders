/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIImage;

@interface MNLoginViewConfiguration : FBValueObject <NSCopying> {

	BOOL _showRegisterButton;
	BOOL _showForgotPasswordButton;
	/*^block*/id _titleGenerator;
	NSString* _loginFieldPlaceholderText;
	UIImage* _logoImage;

}

@property (nonatomic,readonly) id titleGenerator;                                      //@synthesize titleGenerator=_titleGenerator - In the implementation block
@property (nonatomic,copy,readonly) NSString * loginFieldPlaceholderText;              //@synthesize loginFieldPlaceholderText=_loginFieldPlaceholderText - In the implementation block
@property (nonatomic,copy,readonly) UIImage * logoImage;                               //@synthesize logoImage=_logoImage - In the implementation block
@property (nonatomic,readonly) BOOL showRegisterButton;                                //@synthesize showRegisterButton=_showRegisterButton - In the implementation block
@property (nonatomic,readonly) BOOL showForgotPasswordButton;                          //@synthesize showForgotPasswordButton=_showForgotPasswordButton - In the implementation block
-(id)initWithTitleGenerator:(/*^block*/id)arg1 loginFieldPlaceholderText:(id)arg2 logoImage:(id)arg3 showRegisterButton:(BOOL)arg4 showForgotPasswordButton:(BOOL)arg5 ;
-(id)titleGenerator;
-(BOOL)showRegisterButton;
-(BOOL)showForgotPasswordButton;
-(NSString *)loginFieldPlaceholderText;
-(UIImage *)logoImage;
@end

