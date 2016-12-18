/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface IosMessengerCallButtonsExperimentContext : FBExperimentContext {

	BOOL _acceptCallButtonOnRight;
	BOOL _dynamicMuteButton;
	BOOL _switchCameraInButtonPanel;

}

@property (assign,nonatomic) BOOL acceptCallButtonOnRight;                //@synthesize acceptCallButtonOnRight=_acceptCallButtonOnRight - In the implementation block
@property (assign,nonatomic) BOOL dynamicMuteButton;                      //@synthesize dynamicMuteButton=_dynamicMuteButton - In the implementation block
@property (assign,nonatomic) BOOL switchCameraInButtonPanel;              //@synthesize switchCameraInButtonPanel=_switchCameraInButtonPanel - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)acceptCallButtonOnRight;
-(BOOL)dynamicMuteButton;
-(BOOL)switchCameraInButtonPanel;
-(void)setAcceptCallButtonOnRight:(BOOL)arg1 ;
-(void)setDynamicMuteButton:(BOOL)arg1 ;
-(void)setSwitchCameraInButtonPanel:(BOOL)arg1 ;
@end

