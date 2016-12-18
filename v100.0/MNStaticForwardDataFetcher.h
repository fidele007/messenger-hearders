/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNExternalForwardDataFetcher.h>

@class MNExternalForwardData, FBMessageOutgoingAttribution, MNExternalForwardDataFetcherListenerAnnouncer, NSString;

@interface MNStaticForwardDataFetcher : NSObject <MNExternalForwardDataFetcher> {

	MNExternalForwardData* _externalForwardData;
	FBMessageOutgoingAttribution* _messageOutgoingAttribution;
	long long _contentType;
	MNExternalForwardDataFetcherListenerAnnouncer* _announcer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithExternalForwardData:(id)arg1 messageOutgoingAttribution:(id)arg2 forwardFlowContentType:(long long)arg3 ;
-(long long)contentType;
-(void)fetchData;
-(unsigned long long)numberOfAttachments;
-(void)addListener:(id)arg1 ;
@end

