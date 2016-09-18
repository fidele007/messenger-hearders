/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:59 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBDeviceBasedAccountCredential : FBValueObject <NSCopying> {

	BOOL _hasPin;
	NSString* _nonce;

}

@property (nonatomic,copy,readonly) NSString * nonce;              //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,readonly) BOOL hasPin;                        //@synthesize hasPin=_hasPin - In the implementation block
-(id)initWithNonce:(id)arg1 hasPin:(BOOL)arg2 ;
-(NSString *)nonce;
-(BOOL)hasPin;
@end

