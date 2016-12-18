/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPaymentsPaymentMethod.h>

@class NSString, NSURL;

@interface FBPaymentsAltpayPaymentMethod : NSObject <FBPaymentsPaymentMethod> {

	BOOL _isFullySubsidized;
	NSString* _provider;
	NSString* _networkId;
	NSString* _title;
	NSURL* _imageURL;

}

@property (nonatomic,copy,readonly) NSString * provider;                       //@synthesize provider=_provider - In the implementation block
@property (nonatomic,copy,readonly) NSString * networkId;                      //@synthesize networkId=_networkId - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSURL * imageURL;                               //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,readonly) BOOL isFullySubsidized;                         //@synthesize isFullySubsidized=_isFullySubsidized - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * paymentMethodType; 
@property (nonatomic,copy,readonly) NSString * credentialId; 
-(BOOL)containsSameDataAs:(id)arg1 ;
-(NSString *)paymentMethodType;
-(NSString *)credentialId;
-(NSString *)networkId;
-(id)initWithProvider:(id)arg1 networkId:(id)arg2 title:(id)arg3 imageURL:(id)arg4 isFullySubsidized:(BOOL)arg5 ;
-(BOOL)isFullySubsidized;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)provider;
-(NSURL *)imageURL;
@end

