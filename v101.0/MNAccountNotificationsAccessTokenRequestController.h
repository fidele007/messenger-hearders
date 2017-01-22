/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>

@protocol FBNetworkDispatch;
@class NSString;

@interface MNAccountNotificationsAccessTokenRequestController : NSObject <FBClassProvidable> {

	id<FBNetworkDispatch> _networkDispatcher;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNetworkDispatcher:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)fetchAccountNotificationsAccessTokenForAccountWithFBID:(id)arg1 accountAccessToken:(id)arg2 machineID:(id)arg3 didFetchNotificationsAccessTokenBlock:(/*^block*/id)arg4 didFailWithErrorBlock:(/*^block*/id)arg5 ;
@end
