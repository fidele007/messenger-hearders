/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FB360VideoAnalyticsExperimentContext : FBExperimentContext {

	double _viewportLoggingInterval;
	double _viewportChangeThreshold;
	double _engagementLoggingInterval;

}

@property (assign,nonatomic) double viewportLoggingInterval;                //@synthesize viewportLoggingInterval=_viewportLoggingInterval - In the implementation block
@property (assign,nonatomic) double viewportChangeThreshold;                //@synthesize viewportChangeThreshold=_viewportChangeThreshold - In the implementation block
@property (assign,nonatomic) double engagementLoggingInterval;              //@synthesize engagementLoggingInterval=_engagementLoggingInterval - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(double)engagementLoggingInterval;
-(double)viewportChangeThreshold;
-(double)viewportLoggingInterval;
-(void)setViewportLoggingInterval:(double)arg1 ;
-(void)setViewportChangeThreshold:(double)arg1 ;
-(void)setEngagementLoggingInterval:(double)arg1 ;
@end

