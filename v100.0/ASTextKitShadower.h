/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class UIColor;

@interface ASTextKitShadower : NSObject {

	UIEdgeInsets _calculatedShadowPadding;
	UIColor* _shadowColor;
	double _shadowOpacity;
	double _shadowRadius;
	CGSize _shadowOffset;

}

@property (nonatomic,readonly) CGSize shadowOffset;                //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (nonatomic,readonly) UIColor * shadowColor;              //@synthesize shadowColor=_shadowColor - In the implementation block
@property (nonatomic,readonly) double shadowOpacity;               //@synthesize shadowOpacity=_shadowOpacity - In the implementation block
@property (nonatomic,readonly) double shadowRadius;                //@synthesize shadowRadius=_shadowRadius - In the implementation block
-(BOOL)_shouldDrawShadow;
-(CGPoint)offsetPointWithInternalPoint:(CGPoint)arg1 ;
-(id)initWithShadowOffset:(CGSize)arg1 shadowColor:(id)arg2 shadowOpacity:(double)arg3 shadowRadius:(double)arg4 ;
-(void)setShadowInContext:(CGContextRef)arg1 ;
-(CGSize)insetSizeWithConstrainedSize:(CGSize)arg1 ;
-(CGRect)insetRectWithConstrainedRect:(CGRect)arg1 ;
-(CGSize)outsetSizeWithInsetSize:(CGSize)arg1 ;
-(CGRect)outsetRectWithInsetRect:(CGRect)arg1 ;
-(CGRect)offsetRectWithInternalRect:(CGRect)arg1 ;
-(CGPoint)offsetPointWithExternalPoint:(CGPoint)arg1 ;
-(CGSize)shadowOffset;
-(UIColor *)shadowColor;
-(double)shadowRadius;
-(double)shadowOpacity;
-(UIEdgeInsets)shadowPadding;
@end

