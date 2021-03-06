/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:48 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBViewerContextClassProvidable.h>

@protocol FBProvider;
@class MNUserInfoController, NSString;

@interface MNUserInfoControllerCoordinator : NSObject <FBViewerContextClassProvidable> {

	id<FBProvider> _userInfoControllerProvider;
	MNUserInfoController* _userInfoController;

}

@property (nonatomic,retain) MNUserInfoController * userInfoController;              //@synthesize userInfoController=_userInfoController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MNUserInfoController *)userInfoController;
-(void)setUserInfoController:(MNUserInfoController *)arg1 ;
-(void)presentUserInfoSheetWithConfiguration:(id)arg1 inView:(id)arg2 sourceView:(id)arg3 ;
-(id)initWithProviderMapData:(id)arg1 ;
@end

