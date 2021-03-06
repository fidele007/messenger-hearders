/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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

