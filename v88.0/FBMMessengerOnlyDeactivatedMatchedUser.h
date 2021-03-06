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

@class NSString;

@interface FBMMessengerOnlyDeactivatedMatchedUser : FBValueObject <NSCoding, NSCopying> {

	NSString* _accountId;
	NSString* _name;
	NSString* _profilePictureUri;

}

@property (nonatomic,copy,readonly) NSString * accountId;                      //@synthesize accountId=_accountId - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * profilePictureUri;              //@synthesize profilePictureUri=_profilePictureUri - In the implementation block
-(NSString *)profilePictureUri;
-(id)initWithAccountId:(id)arg1 name:(id)arg2 profilePictureUri:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(NSString *)accountId;
@end

