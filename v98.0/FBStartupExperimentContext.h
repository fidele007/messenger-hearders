/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBStartupExperimentContext : FBExperimentContext {

	BOOL _delayZeroRatingService;
	BOOL _delayJewelController;
	BOOL _disableNotificationsViewControllerPreload;
	BOOL _delayQpFrameworkLoad;

}

@property (assign,nonatomic) BOOL delayZeroRatingService;                                 //@synthesize delayZeroRatingService=_delayZeroRatingService - In the implementation block
@property (assign,nonatomic) BOOL delayJewelController;                                   //@synthesize delayJewelController=_delayJewelController - In the implementation block
@property (assign,nonatomic) BOOL disableNotificationsViewControllerPreload;              //@synthesize disableNotificationsViewControllerPreload=_disableNotificationsViewControllerPreload - In the implementation block
@property (assign,nonatomic) BOOL delayQpFrameworkLoad;                                   //@synthesize delayQpFrameworkLoad=_delayQpFrameworkLoad - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)delayJewelController;
-(BOOL)delayQpFrameworkLoad;
-(BOOL)delayZeroRatingService;
-(BOOL)disableNotificationsViewControllerPreload;
-(void)setDelayZeroRatingService:(BOOL)arg1 ;
-(void)setDelayJewelController:(BOOL)arg1 ;
-(void)setDisableNotificationsViewControllerPreload:(BOOL)arg1 ;
-(void)setDelayQpFrameworkLoad:(BOOL)arg1 ;
@end
