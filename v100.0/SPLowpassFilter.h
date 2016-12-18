/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SPLowpassFilter : NSObject {

	double _filterConstant;
	double _x;
	double _y;
	double _z;

}

@property (x,nonatomic,readonly) double x;              //@synthesize x=_x - In the implementation block
@property (y,nonatomic,readonly) double y;              //@synthesize y=_y - In the implementation block
@property (z,nonatomic,readonly) double z;              //@synthesize z=_z - In the implementation block
-(id)initWithSampleRate:(double)arg1 cutoffFrequency:(double)arg2 ;
-(void)addAcceleration:(id)arg1 ;
-(double)x;
-(double)y;
-(double)z;
@end

