/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:01 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBGraphQLServiceConfiguration.h>
#import <Messenger/FBGraphQLBatchServiceConfiguring.h>

@class NSString;

@interface FBGraphQLBatchServiceConfiguration : FBGraphQLServiceConfiguration <FBGraphQLBatchServiceConfiguring> {

	unsigned long long _serverSideScheduler;
	NSString* _clientQueryID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<FBServiceConfigurationCoring> core; 
@property (nonatomic,readonly) id<FBServiceConfigurationSecuring> security; 
@property (nonatomic,readonly) id<FBServiceConfigurationTransporting> transport; 
@property (nonatomic,readonly) id<FBServiceConfigurationRequesting> request; 
@property (nonatomic,copy) NSString * udpPrimedChannelID; 
@property (assign,nonatomic) unsigned long long serverSideScheduler;                          //@synthesize serverSideScheduler=_serverSideScheduler - In the implementation block
@property (nonatomic,copy) NSString * clientQueryID;                                          //@synthesize clientQueryID=_clientQueryID - In the implementation block
-(NSString *)clientQueryID;
-(unsigned long long)serverSideScheduler;
-(void)setServerSideScheduler:(unsigned long long)arg1 ;
-(void)setClientQueryID:(NSString *)arg1 ;
@end

