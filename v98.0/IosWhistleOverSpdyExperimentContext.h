/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface IosWhistleOverSpdyExperimentContext : FBExperimentContext {

	BOOL _enable_connection_merge;
	BOOL _enable_liger_session_manager;

}

@property (assign,nonatomic) BOOL enable_connection_merge;                   //@synthesize enable_connection_merge=_enable_connection_merge - In the implementation block
@property (assign,nonatomic) BOOL enable_liger_session_manager;              //@synthesize enable_liger_session_manager=_enable_liger_session_manager - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)enable_connection_merge;
-(BOOL)enable_liger_session_manager;
-(void)setEnable_connection_merge:(BOOL)arg1 ;
-(void)setEnable_liger_session_manager:(BOOL)arg1 ;
@end
