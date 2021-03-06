/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:32 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, NSString, UIColor;

@interface MNGroupsCreateNewGroupNullStateItemViewModel : FBValueObject <NSCopying> {

	UIImage* _image;
	NSString* _title;
	NSString* _subtitle;
	NSString* _ctaTitle;
	UIColor* _ctaBackgroundColor;

}

@property (nonatomic,copy,readonly) UIImage * image;                           //@synthesize image=_image - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                       //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * ctaTitle;                       //@synthesize ctaTitle=_ctaTitle - In the implementation block
@property (nonatomic,copy,readonly) UIColor * ctaBackgroundColor;              //@synthesize ctaBackgroundColor=_ctaBackgroundColor - In the implementation block
-(id)initWithImage:(id)arg1 title:(id)arg2 subtitle:(id)arg3 ctaTitle:(id)arg4 ctaBackgroundColor:(id)arg5 ;
-(NSString *)ctaTitle;
-(UIColor *)ctaBackgroundColor;
-(NSString *)title;
-(UIImage *)image;
-(NSString *)subtitle;
@end

