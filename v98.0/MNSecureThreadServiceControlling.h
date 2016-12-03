/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNSecureThreadServiceControlling <NSObject,MNSecureMessagingServiceAPIRequestFulfilling,MNServiceControllable,MNSecureMessagingCapabilityQuerying>
@required
-(void)addRegisteredDeviceStatusChangeListener:(id)arg1;
-(void)addSendListener:(id)arg1;
-(void)removeSendListener:(id)arg1;
-(void)addThreadExistenceInfoCacheObserver:(id)arg1;
-(void)addServiceListener:(id)arg1;
-(void)removeServiceListener:(id)arg1;
-(void)removeThreadExistenceInfoCacheObserver:(id)arg1;
-(void)addIncomingMessageListener:(id)arg1;
-(void)removeIncomingMessageListener:(id)arg1;
-(void)removeRegisteredDeviceStatusChangeListener:(id)arg1;
-(void)setExternalSecureThreadCacheInvalidator:(id)arg1;
-(void)removeSubscriber:(id)arg1;
-(void)addSubscriber:(id)arg1;

@end
