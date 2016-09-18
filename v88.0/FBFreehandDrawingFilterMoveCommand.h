/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBFreehandDrawingFilterCommand.h>

@interface FBFreehandDrawingFilterMoveCommand : FBFreehandDrawingFilterCommand {

	CGPoint _startPoint;
	CGPoint _endPoint;
	CGSize _drawingSurfaceSize;
	GLKVector4 _color;

}

@property (nonatomic,readonly) CGPoint startPoint;                     //@synthesize startPoint=_startPoint - In the implementation block
@property (nonatomic,readonly) CGPoint endPoint;                       //@synthesize endPoint=_endPoint - In the implementation block
@property (nonatomic,readonly) _GLKVector4 color;                      //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) CGSize drawingSurfaceSize;              //@synthesize drawingSurfaceSize=_drawingSurfaceSize - In the implementation block
-(id)initWithStartPoint:(CGPoint)arg1 endPoint:(CGPoint)arg2 drawingSurfaceSize:(CGSize)arg3 color:(_GLKVector4)arg4 ;
-(CGSize)drawingSurfaceSize;
-(CGPoint)startPoint;
-(_GLKVector4)color;
-(CGPoint)endPoint;
@end

