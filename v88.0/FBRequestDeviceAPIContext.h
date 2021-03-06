/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface FBRequestDeviceAPIContext : NSObject {

	NSDictionary* _appContext;
	NSDictionary* _deviceContext;
	NSString* _method;
	NSString* _thirdPartyAppId;
	NSDictionary* _methodContext;

}

@property (nonatomic,copy) NSDictionary * appContext;                 //@synthesize appContext=_appContext - In the implementation block
@property (nonatomic,copy) NSDictionary * deviceContext;              //@synthesize deviceContext=_deviceContext - In the implementation block
@property (nonatomic,copy,readonly) NSString * method;                //@synthesize method=_method - In the implementation block
@property (nonatomic,copy) NSString * thirdPartyAppId;                //@synthesize thirdPartyAppId=_thirdPartyAppId - In the implementation block
@property (nonatomic,copy) NSDictionary * methodContext;              //@synthesize methodContext=_methodContext - In the implementation block
-(void)setThirdPartyAppId:(NSString *)arg1 ;
-(void)setMethodContext:(NSDictionary *)arg1 ;
-(NSDictionary *)deviceContext;
-(NSString *)thirdPartyAppId;
-(NSDictionary *)methodContext;
-(void)setDeviceContext:(NSDictionary *)arg1 ;
-(NSString *)method;
-(id)initWithMethod:(id)arg1 ;
-(id)requestParameters;
-(void)setAppContext:(NSDictionary *)arg1 ;
-(NSDictionary *)appContext;
@end

