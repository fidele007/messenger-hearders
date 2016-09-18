/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAnnouncerBase.h>
#import <Messenger/MNExternalForwardDataFetcherListener.h>

@class NSString;

@interface MNExternalForwardDataFetcherListenerAnnouncer : FBAnnouncerBase <MNExternalForwardDataFetcherListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willFetchExternalForwardDataWithMessageOutgoingAttribution:(id)arg1 ;
-(void)didFetchExternalForwardData:(id)arg1 messageOutgoingAttribution:(id)arg2 ;
-(void)didFailToFetchDataWithError:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
