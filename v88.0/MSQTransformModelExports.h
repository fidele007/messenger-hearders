/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSQTransformModelExports <JSExport>
@property (assign,nonatomic) float x; 
@property (assign,nonatomic) float y; 
@property (assign,nonatomic) float z; 
@property (assign,nonatomic) float rotationX; 
@property (assign,nonatomic) float rotationY; 
@property (assign,nonatomic) float rotationZ; 
@property (assign,nonatomic) float scaleX; 
@property (assign,nonatomic) float scaleY; 
@property (assign,nonatomic) float scaleZ; 
@property (assign,nonatomic) SCNVector3 position; 
@property (assign,nonatomic) SCNVector3 rotation; 
@property (assign,nonatomic) SCNVector3 scale; 
@required
-(float)scaleZ;
-(void)setScaleZ:(float)arg1;
-(void)updatePosition:(float)arg1 y:(float)arg2 z:(float)arg3;
-(void)updateRotation:(float)arg1 rotationY:(float)arg2 rotationZ:(float)arg3;
-(void)updateScale:(float)arg1 scaleY:(float)arg2 scaleZ:(float)arg3;
-(void)updateAll:(float)arg1 y:(float)arg2 z:(float)arg3 rotationX:(float)arg4 rotationY:(float)arg5 rotationZ:(float)arg6 scaleX:(float)arg7 scaleY:(float)arg8 scaleZ:(float)arg9;
-(SCNMatrix4*)getMatrix;
-(void)setScale:(SCNVector3)arg1;
-(SCNVector3)scale;
-(void)setPosition:(SCNVector3)arg1;
-(SCNVector3)position;
-(void)setRotation:(SCNVector3)arg1;
-(SCNVector3)rotation;
-(float)x;
-(void)setX:(float)arg1;
-(float)y;
-(void)setY:(float)arg1;
-(float)z;
-(void)setZ:(float)arg1;
-(void)setMatrix:(SCNMatrix4)arg1;
-(void)setRotationZ:(float)arg1;
-(float)rotationZ;
-(void)setScaleX:(float)arg1;
-(void)setScaleY:(float)arg1;
-(float)scaleX;
-(float)scaleY;
-(void)setRotationX:(float)arg1;
-(void)setRotationY:(float)arg1;
-(float)rotationX;
-(float)rotationY;

@end

