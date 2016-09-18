/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNCameraCapturedMetadata : FBValueObject <NSCopying> {

	BOOL _isFullscreen;
	BOOL _hasDrawing;
	BOOL _hasText;
	long long _cameraPosition;
	long long _deviceOrientation;
	long long _flashMode;

}

@property (nonatomic,readonly) long long cameraPosition;                 //@synthesize cameraPosition=_cameraPosition - In the implementation block
@property (nonatomic,readonly) long long deviceOrientation;              //@synthesize deviceOrientation=_deviceOrientation - In the implementation block
@property (nonatomic,readonly) BOOL isFullscreen;                        //@synthesize isFullscreen=_isFullscreen - In the implementation block
@property (nonatomic,readonly) long long flashMode;                      //@synthesize flashMode=_flashMode - In the implementation block
@property (nonatomic,readonly) BOOL hasDrawing;                          //@synthesize hasDrawing=_hasDrawing - In the implementation block
@property (nonatomic,readonly) BOOL hasText;                             //@synthesize hasText=_hasText - In the implementation block
-(BOOL)hasDrawing;
-(id)initWithCameraPosition:(long long)arg1 deviceOrientation:(long long)arg2 isFullscreen:(BOOL)arg3 flashMode:(long long)arg4 hasDrawing:(BOOL)arg5 hasText:(BOOL)arg6 ;
-(BOOL)hasText;
-(long long)deviceOrientation;
-(BOOL)isFullscreen;
-(long long)cameraPosition;
-(long long)flashMode;
@end
