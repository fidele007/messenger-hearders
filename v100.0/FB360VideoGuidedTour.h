/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSArray;

@interface FB360VideoGuidedTour : NSObject {

	NSArray* _keyframes;

}
+(double)easeInOutInterpolate:(double)arg1 ;
-(id)initWithGuidedTourData:(id)arg1 initialYaw:(double)arg2 initialPitch:(double)arg3 additionalKeyframeSecond:(float)arg4 ;
-(SCD_Struct_FB125)getEulerAnglesWithTime:(double)arg1 ;
@end

