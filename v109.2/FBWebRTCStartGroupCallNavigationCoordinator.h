/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:34 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBViewerContextClassProvidable.h>

@protocol FBProvider;
@class NSString;

@interface FBWebRTCStartGroupCallNavigationCoordinator : NSObject <FBViewerContextClassProvidable> {

	id<FBProvider> _callTabContactsSelectorViewControllerProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)navigateToStartGroupCallWithPresentingViewController:(id)arg1 callTrigger:(id)arg2 title:(long long)arg3 ;
-(void)_showContactSelectorViewController:(id)arg1 withPresentingViewContoller:(id)arg2 ;
-(void)navigateToStartCallWithPresentingViewController:(id)arg1 callTrigger:(id)arg2 ;
-(id)initWithProviderMapData:(id)arg1 ;
@end

