/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:01 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol FBGraphQLServiceConfiguring <NSObject>
@property (nonatomic,readonly) id<FBServiceConfigurationCoring> core; 
@property (nonatomic,readonly) id<FBServiceConfigurationSecuring> security; 
@property (nonatomic,readonly) id<FBServiceConfigurationTransporting> transport; 
@property (nonatomic,readonly) id<FBServiceConfigurationRequesting> request; 
@property (nonatomic,copy) NSString * udpPrimedChannelID; 
@required
-(id<FBServiceConfigurationCoring>)core;
-(NSString *)udpPrimedChannelID;
-(void)setUdpPrimedChannelID:(id)arg1;
-(id<FBServiceConfigurationRequesting>)request;
-(id<FBServiceConfigurationSecuring>)security;
-(id<FBServiceConfigurationTransporting>)transport;

@end

