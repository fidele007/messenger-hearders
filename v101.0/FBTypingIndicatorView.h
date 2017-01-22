/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray;

@interface FBTypingIndicatorView : UIView {

	NSMutableArray* _dotLayers;
	NSMutableArray* _animations;
	double _typingDotSize;
	double _maxAmplitude;
	unsigned long long _bubbleDotType;

}
+(CGSize)preferredSize;
-(id)initWithTypingDotSize:(double)arg1 typingDotType:(unsigned long long)arg2 maxAmplitude:(double)arg3 animated:(BOOL)arg4 ;
-(void)_appWillEnterForeground;
-(void)_initLayers;
-(void)_initAnimations;
-(void)_updateAnimationState;
-(void)dealloc;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(BOOL)_isAnimating;
-(void)_stopAnimation;
-(void)_startAnimation;
@end
