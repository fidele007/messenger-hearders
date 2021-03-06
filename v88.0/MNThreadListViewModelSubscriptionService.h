/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNServiceControllable.h>
#import <Messenger/MNViewModelSubscriptionService.h>

@class MNViewModelSubscriptionServiceHandler, NSString;

@interface MNThreadListViewModelSubscriptionService : NSObject <MNServiceControllable, MNViewModelSubscriptionService> {

	MNViewModelSubscriptionServiceHandler* _serviceHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)startSubscription:(id)arg1 ;
-(void)cancelSubscription:(id)arg1 ;
-(id)initWithDependencies:(id)arg1 userSessionObservingCenter:(id)arg2 serviceType:(long long)arg3 threadListType:(long long)arg4 ;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end

