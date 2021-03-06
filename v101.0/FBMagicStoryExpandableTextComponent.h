/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
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
-(vector<CKComponentAnimation, std::__1::allocator<CKComponentAnimation> >*)animationsFromPreviousComponent:(id)arg1 ;
-(CKComponentBoundsAnimation)boundsAnimationFromPreviousComponent:(id)arg1 ;
-(void)toggleExpansion;
@end

