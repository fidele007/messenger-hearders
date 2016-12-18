/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBPaymentsReceiptInfo : FBValueObject <NSCopying> {

	NSString* _productID;
	NSString* _clientType;

}

@property (nonatomic,copy,readonly) NSString * productID;               //@synthesize productID=_productID - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientType;              //@synthesize clientType=_clientType - In the implementation block
-(id)initWithProductID:(id)arg1 clientType:(id)arg2 ;
-(NSString *)productID;
-(NSString *)clientType;
@end

