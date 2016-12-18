/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, UIFont, CAAnimation;

@interface MNNuxTraits : FBValueObject <NSCopying> {

	BOOL _showCloseButton;
	UIColor* _backgroundColor;
	UIFont* _font;
	CAAnimation* _iconAnimation;

}

@property (nonatomic,copy,readonly) UIColor * backgroundColor;                //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy,readonly) UIFont * font;                            //@synthesize font=_font - In the implementation block
@property (nonatomic,copy,readonly) CAAnimation * iconAnimation;              //@synthesize iconAnimation=_iconAnimation - In the implementation block
@property (nonatomic,readonly) BOOL showCloseButton;                          //@synthesize showCloseButton=_showCloseButton - In the implementation block
-(id)initWithBackgroundColor:(id)arg1 font:(id)arg2 iconAnimation:(id)arg3 showCloseButton:(BOOL)arg4 ;
-(CAAnimation *)iconAnimation;
-(BOOL)showCloseButton;
-(UIColor *)backgroundColor;
-(UIFont *)font;
@end

