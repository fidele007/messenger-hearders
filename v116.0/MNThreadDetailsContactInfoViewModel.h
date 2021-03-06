/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBStringWithRedactedDescription, NSString, FBMUser;

@interface MNThreadDetailsContactInfoViewModel : FBValueObject <NSCopying> {

	BOOL _audioEnabled;
	BOOL _videoEnabled;
	BOOL _editModeEnabled;
	BOOL _contactAdditionAllowed;
	FBStringWithRedactedDescription* _contactName;
	NSString* _presenceText;
	NSString* _presenceTextAccessibilityLabel;
	NSString* _textFieldThreadName;
	FBMUser* _user;

}

@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * contactName;              //@synthesize contactName=_contactName - In the implementation block
@property (nonatomic,copy,readonly) NSString * presenceText;                                    //@synthesize presenceText=_presenceText - In the implementation block
@property (nonatomic,copy,readonly) NSString * presenceTextAccessibilityLabel;                  //@synthesize presenceTextAccessibilityLabel=_presenceTextAccessibilityLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * textFieldThreadName;                             //@synthesize textFieldThreadName=_textFieldThreadName - In the implementation block
@property (nonatomic,copy,readonly) FBMUser * user;                                             //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) BOOL audioEnabled;                                               //@synthesize audioEnabled=_audioEnabled - In the implementation block
@property (nonatomic,readonly) BOOL videoEnabled;                                               //@synthesize videoEnabled=_videoEnabled - In the implementation block
@property (nonatomic,readonly) BOOL editModeEnabled;                                            //@synthesize editModeEnabled=_editModeEnabled - In the implementation block
@property (nonatomic,readonly) BOOL contactAdditionAllowed;                                     //@synthesize contactAdditionAllowed=_contactAdditionAllowed - In the implementation block
-(id)initWithContactName:(id)arg1 presenceText:(id)arg2 presenceTextAccessibilityLabel:(id)arg3 textFieldThreadName:(id)arg4 user:(id)arg5 audioEnabled:(BOOL)arg6 videoEnabled:(BOOL)arg7 editModeEnabled:(BOOL)arg8 contactAdditionAllowed:(BOOL)arg9 ;
-(NSString *)presenceText;
-(NSString *)presenceTextAccessibilityLabel;
-(BOOL)videoEnabled;
-(BOOL)editModeEnabled;
-(BOOL)contactAdditionAllowed;
-(NSString *)textFieldThreadName;
-(FBStringWithRedactedDescription *)contactName;
-(FBMUser *)user;
-(BOOL)audioEnabled;
@end

