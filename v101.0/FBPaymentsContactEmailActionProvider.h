/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsContactInfoDataActionProviding.h>

@class FBUserSession, FBPaymentsContactInfoNetworkRequestPerformer, NSString;

@interface FBPaymentsContactEmailActionProvider : NSObject <FBPaymentsContactInfoDataActionProviding> {

	FBUserSession* _session;
	FBPaymentsContactInfoNetworkRequestPerformer* _networkReqeustPerformer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addOrUpdateContactData:(id)arg1 withCollectedData:(id)arg2 setDefault:(BOOL)arg3 actionSuccessBlock:(/*^block*/id)arg4 actionFailureBlock:(/*^block*/id)arg5 ;
-(void)deleteContactData:(id)arg1 actionSuccessBlock:(/*^block*/id)arg2 actionFailureBlock:(/*^block*/id)arg3 ;
-(void)setDefaultContactData:(id)arg1 actionSuccessBlock:(/*^block*/id)arg2 actionFailureBlock:(/*^block*/id)arg3 ;
-(id)initWithSession:(id)arg1 ;
@end

