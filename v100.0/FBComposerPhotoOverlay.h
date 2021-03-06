/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBComposerPhotoOverlayAttachment;

@interface FBComposerPhotoOverlay : FBValueObject <NSCopying, NSCoding> {

	BOOL _isFlipped;
	FBComposerPhotoOverlayAttachment* _attachment;
	double _rotationValue;
	double _rotationValueFromPhoto;
	double _xCoordinatePosition;
	double _yCoordinatePosition;
	double _width;
	double _height;

}

@property (nonatomic,copy,readonly) FBComposerPhotoOverlayAttachment * attachment;              //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,readonly) double rotationValue;                                            //@synthesize rotationValue=_rotationValue - In the implementation block
@property (nonatomic,readonly) double rotationValueFromPhoto;                                   //@synthesize rotationValueFromPhoto=_rotationValueFromPhoto - In the implementation block
@property (nonatomic,readonly) double xCoordinatePosition;                                      //@synthesize xCoordinatePosition=_xCoordinatePosition - In the implementation block
@property (nonatomic,readonly) double yCoordinatePosition;                                      //@synthesize yCoordinatePosition=_yCoordinatePosition - In the implementation block
@property (nonatomic,readonly) double width;                                                    //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) double height;                                                   //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) BOOL isFlipped;                                                  //@synthesize isFlipped=_isFlipped - In the implementation block
-(id)initWithAttachment:(id)arg1 rotationValue:(double)arg2 rotationValueFromPhoto:(double)arg3 xCoordinatePosition:(double)arg4 yCoordinatePosition:(double)arg5 width:(double)arg6 height:(double)arg7 isFlipped:(BOOL)arg8 ;
-(double)rotationValue;
-(double)rotationValueFromPhoto;
-(double)xCoordinatePosition;
-(double)yCoordinatePosition;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)width;
-(double)height;
-(FBComposerPhotoOverlayAttachment *)attachment;
-(BOOL)isFlipped;
@end

