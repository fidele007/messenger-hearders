/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDecimalNumber;

@interface MNPaymentsThemeCardDataModel : FBValueObject <NSCopying> {

	NSString* _memoText;
	NSString* _themeFBID;
	NSString* _transferId;
	NSDecimalNumber* _amount;
	NSString* _currencyCode;

}

@property (nonatomic,copy,readonly) NSString * memoText;                   //@synthesize memoText=_memoText - In the implementation block
@property (nonatomic,copy,readonly) NSString * themeFBID;                  //@synthesize themeFBID=_themeFBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * transferId;                 //@synthesize transferId=_transferId - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * amount;              //@synthesize amount=_amount - In the implementation block
@property (nonatomic,copy,readonly) NSString * currencyCode;               //@synthesize currencyCode=_currencyCode - In the implementation block
-(NSString *)memoText;
-(NSString *)transferId;
-(id)initWithMemoText:(id)arg1 themeFBID:(id)arg2 transferId:(id)arg3 amount:(id)arg4 currencyCode:(id)arg5 ;
-(NSString *)themeFBID;
-(NSDecimalNumber *)amount;
-(NSString *)currencyCode;
@end

