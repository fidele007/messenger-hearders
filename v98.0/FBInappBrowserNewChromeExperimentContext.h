/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBInappBrowserNewChromeExperimentContext : FBExperimentContext {

	long long _swipeToDismiss;
	long long _typeUrl;
	BOOL _pulseIcon;
	long long _scrollAwayNavigationBar;

}

@property (assign,nonatomic) long long swipeToDismiss;                       //@synthesize swipeToDismiss=_swipeToDismiss - In the implementation block
@property (assign,nonatomic) long long typeUrl;                              //@synthesize typeUrl=_typeUrl - In the implementation block
@property (assign,nonatomic) BOOL pulseIcon;                                 //@synthesize pulseIcon=_pulseIcon - In the implementation block
@property (assign,nonatomic) long long scrollAwayNavigationBar;              //@synthesize scrollAwayNavigationBar=_scrollAwayNavigationBar - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)pulseIcon;
-(long long)scrollAwayNavigationBar;
-(long long)swipeToDismiss;
-(long long)typeUrl;
-(void)setSwipeToDismiss:(long long)arg1 ;
-(void)setTypeUrl:(long long)arg1 ;
-(void)setPulseIcon:(BOOL)arg1 ;
-(void)setScrollAwayNavigationBar:(long long)arg1 ;
@end

