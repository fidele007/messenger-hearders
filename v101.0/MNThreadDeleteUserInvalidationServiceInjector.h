/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextInjecting.h>

@class FBProviderMapData, FBMUserInvalidator, MNThreadSummarySubscribingAnnouncer, MNUserStore, NSString;

@interface MNThreadDeleteUserInvalidationServiceInjector : NSObject <FBViewerContextInjecting> {

	FBProviderMapData* _mapData;
	FBMUserInvalidator* _userInvalidator;
	MNThreadSummarySubscribingAnnouncer* _threadSummarySubscribingAnnouncer;
	MNUserStore* _userStore;

}

@property (nonatomic,readonly) FBMUserInvalidator * userInvalidator;                                                 //@synthesize userInvalidator=_userInvalidator - In the implementation block
@property (nonatomic,readonly) MNThreadSummarySubscribingAnnouncer * threadSummarySubscribingAnnouncer;              //@synthesize threadSummarySubscribingAnnouncer=_threadSummarySubscribingAnnouncer - In the implementation block
@property (nonatomic,readonly) MNUserStore * userStore;                                                              //@synthesize userStore=_userStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(MNUserStore *)userStore;
-(MNThreadSummarySubscribingAnnouncer *)threadSummarySubscribingAnnouncer;
-(FBMUserInvalidator *)userInvalidator;
@end

