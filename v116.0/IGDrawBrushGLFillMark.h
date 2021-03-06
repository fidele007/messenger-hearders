/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:00 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/IGDrawBrushGLMark.h>

@protocol IGVertexArrayObject, IGDrawBrushGL;
@class IGGLProgram, NSString;

@interface IGDrawBrushGLFillMark : NSObject <IGDrawBrushGLMark> {

	id<IGVertexArrayObject> _vao;
	IGGLProgram* _program;
	unsigned _colorIndex;
	GLKVector4 _color;
	BOOL _hadToStopDueToFullBuffer;
	BOOL _supportsIncrementalDrawing;
	id<IGDrawBrushGL> _brush;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL supportsIncrementalDrawing;              //@synthesize supportsIncrementalDrawing=_supportsIncrementalDrawing - In the implementation block
@property (nonatomic,readonly) id<IGDrawBrushGL> brush;                      //@synthesize brush=_brush - In the implementation block
@property (assign,nonatomic) BOOL hadToStopDueToFullBuffer;                  //@synthesize hadToStopDueToFullBuffer=_hadToStopDueToFullBuffer - In the implementation block
+(id)vertex;
+(id)fragment;
-(id)initWithBrush:(id)arg1 ;
-(void)drawIncremental;
-(BOOL)hadToStopDueToFullBuffer;
-(void)setHadToStopDueToFullBuffer:(BOOL)arg1 ;
-(void)endWith:(IGTouchSample)arg1 ;
-(BOOL)supportsIncrementalDrawing;
-(void)bindBuffers;
-(void)setColor:(id)arg1 ;
-(void)draw;
-(void)addSample:(IGTouchSample)arg1 ;
-(void)prepareToDraw;
-(void)startWith:(IGTouchSample)arg1 ;
-(void)idle;
-(id<IGDrawBrushGL>)brush;
@end

