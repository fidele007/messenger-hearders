/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIBezierPath, UIColor, NSString, NSArray;

@interface FBShapeView : UIView {

	UIBezierPath* _path;
	UIColor* _fillColor;
	UIColor* _strokeColor;
	NSString* _lineJoin;
	/*^block*/id _pathFunction;

}

@property (nonatomic,retain) UIBezierPath * path;                  //@synthesize path=_path - In the implementation block
@property (nonatomic,copy) UIColor * fillColor;                    //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,copy) NSString * fillRule; 
@property (nonatomic,copy) UIColor * strokeColor;                  //@synthesize strokeColor=_strokeColor - In the implementation block
@property (assign,nonatomic) double strokeStart; 
@property (assign,nonatomic) double strokeEnd; 
@property (assign,nonatomic) double lineWidth; 
@property (assign,nonatomic) double miterLimit; 
@property (nonatomic,copy) NSString * lineCap; 
@property (nonatomic,copy) NSString * lineJoin;                    //@synthesize lineJoin=_lineJoin - In the implementation block
@property (assign,nonatomic) double lineDashPhase; 
@property (nonatomic,copy) NSArray * lineDashPattern; 
@property (nonatomic,copy) id pathFunction;                        //@synthesize pathFunction=_pathFunction - In the implementation block
+(Class)layerClass;
-(void)setPathFunction:(id)arg1 ;
-(void)setFillColor:(id)arg1 animated:(BOOL)arg2 ;
-(id)pathFunction;
-(void)layoutSubviews;
-(UIBezierPath *)path;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(double)miterLimit;
-(void)setMiterLimit:(double)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(void)setFillRule:(NSString *)arg1 ;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(UIColor *)strokeColor;
-(void)_updatePath;
-(void)setPath:(UIBezierPath *)arg1 ;
-(id)shapeLayer;
-(void)setLineCap:(NSString *)arg1 ;
-(void)setLineJoin:(NSString *)arg1 ;
-(void)setLineDashPattern:(NSArray *)arg1 ;
-(NSArray *)lineDashPattern;
-(void)setLineDashPhase:(double)arg1 ;
-(NSString *)lineCap;
-(double)lineDashPhase;
-(void)setStrokeStart:(double)arg1 ;
-(void)setStrokeEnd:(double)arg1 ;
-(double)strokeStart;
-(double)strokeEnd;
-(NSString *)fillRule;
-(NSString *)lineJoin;
@end

