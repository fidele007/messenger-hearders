/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FB360VideoGuidedTourKeyframe : NSObject {

	int _poiId;
	double _timestamp;
	double _pitch;
	double _yaw;

}

@property (nonatomic,readonly) double timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) double pitch;                  //@synthesize pitch=_pitch - In the implementation block
@property (nonatomic,readonly) double yaw;                    //@synthesize yaw=_yaw - In the implementation block
@property (nonatomic,readonly) int poiId;                     //@synthesize poiId=_poiId - In the implementation block
-(id)initWithTimestamp:(double)arg1 pitch:(double)arg2 yaw:(double)arg3 poiId:(int)arg4 ;
-(int)poiId;
-(double)timestamp;
-(id)initWithTimestamp:(double)arg1 ;
-(double)pitch;
-(double)yaw;
@end

