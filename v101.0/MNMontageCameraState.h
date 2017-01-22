/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNMontageCameraState : FBValueObject <NSCopying> {

	BOOL _isAuthorized;
	BOOL _isReady;
	BOOL _isCapturing;
	BOOL _canChangeCameraPosition;
	BOOL _canChangeFlashMode;
	long long _flashMode;
	long long _devicePosition;

}

@property (nonatomic,readonly) BOOL isAuthorized;                         //@synthesize isAuthorized=_isAuthorized - In the implementation block
@property (nonatomic,readonly) BOOL isReady;                              //@synthesize isReady=_isReady - In the implementation block
@property (nonatomic,readonly) BOOL isCapturing;                          //@synthesize isCapturing=_isCapturing - In the implementation block
@property (nonatomic,readonly) BOOL canChangeCameraPosition;              //@synthesize canChangeCameraPosition=_canChangeCameraPosition - In the implementation block
@property (nonatomic,readonly) BOOL canChangeFlashMode;                   //@synthesize canChangeFlashMode=_canChangeFlashMode - In the implementation block
@property (nonatomic,readonly) long long flashMode;                       //@synthesize flashMode=_flashMode - In the implementation block
@property (nonatomic,readonly) long long devicePosition;                  //@synthesize devicePosition=_devicePosition - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(BOOL)isAuthorized;
-(BOOL)canChangeCameraPosition;
-(BOOL)canChangeFlashMode;
-(long long)devicePosition;
-(id)initWithIsAuthorized:(BOOL)arg1 isReady:(BOOL)arg2 isCapturing:(BOOL)arg3 canChangeCameraPosition:(BOOL)arg4 canChangeFlashMode:(BOOL)arg5 flashMode:(long long)arg6 devicePosition:(long long)arg7 ;
-(BOOL)isReady;
-(long long)flashMode;
-(BOOL)isCapturing;
@end
