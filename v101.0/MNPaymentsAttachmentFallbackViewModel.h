/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface MNPaymentsAttachmentFallbackViewModel : FBValueObject <NSCopying> {

	NSString* _titleText;
	NSString* _descriptionText;
	NSURL* _fallbackUrl;

}

@property (nonatomic,copy,readonly) NSString * titleText;                    //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy,readonly) NSString * descriptionText;              //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy,readonly) NSURL * fallbackUrl;                     //@synthesize fallbackUrl=_fallbackUrl - In the implementation block
-(id)initWithTitleText:(id)arg1 descriptionText:(id)arg2 fallbackUrl:(id)arg3 ;
-(NSURL *)fallbackUrl;
-(NSString *)descriptionText;
-(NSString *)titleText;
@end
