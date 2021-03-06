/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface MNCameraDeviceCyclingController : NSObject {

	NSArray* _deviceIDs;

}

@property (nonatomic,copy,readonly) NSArray * deviceIDs;              //@synthesize deviceIDs=_deviceIDs - In the implementation block
-(id)initWithFlipModeEnabled:(BOOL)arg1 ;
-(BOOL)canCycleBetweenDevices;
-(id)nextDeviceIDInRotation:(id)arg1 ;
-(id)initWithDeviceIDs:(id)arg1 ;
-(NSArray *)deviceIDs;
@end

