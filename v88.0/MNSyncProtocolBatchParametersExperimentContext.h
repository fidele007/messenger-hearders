/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:56 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface MNSyncProtocolBatchParametersExperimentContext : FBExperimentContext {

	unsigned long long _maxDeltasAbleToProcess;
	unsigned long long _deltaBatchSize;

}

@property (nonatomic,readonly) unsigned long long maxDeltasAbleToProcess;              //@synthesize maxDeltasAbleToProcess=_maxDeltasAbleToProcess - In the implementation block
@property (nonatomic,readonly) unsigned long long deltaBatchSize;                      //@synthesize deltaBatchSize=_deltaBatchSize - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(unsigned long long)maxDeltasAbleToProcess;
-(unsigned long long)deltaBatchSize;
@end

