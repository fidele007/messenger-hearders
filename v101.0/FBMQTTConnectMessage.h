/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, FBMQTTClientInfo, NSMutableArray;

@interface FBMQTTConnectMessage : NSObject <TBase, NSCoding> {

	NSString* __thrift_clientIdentifier;
	NSString* __thrift_willTopic;
	NSString* __thrift_willMessage;
	FBMQTTClientInfo* __thrift_clientInfo;
	NSString* __thrift_password;
	NSMutableArray* __thrift_getDiffsRequests;
	NSMutableArray* __thrift_proxygenInfo;
	NSMutableArray* __thrift_combinedPublishes;
	BOOL __thrift_clientIdentifier_set;
	BOOL __thrift_willTopic_set;
	BOOL __thrift_willMessage_set;
	BOOL __thrift_clientInfo_set;
	BOOL __thrift_password_set;
	BOOL __thrift_getDiffsRequests_set;
	BOOL __thrift_proxygenInfo_set;
	BOOL __thrift_combinedPublishes_set;

}

@property (nonatomic,retain) NSString * clientIdentifier; 
@property (nonatomic,retain) NSString * willTopic; 
@property (nonatomic,retain) NSString * willMessage; 
@property (nonatomic,retain) FBMQTTClientInfo * clientInfo; 
@property (nonatomic,retain) NSString * password; 
@property (nonatomic,retain) NSMutableArray * getDiffsRequests; 
@property (nonatomic,retain) NSMutableArray * proxygenInfo; 
@property (nonatomic,retain) NSMutableArray * combinedPublishes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(BOOL)passwordIsSet;
-(void)unsetPassword;
-(void)setWillTopic:(NSString *)arg1 ;
-(void)setWillMessage:(NSString *)arg1 ;
-(void)setGetDiffsRequests:(NSMutableArray *)arg1 ;
-(void)setProxygenInfo:(NSMutableArray *)arg1 ;
-(void)setCombinedPublishes:(NSMutableArray *)arg1 ;
-(id)initWithClientIdentifier:(id)arg1 willTopic:(id)arg2 willMessage:(id)arg3 clientInfo:(id)arg4 password:(id)arg5 getDiffsRequests:(id)arg6 proxygenInfo:(id)arg7 combinedPublishes:(id)arg8 ;
-(BOOL)clientIdentifierIsSet;
-(void)unsetClientIdentifier;
-(NSString *)willTopic;
-(BOOL)willTopicIsSet;
-(void)unsetWillTopic;
-(NSString *)willMessage;
-(BOOL)willMessageIsSet;
-(void)unsetWillMessage;
-(BOOL)clientInfoIsSet;
-(void)unsetClientInfo;
-(NSMutableArray *)getDiffsRequests;
-(BOOL)getDiffsRequestsIsSet;
-(void)unsetGetDiffsRequests;
-(NSMutableArray *)proxygenInfo;
-(BOOL)proxygenInfoIsSet;
-(void)unsetProxygenInfo;
-(NSMutableArray *)combinedPublishes;
-(BOOL)combinedPublishesIsSet;
-(void)unsetCombinedPublishes;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(FBMQTTClientInfo *)clientInfo;
-(void)setClientInfo:(FBMQTTClientInfo *)arg1 ;
-(NSString *)clientIdentifier;
-(void)write:(id)arg1 ;
@end

