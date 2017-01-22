/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class UIColor;

@interface FBCardStretchableImageBuilder : NSObject {

	double _cornerRadius;
	UIColor* _insideColor;
	UIColor* _outsideColor;
	UIColor* _borderColor;
	double _borderWidth;
	double _shadowBlurRadius;
	UIColor* _shadowColor;
	CGSize _shadowOffset;
	CGSize _stretchableSize;
	UIEdgeInsets _borderInsets;

}

@property (assign,nonatomic) double cornerRadius;                    //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,retain) UIColor * insideColor;                  //@synthesize insideColor=_insideColor - In the implementation block
@property (nonatomic,retain) UIColor * outsideColor;                 //@synthesize outsideColor=_outsideColor - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                  //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) double borderWidth;                     //@synthesize borderWidth=_borderWidth - In the implementation block
@property (assign,nonatomic) UIEdgeInsets borderInsets;              //@synthesize borderInsets=_borderInsets - In the implementation block
@property (assign,nonatomic) CGSize shadowOffset;                    //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (assign,nonatomic) double shadowBlurRadius;                //@synthesize shadowBlurRadius=_shadowBlurRadius - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor;                  //@synthesize shadowColor=_shadowColor - In the implementation block
@property (assign,nonatomic) CGSize stretchableSize;                 //@synthesize stretchableSize=_stretchableSize - In the implementation block
-(id)getResult;
-(void)setInsideColor:(UIColor *)arg1 ;
-(void)setOutsideColor:(UIColor *)arg1 ;
-(UIColor *)insideColor;
-(UIColor *)outsideColor;
-(CGSize)stretchableSize;
-(void)setStretchableSize:(CGSize)arg1 ;
-(id)init;
-(void)setCornerRadius:(double)arg1 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(double)cornerRadius;
-(CGSize)shadowOffset;
-(UIColor *)shadowColor;
-(void)setBorderWidth:(double)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setShadowBlurRadius:(double)arg1 ;
-(double)shadowBlurRadius;
-(UIColor *)borderColor;
-(double)borderWidth;
-(UIEdgeInsets)borderInsets;
-(void)setBorderInsets:(UIEdgeInsets)arg1 ;
@end
