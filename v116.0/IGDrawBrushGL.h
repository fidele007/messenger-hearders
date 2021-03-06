/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:00 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class IGGLProgram, IGGLBlendMode, IGContext;


@protocol IGDrawBrushGL <IGDrawBrushCommon>
@property (nonatomic,retain,readonly) IGGLProgram * program; 
@property (nonatomic,retain) IGGLBlendMode * blendMode; 
@property (assign,nonatomic) _GLKMatrix4 projection; 
@property (assign,nonatomic) _GLKMatrix4 modelView; 
@property (nonatomic,retain,readonly) IGContext * context; 
@property (nonatomic,retain) id<IGDrawDynamics> brushDynamics; 
@property (assign,nonatomic) double spacing; 
@property (assign,nonatomic) CGSize backingSize; 
@required
+(id)createForModel:(id)arg1 context:(id)arg2 backingSize:(CGSize)arg3;
-(void)setBackingSize:(CGSize)arg1;
-(_GLKMatrix4)modelView;
-(void)setModelView:(_GLKMatrix4)arg1;
-(id)createMark;
-(id<IGDrawDynamics>)brushDynamics;
-(void)setBrushDynamics:(id)arg1;
-(IGContext *)context;
-(id)initWithContext:(id)arg1;
-(void)setSpacing:(double)arg1;
-(double)spacing;
-(IGGLBlendMode *)blendMode;
-(void)setBlendMode:(id)arg1;
-(void)prepareToDraw;
-(CGSize)backingSize;
-(void)setProjection:(_GLKMatrix4)arg1;
-(_GLKMatrix4)projection;
-(IGGLProgram *)program;

@end

