/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequest.h>

@class NSString;

@interface FBAttributionRequest : FBNetworkerRequest {

	BOOL _trackingEnabled;
	NSString* _userID;
	NSString* _deviceID;
	NSString* _advertisingID;
	NSString* _previousAdvertisingID;

}

@property (nonatomic,copy,readonly) NSString * userID;                             //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceID;                           //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,copy,readonly) NSString * advertisingID;                      //@synthesize advertisingID=_advertisingID - In the implementation block
@property (nonatomic,copy,readonly) NSString * previousAdvertisingID;              //@synthesize previousAdvertisingID=_previousAdvertisingID - In the implementation block
@property (nonatomic,readonly) BOOL trackingEnabled;                               //@synthesize trackingEnabled=_trackingEnabled - In the implementation block
-(id)networkRequest;
-(id)initWithUserID:(id)arg1 deviceID:(id)arg2 advertisingID:(id)arg3 previousAdvertisingID:(id)arg4 trackingEnabled:(BOOL)arg5 callbackPerformer:(id)arg6 ;
-(NSString *)advertisingID;
-(BOOL)trackingEnabled;
-(NSString *)previousAdvertisingID;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)deviceID;
-(NSString *)userID;
@end

