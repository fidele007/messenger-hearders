/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBCaptureDevice : FBValueObject <NSCopying> {

	BOOL _hasFlash;
	BOOL _hasTorch;
	BOOL _isTorchActive;
	long long _flashMode;
	long long _position;
	NSString* _uniqueID;
	long long _lowLightState;

}

@property (nonatomic,readonly) long long flashMode;                   //@synthesize flashMode=_flashMode - In the implementation block
@property (nonatomic,readonly) BOOL hasFlash;                         //@synthesize hasFlash=_hasFlash - In the implementation block
@property (nonatomic,readonly) BOOL hasTorch;                         //@synthesize hasTorch=_hasTorch - In the implementation block
@property (nonatomic,readonly) BOOL isTorchActive;                    //@synthesize isTorchActive=_isTorchActive - In the implementation block
@property (nonatomic,readonly) long long position;                    //@synthesize position=_position - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueID;              //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) long long lowLightState;               //@synthesize lowLightState=_lowLightState - In the implementation block
-(long long)lowLightState;
-(id)initWithFlashMode:(long long)arg1 hasFlash:(BOOL)arg2 hasTorch:(BOOL)arg3 isTorchActive:(BOOL)arg4 position:(long long)arg5 uniqueID:(id)arg6 lowLightState:(long long)arg7 ;
-(long long)position;
-(BOOL)hasFlash;
-(BOOL)hasTorch;
-(long long)flashMode;
-(BOOL)isTorchActive;
-(NSString *)uniqueID;
@end

