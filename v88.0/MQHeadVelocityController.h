/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class MQNSDateVector3, MQHeadRotationController;

@interface MQHeadVelocityController : NSObject {

	MQFloatVector3 _oldRotation;
	MQFloatVector3 _velocity;
	MQFloatVector3 _translation;
	MQFloatVector3 _displacement;
	MQBoolVector3 _trend;
	MQNSDateVector3* _date;
	MQHeadRotationController* _rotationController;

}

@property (nonatomic,retain) MQHeadRotationController * rotationController;              //@synthesize rotationController=_rotationController - In the implementation block
-(float)checkByTrend:(BOOL)arg1 withLeftValue:(float)arg2 andRightValue:(float)arg3 andSuccessValue:(float)arg4 ;
-(MQFloatVector3)nullifyWithDisplacement:(MQFloatVector3)arg1 andNewRotation:(MQFloatVector3)arg2 andOldRotation:(MQFloatVector3)arg3 andTrendVector:(MQBoolVector3)arg4 ;
-(MQBoolVector3)swapTrendFromOriginal:(MQBoolVector3)arg1 usingDisplacement:(MQFloatVector3)arg2 andNullified:(MQFloatVector3)arg3 ;
-(MQFloatVector3)getVelo;
-(MQHeadRotationController *)rotationController;
-(void)setRotationController:(MQHeadRotationController *)arg1 ;
-(id)init;
-(void)pass;
@end

