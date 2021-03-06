/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:03 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
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

