/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBVideoVerticalVideoExperimentContext : FBExperimentContext {

	double _videoRatio;
	BOOL _enableBleedOutCroppingInChannel;
	long long _croppingFocus;
	BOOL _disableVideoDrAds;
	BOOL _enableVerticalVideoIndicator;

}

@property (assign,nonatomic) double videoRatio;                                 //@synthesize videoRatio=_videoRatio - In the implementation block
@property (assign,nonatomic) BOOL enableBleedOutCroppingInChannel;              //@synthesize enableBleedOutCroppingInChannel=_enableBleedOutCroppingInChannel - In the implementation block
@property (assign,nonatomic) long long croppingFocus;                           //@synthesize croppingFocus=_croppingFocus - In the implementation block
@property (assign,nonatomic) BOOL disableVideoDrAds;                            //@synthesize disableVideoDrAds=_disableVideoDrAds - In the implementation block
@property (assign,nonatomic) BOOL enableVerticalVideoIndicator;                 //@synthesize enableVerticalVideoIndicator=_enableVerticalVideoIndicator - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(long long)croppingFocus;
-(BOOL)disableVideoDrAds;
-(BOOL)enableBleedOutCroppingInChannel;
-(BOOL)enableVerticalVideoIndicator;
-(double)videoRatio;
-(void)setVideoRatio:(double)arg1 ;
-(void)setEnableBleedOutCroppingInChannel:(BOOL)arg1 ;
-(void)setCroppingFocus:(long long)arg1 ;
-(void)setDisableVideoDrAds:(BOOL)arg1 ;
-(void)setEnableVerticalVideoIndicator:(BOOL)arg1 ;
@end

