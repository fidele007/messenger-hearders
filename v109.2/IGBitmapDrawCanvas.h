/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:39 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/IGDrawCanvasType.h>

@protocol IGDrawBrush, IGDrawBrushCommon, IGDrawCanvasDelegate;
@class IGDrawBezierCurve, NSString;

@interface IGBitmapDrawCanvas : NSObject <IGDrawCanvasType> {

	IGDrawBezierCurve* _currentStroke;
	CGContextRef _context;
	CGSize _canvasSize;
	CGSize _bitmapSize;
	BOOL _hasDrawing;
	id<IGDrawBrush> _brushInternal;
	id<IGDrawBrushCommon> _brush;
	id<IGDrawCanvasDelegate> _delegate;
	CGRect _currentDrawingPointsBounds;

}

@property (assign,nonatomic) CGRect currentDrawingPointsBounds;                     //@synthesize currentDrawingPointsBounds=_currentDrawingPointsBounds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<IGDrawBrushCommon> brush;                           //@synthesize brush=_brush - In the implementation block
@property (assign,nonatomic,__weak) id<IGDrawCanvasDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)hasDrawing;
-(void)setCurrentDrawingPointsBounds:(CGRect)arg1 ;
-(void)addPointWithSample:(IGTouchSample)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 rect:(CGRect)arg2 applyBrushShadow:(BOOL)arg3 ;
-(CGImageRef)createImageWithSection:(CGRect)arg1 ofBitmapContext:(CGContextRef)arg2 ;
-(CGRect)currentDrawingPointsBounds;
-(void)beginStrokeWithSample:(IGTouchSample)arg1 ;
-(void)continueStrokeWithSample:(IGTouchSample)arg1 ;
-(void)endStrokeWithSample:(IGTouchSample)arg1 ;
-(void)drawFillWithColor:(id)arg1 ;
-(BOOL)hasCandyCaneStrokes;
-(BOOL)canUndoStroke;
-(void)undoStroke;
-(id)initWithCanvasSize:(CGSize)arg1 bitmapContextSize:(CGSize)arg2 ;
-(void)setDelegate:(id<IGDrawCanvasDelegate>)arg1 ;
-(void)dealloc;
-(id<IGDrawCanvasDelegate>)delegate;
-(void)clear;
-(void)drawInContext:(CGContextRef)arg1 rect:(CGRect)arg2 ;
-(CGContextRef)drawingContext;
-(void)setBrush:(id<IGDrawBrushCommon>)arg1 ;
-(id<IGDrawBrushCommon>)brush;
-(id)currentDrawing;
@end

