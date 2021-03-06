/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNServiceControllable.h>
#import <Messenger/MNViewModelSubscriptionService.h>

@class MNGroupsViewModelSubscriptionServiceProvider, MNViewModelSubscriptionServiceHandler, NSString;

@interface MNGroupsViewModelSubscriptionService : NSObject <MNServiceControllable, MNViewModelSubscriptionService> {

	MNGroupsViewModelSubscriptionServiceProvider* _serviceProvider;
	MNViewModelSubscriptionServiceHandler* _serviceHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)additionalPageRequesterForSubscriptionServiceTypePrimary:(long long)arg1 ;
-(id)startSubscription:(id)arg1 ;
-(id)roomSuggestionsRefreshManager;
-(void)cancelSubscription:(id)arg1 ;
-(id)initWithThreadListServiceDependencies:(id)arg1 handlerChainManager:(id)arg2 userSessionObservingCenter:(id)arg3 roomsModelController:(id)arg4 presenceSubscriptionService:(id)arg5 ;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end

