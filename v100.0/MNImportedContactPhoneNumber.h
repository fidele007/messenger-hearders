/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, LPPhoneNumber;

@interface MNImportedContactPhoneNumber : FBValueObject <NSCopying> {

	BOOL _isVerified;
	NSString* _label;
	LPPhoneNumber* _phoneNumber;

}

@property (nonatomic,readonly) BOOL isVerified;                               //@synthesize isVerified=_isVerified - In the implementation block
@property (nonatomic,copy,readonly) NSString * label;                         //@synthesize label=_label - In the implementation block
@property (nonatomic,copy,readonly) LPPhoneNumber * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
-(id)initWithIsVerified:(BOOL)arg1 label:(id)arg2 phoneNumber:(id)arg3 ;
-(NSString *)label;
-(LPPhoneNumber *)phoneNumber;
-(BOOL)isVerified;
@end
