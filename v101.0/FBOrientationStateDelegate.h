/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBOrientationStateDelegate <NSObject>
@optional
-(void)orientationState:(id)arg1 didChangeToInterfaceOrientation:(long long)arg2;
-(void)orientationState:(id)arg1 didFinishRotationToOrientation:(long long)arg2 fromOrientation:(long long)arg3;
-(void)orientationState:(id)arg1 willBeginRotationToOrientation:(long long)arg2 fromOrientation:(long long)arg3 animationConfig:(SCD_Struct_FB73)arg4;
-(void)orientationState:(id)arg1 didUpdateRotationToOrientation:(long long)arg2 fromOrientation:(long long)arg3 progress:(double)arg4;
-(BOOL)orientationState:(id)arg1 shouldBlockChangeToInterfaceOrientation:(long long)arg2;
-(BOOL)orientationState:(id)arg1 shouldUpdateStatusBarToInterfaceOrientation:(long long)arg2;
-(BOOL)orientationState:(id)arg1 supportsDeviceOrientation:(long long)arg2;
-(long long)orientationState:(id)arg1 interfaceOrientationForDeviceOrientation:(long long)arg2;
-(double)rotationForInterfaceOrientation:(long long)arg1;

@end

