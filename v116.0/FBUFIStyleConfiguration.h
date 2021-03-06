/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:54 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface FBUFIStyleConfiguration : FBValueObject <NSCopying> {

	unsigned long long _buttonLayoutType;
	unsigned long long _commentComposerStyle;
	UIColor* _commentListBackgroundColor;

}

@property (nonatomic,readonly) unsigned long long buttonLayoutType;                    //@synthesize buttonLayoutType=_buttonLayoutType - In the implementation block
@property (nonatomic,readonly) unsigned long long commentComposerStyle;                //@synthesize commentComposerStyle=_commentComposerStyle - In the implementation block
@property (nonatomic,copy,readonly) UIColor * commentListBackgroundColor;              //@synthesize commentListBackgroundColor=_commentListBackgroundColor - In the implementation block
-(unsigned long long)buttonLayoutType;
-(unsigned long long)commentComposerStyle;
-(UIColor *)commentListBackgroundColor;
-(id)initWithButtonLayoutType:(unsigned long long)arg1 commentComposerStyle:(unsigned long long)arg2 commentListBackgroundColor:(id)arg3 ;
@end

