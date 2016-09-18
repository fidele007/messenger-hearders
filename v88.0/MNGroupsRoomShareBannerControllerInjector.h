/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBInjecting.h>

@class FBProviderMapData, FBMobileConfigContextManager, MNJoinableGroupShareController, FBUserSession, MNThreadImageManager, MNProfileImageViewController, NSString;

@interface MNGroupsRoomShareBannerControllerInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	FBMobileConfigContextManager* _mobileConfigContextManager;
	MNJoinableGroupShareController* _joinableGroupShareController;
	FBUserSession* _session;
	MNThreadImageManager* _threadImageManager;
	MNProfileImageViewController* _profileImageViewController;

}

@property (nonatomic,readonly) FBMobileConfigContextManager * mobileConfigContextManager;                  //@synthesize mobileConfigContextManager=_mobileConfigContextManager - In the implementation block
@property (nonatomic,readonly) MNJoinableGroupShareController * joinableGroupShareController;              //@synthesize joinableGroupShareController=_joinableGroupShareController - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                                    //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) MNThreadImageManager * threadImageManager;                                  //@synthesize threadImageManager=_threadImageManager - In the implementation block
@property (nonatomic,readonly) MNProfileImageViewController * profileImageViewController;                  //@synthesize profileImageViewController=_profileImageViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(FBMobileConfigContextManager *)mobileConfigContextManager;
-(MNProfileImageViewController *)profileImageViewController;
-(MNJoinableGroupShareController *)joinableGroupShareController;
-(MNThreadImageManager *)threadImageManager;
-(FBUserSession *)session;
@end
