/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface FBDrawColorScrubberDot : UIView {

	UIColor* _color;
	double _size;

}

@property (nonatomic,retain) UIColor * color;              //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double size;                  //@synthesize size=_size - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(double)size;
-(void)drawRect:(CGRect)arg1 ;
-(void)setSize:(double)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
@end

