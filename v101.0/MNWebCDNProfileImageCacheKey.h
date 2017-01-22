/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, MNWebCDNProfileImageSpec;

@interface MNWebCDNProfileImageCacheKey : FBValueObject <NSCopying, NSCoding> {

	NSString* _infoString;
	MNWebCDNProfileImageSpec* _specification;

}

@property (nonatomic,copy,readonly) NSString * infoString;                                 //@synthesize infoString=_infoString - In the implementation block
@property (nonatomic,copy,readonly) MNWebCDNProfileImageSpec * specification;              //@synthesize specification=_specification - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(id)initWithInfoString:(id)arg1 specification:(id)arg2 ;
-(NSString *)infoString;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(MNWebCDNProfileImageSpec *)specification;
@end
