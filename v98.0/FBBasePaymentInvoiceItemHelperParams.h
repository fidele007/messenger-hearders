/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString;

@interface FBBasePaymentInvoiceItemHelperParams : FBGraphQLInput {

	NSString* _client;
	NSString* _sellerId;
	NSString* _text;

}

@property (nonatomic,copy) NSString * client;                //@synthesize client=_client - In the implementation block
@property (nonatomic,copy) NSString * sellerId;              //@synthesize sellerId=_sellerId - In the implementation block
@property (nonatomic,copy) NSString * text;                  //@synthesize text=_text - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)sellerId;
-(void)setSellerId:(NSString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setClient:(NSString *)arg1 ;
-(NSString *)client;
@end
