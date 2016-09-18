/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNPaymentsPersistentStorePaymentExtraData : FBValueObject <NSCopying> {

	NSString* _credentialId;
	NSString* _url;
	id _extraData;

}

@property (nonatomic,copy,readonly) NSString * credentialId;              //@synthesize credentialId=_credentialId - In the implementation block
@property (nonatomic,copy,readonly) NSString * url;                       //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) id extraData;                         //@synthesize extraData=_extraData - In the implementation block
-(NSString *)credentialId;
-(id)initWithCredentialId:(id)arg1 url:(id)arg2 extraData:(id)arg3 ;
-(NSString *)url;
-(id)extraData;
@end

