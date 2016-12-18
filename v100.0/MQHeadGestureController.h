/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MQHeadGestureControllerProtocol;
#import <Messenger/Messenger-Structs.h>
@class MQHeadVelocityController;

@interface MQHeadGestureController : NSObject {

	MQBoolVector3 vector;
	id<MQHeadGestureControllerProtocol> _delegate;
	MQHeadVelocityController* _velocityController;

}

@property (assign,nonatomic,__weak) id<MQHeadGestureControllerProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MQHeadVelocityController * velocityController;                    //@synthesize velocityController=_velocityController - In the implementation block
-(id)initWithHeadVelocityController:(id)arg1 ;
-(MQHeadVelocityController *)velocityController;
-(void)setVelocityController:(MQHeadVelocityController *)arg1 ;
-(void)setDelegate:(id<MQHeadGestureControllerProtocol>)arg1 ;
-(id<MQHeadGestureControllerProtocol>)delegate;
-(void)pass;
@end
