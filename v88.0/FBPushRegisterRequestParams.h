/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface FBPushRegisterRequestParams : NSObject {

	BOOL _hasAlertsOff;
	BOOL _isNonPhone;
	BOOL _isInitialRegistration;
	BOOL _hasMessagePreviewsEnabled;
	int _retryCount;
	NSString* _token;
	NSString* _transmitterID;
	NSString* _deviceID;
	NSString* _url;
	NSDictionary* _extraData;

}

@property (nonatomic,copy) NSString * token;                              //@synthesize token=_token - In the implementation block
@property (nonatomic,copy) NSString * transmitterID;                      //@synthesize transmitterID=_transmitterID - In the implementation block
@property (assign,nonatomic) BOOL hasAlertsOff;                           //@synthesize hasAlertsOff=_hasAlertsOff - In the implementation block
@property (assign,nonatomic) BOOL isNonPhone;                             //@synthesize isNonPhone=_isNonPhone - In the implementation block
@property (assign,nonatomic) BOOL isInitialRegistration;                  //@synthesize isInitialRegistration=_isInitialRegistration - In the implementation block
@property (nonatomic,copy) NSString * deviceID;                           //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,copy) NSString * url;                                //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSDictionary * extraData;                      //@synthesize extraData=_extraData - In the implementation block
@property (assign,nonatomic) BOOL hasMessagePreviewsEnabled;              //@synthesize hasMessagePreviewsEnabled=_hasMessagePreviewsEnabled - In the implementation block
@property (assign,nonatomic) int retryCount;                              //@synthesize retryCount=_retryCount - In the implementation block
-(BOOL)hasAlertsOff;
-(BOOL)isNonPhone;
-(BOOL)isInitialRegistration;
-(BOOL)hasMessagePreviewsEnabled;
-(NSString *)transmitterID;
-(void)setTransmitterID:(NSString *)arg1 ;
-(void)setHasAlertsOff:(BOOL)arg1 ;
-(void)setIsNonPhone:(BOOL)arg1 ;
-(void)setIsInitialRegistration:(BOOL)arg1 ;
-(void)setHasMessagePreviewsEnabled:(BOOL)arg1 ;
-(id)initWithToken:(id)arg1 transmitterID:(id)arg2 hasAlertsOff:(BOOL)arg3 isNonPhone:(BOOL)arg4 deviceID:(id)arg5 isInitialRegistration:(BOOL)arg6 url:(id)arg7 extraData:(id)arg8 hasMessagePreviewsEnabled:(BOOL)arg9 ;
-(id)initWithToken:(id)arg1 transmitterID:(id)arg2 hasAlertsOff:(BOOL)arg3 isNonPhone:(BOOL)arg4 deviceID:(id)arg5 isInitialRegistration:(BOOL)arg6 extraData:(id)arg7 hasMessagePreviewsEnabled:(BOOL)arg8 ;
-(id)initWithToken:(id)arg1 transmitterID:(id)arg2 isNonPhone:(BOOL)arg3 deviceID:(id)arg4 isInitialRegistration:(BOOL)arg5 url:(id)arg6 extraData:(id)arg7 ;
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(int)retryCount;
-(void)setRetryCount:(int)arg1 ;
-(void)setExtraData:(NSDictionary *)arg1 ;
-(void)setDeviceID:(NSString *)arg1 ;
-(NSString *)deviceID;
-(NSDictionary *)extraData;
@end

