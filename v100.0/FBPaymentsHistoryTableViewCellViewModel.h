/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBPaymentsCurrencyQuantity, NSDate, FBPaymentsImage;

@interface FBPaymentsHistoryTableViewCellViewModel : FBValueObject <NSCopying> {

	BOOL _shouldShowDisclosureIndicator;
	NSString* _name;
	FBPaymentsCurrencyQuantity* _currencyQuantity;
	NSDate* _updatedTime;
	NSString* _statusText;
	FBPaymentsImage* _image;

}

@property (nonatomic,copy,readonly) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) FBPaymentsCurrencyQuantity * currencyQuantity;              //@synthesize currencyQuantity=_currencyQuantity - In the implementation block
@property (nonatomic,copy,readonly) NSDate * updatedTime;                                       //@synthesize updatedTime=_updatedTime - In the implementation block
@property (nonatomic,copy,readonly) NSString * statusText;                                      //@synthesize statusText=_statusText - In the implementation block
@property (nonatomic,copy,readonly) FBPaymentsImage * image;                                    //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowDisclosureIndicator;                              //@synthesize shouldShowDisclosureIndicator=_shouldShowDisclosureIndicator - In the implementation block
-(NSDate *)updatedTime;
-(FBPaymentsCurrencyQuantity *)currencyQuantity;
-(id)initWithName:(id)arg1 currencyQuantity:(id)arg2 updatedTime:(id)arg3 statusText:(id)arg4 image:(id)arg5 shouldShowDisclosureIndicator:(BOOL)arg6 ;
-(BOOL)shouldShowDisclosureIndicator;
-(NSString *)name;
-(FBPaymentsImage *)image;
-(NSString *)statusText;
@end
