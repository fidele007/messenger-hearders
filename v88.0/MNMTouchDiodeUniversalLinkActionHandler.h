/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNUniversalLinkActionHandler.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBProvider;
@class FBMLoggedInUserInfoManager, FBAnalytics, NSString;

@interface MNMTouchDiodeUniversalLinkActionHandler : NSObject <MNUniversalLinkActionHandler, FBClassProvidable> {

	id<FBProvider> _threadNavigationCoordinatorProvider;
	id<FBProvider> _navigationCoordinatorProvider;
	id<FBProvider> _newThreadNavigationCoordinatorProvider;
	FBMLoggedInUserInfoManager* _loggedInUserInfoManager;
	FBAnalytics* _analytics;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(BOOL)performActionForUniversalLink:(id)arg1 ;
-(id)initWithThreadNavigationCoordinatorProvider:(id)arg1 navigationCoordinatorProvider:(id)arg2 newThreadNavigationCoordinatorProvider:(id)arg3 loggedInUserInfoManager:(id)arg4 analytics:(id)arg5 ;
-(void)_openComposer;
-(BOOL)canHandleUniversalLink:(id)arg1 ;
@end
