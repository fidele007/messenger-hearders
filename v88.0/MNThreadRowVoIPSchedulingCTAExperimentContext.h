/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface MNThreadRowVoIPSchedulingCTAExperimentContext : FBExperimentContext {

	BOOL _enabled;
	double _cutoffTimeInSeconds;

}

@property (nonatomic,readonly) BOOL enabled;                            //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) double cutoffTimeInSeconds;              //@synthesize cutoffTimeInSeconds=_cutoffTimeInSeconds - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(double)cutoffTimeInSeconds;
-(BOOL)enabled;
@end

