/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class CMMotionManager;

@interface FBOpticFlow : NSObject {

	CMMotionManager* _motionManager;

}

@property (nonatomic,retain) CMMotionManager * motionManager;              //@synthesize motionManager=_motionManager - In the implementation block
-(void)updateCalculator:(shared_ptr<facebook::particleemitter::OpticalFlowCalculator>*)arg1 withImageBuffer:(const CVBufferRef)arg2 willStart:(/*^block*/id)arg3 didFinish:(/*^block*/id)arg4 ;
-(void)activateMotion;
-(void)deactivateMotion;
-(float)motionScalar;
-(void)setMotionManager:(CMMotionManager *)arg1 ;
-(CMMotionManager *)motionManager;
@end

