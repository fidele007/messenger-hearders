/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString;

@interface FBDeviceDiscoverySubscribeData : FBGraphQLInput {

	NSString* _clientSubscriptionId;
	NSString* _topicTag;
	NSString* _internalIp;
	NSString* _internalNetmask;

}

@property (nonatomic,copy) NSString * clientSubscriptionId;              //@synthesize clientSubscriptionId=_clientSubscriptionId - In the implementation block
@property (nonatomic,copy) NSString * topicTag;                          //@synthesize topicTag=_topicTag - In the implementation block
@property (nonatomic,copy) NSString * internalIp;                        //@synthesize internalIp=_internalIp - In the implementation block
@property (nonatomic,copy) NSString * internalNetmask;                   //@synthesize internalNetmask=_internalNetmask - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)clientSubscriptionId;
-(void)setClientSubscriptionId:(NSString *)arg1 ;
-(NSString *)topicTag;
-(void)setTopicTag:(NSString *)arg1 ;
-(NSString *)internalIp;
-(void)setInternalIp:(NSString *)arg1 ;
-(NSString *)internalNetmask;
-(void)setInternalNetmask:(NSString *)arg1 ;
@end

