/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSNumber, FBPaymentsCard, FBPaymentsCardOption;

@interface FBPaymentsCardViewConfiguration : FBValueObject <NSCopying> {

	NSDictionary* _configurationsForIdentifiers;
	NSNumber* _shouldShowActionButtons;
	long long _presentingMode;
	FBPaymentsCard* _card;
	FBPaymentsCardOption* _acceptedCardOption;

}

@property (nonatomic,copy,readonly) NSDictionary * configurationsForIdentifiers;              //@synthesize configurationsForIdentifiers=_configurationsForIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * shouldShowActionButtons;                       //@synthesize shouldShowActionButtons=_shouldShowActionButtons - In the implementation block
@property (nonatomic,readonly) long long presentingMode;                                      //@synthesize presentingMode=_presentingMode - In the implementation block
@property (nonatomic,copy,readonly) FBPaymentsCard * card;                                    //@synthesize card=_card - In the implementation block
@property (nonatomic,copy,readonly) FBPaymentsCardOption * acceptedCardOption;                //@synthesize acceptedCardOption=_acceptedCardOption - In the implementation block
-(id)initWithConfigurationsForIdentifiers:(id)arg1 shouldShowActionButtons:(id)arg2 presentingMode:(long long)arg3 card:(id)arg4 acceptedCardOption:(id)arg5 ;
-(FBPaymentsCardOption *)acceptedCardOption;
-(long long)presentingMode;
-(NSNumber *)shouldShowActionButtons;
-(NSDictionary *)configurationsForIdentifiers;
-(FBPaymentsCard *)card;
@end

