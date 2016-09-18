/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:56 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBProfileTabNavExperimentContext : FBExperimentContext {

	BOOL _shouldUseProfileTabNav;
	BOOL _shouldShowTabBar;
	BOOL _shouldShowInroCardAboveTabNav;
	long long _composerPositionWithTabNav;

}

@property (nonatomic,readonly) BOOL shouldUseProfileTabNav;                       //@synthesize shouldUseProfileTabNav=_shouldUseProfileTabNav - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowTabBar;                             //@synthesize shouldShowTabBar=_shouldShowTabBar - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowInroCardAboveTabNav;                //@synthesize shouldShowInroCardAboveTabNav=_shouldShowInroCardAboveTabNav - In the implementation block
@property (nonatomic,readonly) long long composerPositionWithTabNav;              //@synthesize composerPositionWithTabNav=_composerPositionWithTabNav - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(BOOL)shouldUseProfileTabNav;
-(BOOL)shouldShowInroCardAboveTabNav;
-(long long)composerPositionWithTabNav;
-(BOOL)shouldShowTabBar;
@end

