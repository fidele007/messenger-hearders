/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor;

@interface MNComposerPopoverOverflowItemModel : FBValueObject <NSCopying> {

	NSString* _title;
	NSString* _extensionIdentifier;
	long long _iconRenderingMode;
	UIColor* _iconColor;

}

@property (nonatomic,copy,readonly) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * extensionIdentifier;              //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
@property (nonatomic,readonly) long long iconRenderingMode;                      //@synthesize iconRenderingMode=_iconRenderingMode - In the implementation block
@property (nonatomic,copy,readonly) UIColor * iconColor;                         //@synthesize iconColor=_iconColor - In the implementation block
-(long long)iconRenderingMode;
-(id)initWithTitle:(id)arg1 extensionIdentifier:(id)arg2 iconRenderingMode:(long long)arg3 iconColor:(id)arg4 ;
-(UIColor *)iconColor;
-(NSString *)extensionIdentifier;
-(NSString *)title;
@end
