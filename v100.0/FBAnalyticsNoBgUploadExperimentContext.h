/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBAnalyticsNoBgUploadExperimentContext : FBExperimentContext {

	BOOL _muteTimer;
	BOOL _noBgTask;

}

@property (assign,nonatomic) BOOL muteTimer;              //@synthesize muteTimer=_muteTimer - In the implementation block
@property (assign,nonatomic) BOOL noBgTask;               //@synthesize noBgTask=_noBgTask - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)muteTimer;
-(BOOL)noBgTask;
-(void)setMuteTimer:(BOOL)arg1 ;
-(void)setNoBgTask:(BOOL)arg1 ;
@end

