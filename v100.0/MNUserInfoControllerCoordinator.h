/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

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
-(id)initWithProviderMapData:(id)arg1 ;
-(void)presentUserInfoSheetWithConfiguration:(id)arg1 inView:(id)arg2 sourceView:(id)arg3 ;
-(MNUserInfoController *)userInfoController;
-(void)setUserInfoController:(MNUserInfoController *)arg1 ;
@end

