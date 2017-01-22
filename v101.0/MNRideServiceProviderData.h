/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MNRideServiceAuthData, MNRideServicePageData;

@interface MNRideServiceProviderData : FBValueObject <NSCopying> {

	BOOL _optionalDestEnabled;
	NSString* _name;
	NSString* _etaText;
	MNRideServiceAuthData* _authData;
	MNRideServicePageData* _pageData;
	NSString* _promoCode;

}

@property (nonatomic,copy,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * etaText;                            //@synthesize etaText=_etaText - In the implementation block
@property (nonatomic,copy,readonly) MNRideServiceAuthData * authData;              //@synthesize authData=_authData - In the implementation block
@property (nonatomic,copy,readonly) MNRideServicePageData * pageData;              //@synthesize pageData=_pageData - In the implementation block
@property (nonatomic,readonly) BOOL optionalDestEnabled;                           //@synthesize optionalDestEnabled=_optionalDestEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSString * promoCode;                          //@synthesize promoCode=_promoCode - In the implementation block
-(MNRideServicePageData *)pageData;
-(MNRideServiceAuthData *)authData;
-(NSString *)promoCode;
-(BOOL)optionalDestEnabled;
-(id)initWithName:(id)arg1 etaText:(id)arg2 authData:(id)arg3 pageData:(id)arg4 optionalDestEnabled:(BOOL)arg5 promoCode:(id)arg6 ;
-(NSString *)etaText;
-(NSString *)name;
@end
