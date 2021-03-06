/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNSecureThreadServiceControlling <NSObject,MNSecureMessagingServiceAPIRequestFulfilling,MNServiceControllable,MNSecureMessagingCapabilityQuerying>
@required
-(void)addSendListener:(id)arg1;
-(void)removeSendListener:(id)arg1;
-(void)addRegisteredDeviceStatusChangeListener:(id)arg1;
-(void)addServiceListener:(id)arg1;
-(void)removeServiceListener:(id)arg1;
-(void)addThreadExistenceInfoCacheObserver:(id)arg1;
-(void)removeThreadExistenceInfoCacheObserver:(id)arg1;
-(void)addIncomingMessageListener:(id)arg1;
-(void)removeIncomingMessageListener:(id)arg1;
-(void)removeRegisteredDeviceStatusChangeListener:(id)arg1;
-(void)setExternalSecureThreadCacheInvalidator:(id)arg1;
-(void)removeSubscriber:(id)arg1;
-(void)addSubscriber:(id)arg1;

@end

