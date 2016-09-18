/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, FBNativeTemplateContextData;

@interface FBNativeTemplateAsyncParamsData : FBGraphQLInput {

	NSString* _payload;
	NSString* _clientData;
	FBNativeTemplateContextData* _ntContext;

}

@property (nonatomic,copy) NSString * payload;                                   //@synthesize payload=_payload - In the implementation block
@property (nonatomic,copy) NSString * clientData;                                //@synthesize clientData=_clientData - In the implementation block
@property (nonatomic,copy) FBNativeTemplateContextData * ntContext;              //@synthesize ntContext=_ntContext - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(FBNativeTemplateContextData *)ntContext;
-(void)setNtContext:(FBNativeTemplateContextData *)arg1 ;
-(NSString *)payload;
-(void)setPayload:(NSString *)arg1 ;
-(NSString *)clientData;
-(void)setClientData:(NSString *)arg1 ;
@end

