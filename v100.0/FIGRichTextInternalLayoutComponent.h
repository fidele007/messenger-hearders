/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKComponent.h>

@class CKComponent, UIFont, NSAttributedString;

@interface FIGRichTextInternalLayoutComponent : CKComponent {

	CKComponent* _richTextComponent;
	UIFont* _font;
	NSAttributedString* _attributedString;
	unsigned long long _maximumNumberOfLines;
	FIGRichTextInternalLayoutComponentOptions _options;
	NSAttributedString* _truncationAttributedString;

}
+(id)newWithAttributedString:(id)arg1 font:(id)arg2 maximumNumberOfLines:(unsigned long long)arg3 truncationAttributedString:(id)arg4 options:(const FIGRichTextInternalLayoutComponentOptions*)arg5 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
@end

