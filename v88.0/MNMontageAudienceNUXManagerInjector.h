/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBInjecting.h>

@protocol MNModalPresentation;
@class FBProviderMapData, FBUserSession, FBMLoggedInUserInfoManager, NSString;

@interface MNMontageAudienceNUXManagerInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	id<MNModalPresentation> _modalPresenter;
	FBUserSession* _userSession;
	FBMLoggedInUserInfoManager* _loggedInUserInfoManager;

}

@property (nonatomic,readonly) id<MNModalPresentation> modalPresenter;                            //@synthesize modalPresenter=_modalPresenter - In the implementation block
@property (nonatomic,readonly) FBUserSession * userSession;                                       //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,readonly) FBMLoggedInUserInfoManager * loggedInUserInfoManager;              //@synthesize loggedInUserInfoManager=_loggedInUserInfoManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(id<MNModalPresentation>)modalPresenter;
-(FBMLoggedInUserInfoManager *)loggedInUserInfoManager;
-(id)nonCachedMontageAudiencePickerWithIdentifier:(id)arg1 ;
-(FBUserSession *)userSession;
@end

