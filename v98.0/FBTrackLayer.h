/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>
#import <Messenger/CALayerDelegate.h>

@protocol OS_dispatch_queue;
@class UIBezierPath, UIColor, NSObject, CALayer, FBInchWormingTrackLayerConfiguration, NSString;

@interface FBTrackLayer : CALayer <CALayerDelegate> {

	UIBezierPath* _path;
	double _trackWidth;
	UIColor* _trackColor;
	double _trackBorderWidth;
	UIColor* _trackBorderColor;
	UIColor* _trackShadowColor;
	double _trackShadowBlurRadius;
	NSObject*<OS_dispatch_queue> _drawingQueue;
	CALayer* _contentLayer;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> drawingQueue;                                //@synthesize drawingQueue=_drawingQueue - In the implementation block
@property (nonatomic,readonly) CALayer * contentLayer;                                                   //@synthesize contentLayer=_contentLayer - In the implementation block
@property (nonatomic,readonly) FBInchWormingTrackLayerConfiguration * currentConfiguration; 
@property (nonatomic,retain) UIBezierPath * path;                                                        //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) double trackWidth;                                                          //@synthesize trackWidth=_trackWidth - In the implementation block
@property (nonatomic,retain) UIColor * trackColor;                                                       //@synthesize trackColor=_trackColor - In the implementation block
@property (assign,nonatomic) double trackBorderWidth;                                                    //@synthesize trackBorderWidth=_trackBorderWidth - In the implementation block
@property (nonatomic,retain) UIColor * trackBorderColor;                                                 //@synthesize trackBorderColor=_trackBorderColor - In the implementation block
@property (nonatomic,retain) UIColor * trackShadowColor;                                                 //@synthesize trackShadowColor=_trackShadowColor - In the implementation block
@property (assign,nonatomic) double trackShadowBlurRadius;                                               //@synthesize trackShadowBlurRadius=_trackShadowBlurRadius - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTrackColor:(UIColor *)arg1 ;
-(void)setTrackWidth:(double)arg1 ;
-(void)setTrackBorderColor:(UIColor *)arg1 ;
-(void)setTrackBorderWidth:(double)arg1 ;
-(void)setTrackShadowColor:(UIColor *)arg1 ;
-(void)setTrackShadowBlurRadius:(double)arg1 ;
-(UIColor *)trackColor;
-(double)trackWidth;
-(UIColor *)trackBorderColor;
-(double)trackBorderWidth;
-(UIColor *)trackShadowColor;
-(double)trackShadowBlurRadius;
-(NSObject*<OS_dispatch_queue>)drawingQueue;
-(id)init;
-(UIBezierPath *)path;
-(void)displayLayer:(id)arg1 ;
-(void)setPath:(UIBezierPath *)arg1 ;
-(void)layoutSublayers;
-(CALayer *)contentLayer;
-(FBInchWormingTrackLayerConfiguration *)currentConfiguration;
@end

