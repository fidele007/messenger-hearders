/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class CAShapeLayer, UIColor;

@interface FBCircularProgressView : UIView {

	CAShapeLayer* _unfilledLayer;
	CAShapeLayer* _filledLayer;
	double _progress;
	double _circleBorderWidth;
	double _radius;
	UIColor* _progressColor;
	UIColor* _remainingProgressColor;

}

@property (assign,nonatomic) double progress;                               //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) double circleBorderWidth;                      //@synthesize circleBorderWidth=_circleBorderWidth - In the implementation block
@property (assign,nonatomic) double radius;                                 //@synthesize radius=_radius - In the implementation block
@property (nonatomic,retain) UIColor * progressColor;                       //@synthesize progressColor=_progressColor - In the implementation block
@property (nonatomic,retain) UIColor * remainingProgressColor;              //@synthesize remainingProgressColor=_remainingProgressColor - In the implementation block
-(void)setRemainingProgressColor:(UIColor *)arg1 ;
-(void)setCircleBorderWidth:(double)arg1 ;
-(void)setProgress:(double)arg1 shouldDisplay:(BOOL)arg2 ;
-(double)circleBorderWidth;
-(UIColor *)remainingProgressColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setProgress:(double)arg1 ;
-(double)progress;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(void)setProgressColor:(UIColor *)arg1 ;
-(UIColor *)progressColor;
@end

