/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface MNMQTTBackgroundTimeExperimentContext : FBExperimentContext {

	int _backgroundRunningTime;
	int _sendResponseWaitTime;

}

@property (nonatomic,readonly) int backgroundRunningTime;              //@synthesize backgroundRunningTime=_backgroundRunningTime - In the implementation block
@property (nonatomic,readonly) int sendResponseWaitTime;               //@synthesize sendResponseWaitTime=_sendResponseWaitTime - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(int)sendResponseWaitTime;
-(int)backgroundRunningTime;
@end

