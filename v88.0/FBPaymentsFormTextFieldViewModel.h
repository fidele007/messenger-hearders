/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIImage, UIFont;

@interface FBPaymentsFormTextFieldViewModel : FBValueObject <NSCopying> {

	NSString* _placeholderString;
	UIImage* _defaultImage;
	UIFont* _maskedLabelFont;
	UIFont* _textFieldFont;

}

@property (nonatomic,copy,readonly) NSString * placeholderString;              //@synthesize placeholderString=_placeholderString - In the implementation block
@property (nonatomic,copy,readonly) UIImage * defaultImage;                    //@synthesize defaultImage=_defaultImage - In the implementation block
@property (nonatomic,copy,readonly) UIFont * maskedLabelFont;                  //@synthesize maskedLabelFont=_maskedLabelFont - In the implementation block
@property (nonatomic,copy,readonly) UIFont * textFieldFont;                    //@synthesize textFieldFont=_textFieldFont - In the implementation block
-(id)initWithPlaceholderString:(id)arg1 defaultImage:(id)arg2 maskedLabelFont:(id)arg3 textFieldFont:(id)arg4 ;
-(UIFont *)maskedLabelFont;
-(NSString *)placeholderString;
-(UIImage *)defaultImage;
-(UIFont *)textFieldFont;
@end

