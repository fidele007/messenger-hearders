/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBMPersonRegularIdentityTypeProperties : FBValueObject <NSCoding, NSCopying> {

	BOOL _isPartial;
	BOOL _hasMessenger;
	BOOL _canInstallMessenger;
	BOOL _isMemorialized;

}

@property (nonatomic,readonly) BOOL isPartial;                        //@synthesize isPartial=_isPartial - In the implementation block
@property (nonatomic,readonly) BOOL hasMessenger;                     //@synthesize hasMessenger=_hasMessenger - In the implementation block
@property (nonatomic,readonly) BOOL canInstallMessenger;              //@synthesize canInstallMessenger=_canInstallMessenger - In the implementation block
@property (nonatomic,readonly) BOOL isMemorialized;                   //@synthesize isMemorialized=_isMemorialized - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(BOOL)isMemorialized;
-(BOOL)hasMessenger;
-(id)initWithIsPartial:(BOOL)arg1 hasMessenger:(BOOL)arg2 canInstallMessenger:(BOOL)arg3 isMemorialized:(BOOL)arg4 ;
-(BOOL)canInstallMessenger;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isPartial;
@end

