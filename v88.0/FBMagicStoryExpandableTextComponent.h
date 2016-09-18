/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKComponent.h>

@class FBRichTextComponent, FBButtonComponent;

@interface FBMagicStoryExpandableTextComponent : CKComponent {

	FBRichTextComponent* _textComponent;
	FBButtonComponent* _buttonComponent;
	unsigned long long _state;
	unsigned long long _maxNumberOfLinesWhenCollapsed;
	double _optionalSpacingAfter;

}
+(id)newWithText:(id)arg1 color:(id)arg2 font:(id)arg3 maxNumberOfLinesWhenCollapsed:(unsigned long long)arg4 textAlignment:(long long)arg5 buttonColor:(id)arg6 optionalSpacingAfter:(double)arg7 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
-(CKComponentBoundsAnimation)boundsAnimationFromPreviousComponent:(id)arg1 ;
-(vector<CKComponentAnimation, std::__1::allocator<CKComponentAnimation> >*)animationsFromPreviousComponent:(id)arg1 ;
-(void)toggleExpansion;
@end

