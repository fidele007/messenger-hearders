/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMUser, NSString;

@interface MNUserInfoLegacyViewModel : FBValueObject <NSCopying> {

	FBMUser* _user;
	NSString* _phoneNumber;

}

@property (nonatomic,copy,readonly) FBMUser * user;                      //@synthesize user=_user - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
-(id)initWithUser:(id)arg1 phoneNumber:(id)arg2 ;
-(FBMUser *)user;
-(NSString *)phoneNumber;
@end

