/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBVideoNekoAutoLaunchExperimentContext : FBExperimentContext {

	BOOL _autolaunch;
	BOOL _showsBanner;

}

@property (assign,nonatomic) BOOL autolaunch;               //@synthesize autolaunch=_autolaunch - In the implementation block
@property (assign,nonatomic) BOOL showsBanner;              //@synthesize showsBanner=_showsBanner - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)autolaunch;
-(void)setAutolaunch:(BOOL)arg1 ;
-(BOOL)showsBanner;
-(void)setShowsBanner:(BOOL)arg1 ;
@end

