/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBCrowdNoiseStrategy.h>

@protocol FBCrowdNoiseModel, FBLocationServicesAlwaysNUXDataSource;
@class FBUserSession, NSString;

@interface FBLocationServicesAlwaysNUXCrowdNoiseStrategy : NSObject <FBCrowdNoiseStrategy> {

	FBUserSession* _session;
	id<FBCrowdNoiseModel> _model;
	id<FBLocationServicesAlwaysNUXDataSource> _dataSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<FBCrowdNoiseModel> model; 
@property (nonatomic,readonly) double viewMinInitialVelocityNormal; 
@property (nonatomic,readonly) double viewMaxInitialVelocityNormal; 
@property (nonatomic,readonly) double viewMinInitialVelocityNotable; 
@property (nonatomic,readonly) double viewMaxInitialVelocityNotable; 
@property (nonatomic,readonly) double viewAccelerationNormal; 
@property (nonatomic,readonly) double viewAccelerationNotable; 
@property (nonatomic,readonly) double viewMinInitialSize; 
@property (nonatomic,readonly) double viewMaxInitialSize; 
@property (nonatomic,readonly) double viewInitialNotableSize; 
@property (nonatomic,readonly) double viewNotableTimeReachFullAmplitude; 
@property (nonatomic,readonly) double viewNotableAssimilationScreenPercent; 
@property (nonatomic,readonly) double viewEndZoneFinalScale; 
@property (nonatomic,readonly) double viewEndZoneScreenPercent; 
@property (nonatomic,readonly) double viewMinWavelength; 
@property (nonatomic,readonly) double viewMaxWavelength; 
@property (nonatomic,readonly) double viewMinAmplitude; 
@property (nonatomic,readonly) double viewMaxAmplitude; 
@property (nonatomic,readonly) unsigned long long viewEquilibriumVisibleWind; 
@property (nonatomic,readonly) double viewFireworkZoneWidthScreenPercent; 
@property (nonatomic,readonly) unsigned long long viewWindKeyFrames; 
@property (nonatomic,readonly) unsigned long long viewDiffuserCapacity; 
@property (nonatomic,readonly) double viewDiffuserPeriod; 
@property (nonatomic,readonly) unsigned long long viewStartingLargestKnownDelta; 
@property (nonatomic,readonly) double controllerMinSubmissionPeriod; 
@property (nonatomic,readonly) double controllerDeltaFlushPeriod; 
@property (nonatomic,readonly) float controllerDropInsignificantDeltaPercentThreshold; 
-(void)generateParticleViewForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)notableColorForIdentifier:(id)arg1 ;
-(double)windHeightForViewSize:(CGSize)arg1 ;
-(double)viewMinInitialVelocityNormal;
-(double)viewMaxInitialVelocityNormal;
-(double)viewMinInitialVelocityNotable;
-(double)viewMaxInitialVelocityNotable;
-(double)viewAccelerationNormal;
-(double)viewAccelerationNotable;
-(double)viewMinInitialSize;
-(double)viewMaxInitialSize;
-(double)viewInitialNotableSize;
-(double)viewNotableTimeReachFullAmplitude;
-(double)viewNotableAssimilationScreenPercent;
-(double)viewEndZoneFinalScale;
-(double)viewEndZoneScreenPercent;
-(double)viewMinWavelength;
-(double)viewMaxWavelength;
-(double)viewMinAmplitude;
-(double)viewMaxAmplitude;
-(unsigned long long)viewEquilibriumVisibleWind;
-(double)viewFireworkZoneWidthScreenPercent;
-(unsigned long long)viewWindKeyFrames;
-(unsigned long long)viewDiffuserCapacity;
-(double)viewDiffuserPeriod;
-(unsigned long long)viewStartingLargestKnownDelta;
-(double)controllerMinSubmissionPeriod;
-(double)controllerDeltaFlushPeriod;
-(float)controllerDropInsignificantDeltaPercentThreshold;
-(id)initWithSession:(id)arg1 dataSource:(id)arg2 ;
-(id<FBCrowdNoiseModel>)model;
@end

