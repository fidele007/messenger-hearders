/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/FBObjectShallowCopyProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMediaCreativeToolsModel, NSString;

@interface FBCameraComponentModel : FBValueObject <FBObjectShallowCopyProtocol, NSCopying> {

	BOOL _captureButtonDisabled;
	BOOL _isFlipFrontCameraOutputEnabled;
	BOOL _creativeToolsEnabled;
	BOOL _saveNonFilteredMedia;
	long long _permissionsState;
	long long _cameraMode;
	long long _captureDevicePosition;
	unsigned long long _captureState;
	long long _deviceOrientation;
	long long _flashMode;
	FBMediaCreativeToolsModel* _creativeToolsModel;

}

@property (nonatomic,readonly) long long permissionsState;                                       //@synthesize permissionsState=_permissionsState - In the implementation block
@property (nonatomic,readonly) long long cameraMode;                                             //@synthesize cameraMode=_cameraMode - In the implementation block
@property (nonatomic,readonly) long long captureDevicePosition;                                  //@synthesize captureDevicePosition=_captureDevicePosition - In the implementation block
@property (nonatomic,readonly) unsigned long long captureState;                                  //@synthesize captureState=_captureState - In the implementation block
@property (nonatomic,readonly) long long deviceOrientation;                                      //@synthesize deviceOrientation=_deviceOrientation - In the implementation block
@property (nonatomic,readonly) long long flashMode;                                              //@synthesize flashMode=_flashMode - In the implementation block
@property (nonatomic,readonly) BOOL captureButtonDisabled;                                       //@synthesize captureButtonDisabled=_captureButtonDisabled - In the implementation block
@property (nonatomic,readonly) BOOL isFlipFrontCameraOutputEnabled;                              //@synthesize isFlipFrontCameraOutputEnabled=_isFlipFrontCameraOutputEnabled - In the implementation block
@property (nonatomic,readonly) BOOL creativeToolsEnabled;                                        //@synthesize creativeToolsEnabled=_creativeToolsEnabled - In the implementation block
@property (nonatomic,readonly) BOOL saveNonFilteredMedia;                                        //@synthesize saveNonFilteredMedia=_saveNonFilteredMedia - In the implementation block
@property (nonatomic,copy,readonly) FBMediaCreativeToolsModel * creativeToolsModel;              //@synthesize creativeToolsModel=_creativeToolsModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)captureDevicePosition;
-(BOOL)creativeToolsEnabled;
-(unsigned long long)captureState;
-(BOOL)captureButtonDisabled;
-(long long)permissionsState;
-(FBMediaCreativeToolsModel *)creativeToolsModel;
-(BOOL)isFlipFrontCameraOutputEnabled;
-(BOOL)saveNonFilteredMedia;
-(id)initWithPermissionsState:(long long)arg1 cameraMode:(long long)arg2 captureDevicePosition:(long long)arg3 captureState:(unsigned long long)arg4 deviceOrientation:(long long)arg5 flashMode:(long long)arg6 captureButtonDisabled:(BOOL)arg7 isFlipFrontCameraOutputEnabled:(BOOL)arg8 creativeToolsEnabled:(BOOL)arg9 saveNonFilteredMedia:(BOOL)arg10 creativeToolsModel:(id)arg11 ;
-(long long)deviceOrientation;
-(long long)cameraMode;
-(long long)flashMode;
-(id)shallowCopy;
@end

