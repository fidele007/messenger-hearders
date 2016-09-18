/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface MNPhotoDoublePhaseSendExperimentContext : FBExperimentContext {

	BOOL _doublePhaseEnabled;
	double _dimensionThreshold;

}

@property (nonatomic,readonly) BOOL doublePhaseEnabled;                //@synthesize doublePhaseEnabled=_doublePhaseEnabled - In the implementation block
@property (nonatomic,readonly) double dimensionThreshold;              //@synthesize dimensionThreshold=_dimensionThreshold - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(BOOL)doublePhaseEnabled;
-(double)dimensionThreshold;
@end
