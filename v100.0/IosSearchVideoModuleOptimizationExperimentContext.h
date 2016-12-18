/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface IosSearchVideoModuleOptimizationExperimentContext : FBExperimentContext {

	BOOL _enable_video_module_creation_story_lazy_loading;
	BOOL _enable_video_payload_optimization;
	BOOL _video_module_optimization_disable_channel_player;
	BOOL _video_module_optimization_lazy_video_module;

}

@property (assign,nonatomic) BOOL enable_video_module_creation_story_lazy_loading;               //@synthesize enable_video_module_creation_story_lazy_loading=_enable_video_module_creation_story_lazy_loading - In the implementation block
@property (assign,nonatomic) BOOL enable_video_payload_optimization;                             //@synthesize enable_video_payload_optimization=_enable_video_payload_optimization - In the implementation block
@property (assign,nonatomic) BOOL video_module_optimization_disable_channel_player;              //@synthesize video_module_optimization_disable_channel_player=_video_module_optimization_disable_channel_player - In the implementation block
@property (assign,nonatomic) BOOL video_module_optimization_lazy_video_module;                   //@synthesize video_module_optimization_lazy_video_module=_video_module_optimization_lazy_video_module - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)enable_video_module_creation_story_lazy_loading;
-(BOOL)enable_video_payload_optimization;
-(BOOL)video_module_optimization_disable_channel_player;
-(BOOL)video_module_optimization_lazy_video_module;
-(void)setEnable_video_module_creation_story_lazy_loading:(BOOL)arg1 ;
-(void)setEnable_video_payload_optimization:(BOOL)arg1 ;
-(void)setVideo_module_optimization_disable_channel_player:(BOOL)arg1 ;
-(void)setVideo_module_optimization_lazy_video_module:(BOOL)arg1 ;
@end

