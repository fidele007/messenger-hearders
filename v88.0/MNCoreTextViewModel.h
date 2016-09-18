/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBStringWithRedactedDescription, UIFontDescriptor;

@interface MNCoreTextViewModel : FBValueObject <NSCopying, NSCoding> {

	BOOL _alignTextDescenderToBottom;
	FBStringWithRedactedDescription* _text;
	UIFontDescriptor* _fontDescriptor;
	double _lineSpacing;

}

@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * text;              //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) UIFontDescriptor * fontDescriptor;                   //@synthesize fontDescriptor=_fontDescriptor - In the implementation block
@property (nonatomic,readonly) double lineSpacing;                                       //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (nonatomic,readonly) BOOL alignTextDescenderToBottom;                          //@synthesize alignTextDescenderToBottom=_alignTextDescenderToBottom - In the implementation block
-(id)layoutConfigurationWithMaxWidth:(double)arg1 ;
-(id)initWithText:(id)arg1 fontDescriptor:(id)arg2 lineSpacing:(double)arg3 alignTextDescenderToBottom:(BOOL)arg4 ;
-(BOOL)alignTextDescenderToBottom;
-(FBStringWithRedactedDescription *)text;
-(id)font;
-(double)lineSpacing;
-(UIFontDescriptor *)fontDescriptor;
@end

