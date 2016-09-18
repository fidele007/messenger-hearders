/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIFont, UIColor, NSURL, UIImage;

@interface FBPickerItem : FBValueObject <NSCopying> {

	BOOL _isSelected;
	BOOL _isSelectable;
	NSString* _title;
	UIFont* _titleFont;
	UIColor* _textColor;
	UIColor* _selectedTextColor;
	UIColor* _backgroundColor;
	NSURL* _imageURL;
	UIImage* _image;
	NSString* _accessibilityLabel;
	NSString* _accessibilityHint;
	id _supplementaryInfo;

}

@property (nonatomic,copy,readonly) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) UIFont * titleFont;                         //@synthesize titleFont=_titleFont - In the implementation block
@property (nonatomic,copy,readonly) UIColor * textColor;                        //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * selectedTextColor;                //@synthesize selectedTextColor=_selectedTextColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * backgroundColor;                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy,readonly) NSURL * imageURL;                           //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy,readonly) UIImage * image;                            //@synthesize image=_image - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessibilityLabel;              //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessibilityHint;               //@synthesize accessibilityHint=_accessibilityHint - In the implementation block
@property (nonatomic,readonly) BOOL isSelected;                                 //@synthesize isSelected=_isSelected - In the implementation block
@property (nonatomic,readonly) BOOL isSelectable;                               //@synthesize isSelectable=_isSelectable - In the implementation block
@property (nonatomic,copy,readonly) id supplementaryInfo;                       //@synthesize supplementaryInfo=_supplementaryInfo - In the implementation block
-(id)supplementaryInfo;
-(id)initWithImageURL:(id)arg1 imageAccessibilitylabel:(id)arg2 ;
-(id)initWithTitle:(id)arg1 font:(id)arg2 textColor:(id)arg3 accessibilityTitle:(id)arg4 isSelected:(BOOL)arg5 isSelectable:(BOOL)arg6 ;
-(id)initWithColor:(id)arg1 accessibilityTitle:(id)arg2 accessibilityHint:(id)arg3 isSelected:(BOOL)arg4 isSelectable:(BOOL)arg5 ;
-(id)initWithImage:(id)arg1 imageAccessibilityLabel:(id)arg2 isSelected:(BOOL)arg3 isSelectable:(BOOL)arg4 ;
-(id)initWithTitle:(id)arg1 font:(id)arg2 textColor:(id)arg3 accessibilityTitle:(id)arg4 isSelected:(BOOL)arg5 isSelectable:(BOOL)arg6 supplementaryInfo:(id)arg7 ;
-(id)initWithTitle:(id)arg1 titleFont:(id)arg2 textColor:(id)arg3 selectedTextColor:(id)arg4 backgroundColor:(id)arg5 imageURL:(id)arg6 image:(id)arg7 accessibilityLabel:(id)arg8 accessibilityHint:(id)arg9 isSelected:(BOOL)arg10 isSelectable:(BOOL)arg11 supplementaryInfo:(id)arg12 ;
-(UIColor *)backgroundColor;
-(NSString *)title;
-(UIImage *)image;
-(NSString *)accessibilityLabel;
-(BOOL)isSelected;
-(UIColor *)textColor;
-(UIColor *)selectedTextColor;
-(NSString *)accessibilityHint;
-(UIFont *)titleFont;
-(BOOL)isSelectable;
-(NSURL *)imageURL;
@end

