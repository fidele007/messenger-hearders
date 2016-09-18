/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, UIColor;

@interface FBRoundedCornerView : UIView {

	double _cornerRadius;
	unsigned long long _rectCorner;
	CGPoint _pathOrigin;
	CGPathRef _clipPath;
	UIImage* _backgroundImage;
	CGRect _backgroundImageSubframe;
	double _radius;
	UIColor* _color;

}

@property (assign,nonatomic) double radius;                               //@synthesize radius=_radius - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage;                   //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) UIColor * color;                             //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) CGRect backgroundImageSubframe;              //@synthesize backgroundImageSubframe=_backgroundImageSubframe - In the implementation block
-(void)recalculateCornerPath;
-(id)initWithCornerRadius:(double)arg1 forCorner:(unsigned long long)arg2 ;
-(void)setBackgroundImageSubframe:(CGRect)arg1 ;
-(CGRect)backgroundImageSubframe;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(UIImage *)backgroundImage;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(double)radius;
-(void)setRadius:(double)arg1 ;
@end

