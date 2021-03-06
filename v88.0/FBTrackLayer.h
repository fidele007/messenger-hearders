/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <QuartzCore/CALayer.h>
#import <Messenger/CALayerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CALayer, UIBezierPath, UIColor, NSString;

@interface FBTrackLayer : CALayer <CALayerDelegate> {

	NSObject*<OS_dispatch_queue> _drawingQueue;
	CALayer* _contentLayer;
	UIBezierPath* _path;
	double _trackWidth;
	UIColor* _trackColor;
	double _trackBorderWidth;
	UIColor* _trackBorderColor;
	UIColor* _trackShadowColor;
	double _trackShadowBlurRadius;

}

@property (nonatomic,retain) UIBezierPath * path;                       //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) double trackWidth;                         //@synthesize trackWidth=_trackWidth - In the implementation block
@property (nonatomic,retain) UIColor * trackColor;                      //@synthesize trackColor=_trackColor - In the implementation block
@property (assign,nonatomic) double trackBorderWidth;                   //@synthesize trackBorderWidth=_trackBorderWidth - In the implementation block
@property (nonatomic,retain) UIColor * trackBorderColor;                //@synthesize trackBorderColor=_trackBorderColor - In the implementation block
@property (nonatomic,retain) UIColor * trackShadowColor;                //@synthesize trackShadowColor=_trackShadowColor - In the implementation block
@property (assign,nonatomic) double trackShadowBlurRadius;              //@synthesize trackShadowBlurRadius=_trackShadowBlurRadius - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIColor *)trackColor;
-(void)setTrackShadowBlurRadius:(double)arg1 ;
-(void)setTrackShadowColor:(UIColor *)arg1 ;
-(void)setTrackBorderWidth:(double)arg1 ;
-(void)setTrackBorderColor:(UIColor *)arg1 ;
-(double)trackBorderWidth;
-(UIColor *)trackBorderColor;
-(double)trackShadowBlurRadius;
-(UIColor *)trackShadowColor;
-(void)setTrackColor:(UIColor *)arg1 ;
-(void)setTrackWidth:(double)arg1 ;
-(void)_drawTrackInContext:(CGContextRef)arg1 ;
-(double)trackWidth;
-(id)init;
-(UIBezierPath *)path;
-(void)displayLayer:(id)arg1 ;
-(void)setPath:(UIBezierPath *)arg1 ;
-(void)layoutSublayers;
@end

