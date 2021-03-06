/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMMessageKey, MNPhotoViewModel, NSString;

@interface MNMessageRichUpsellViewModel : FBValueObject <NSCopying> {

	FBMMessageKey* _messageKey;
	MNPhotoViewModel* _photoViewModel;
	NSString* _titleText;
	NSString* _detailText;
	NSString* _buttonText;
	unsigned long long _messageContentType;
	NSString* _montagePhotoOrVideoUpsellOption;

}

@property (nonatomic,copy,readonly) FBMMessageKey * messageKey;                              //@synthesize messageKey=_messageKey - In the implementation block
@property (nonatomic,copy,readonly) MNPhotoViewModel * photoViewModel;                       //@synthesize photoViewModel=_photoViewModel - In the implementation block
@property (nonatomic,copy,readonly) NSString * titleText;                                    //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy,readonly) NSString * detailText;                                   //@synthesize detailText=_detailText - In the implementation block
@property (nonatomic,copy,readonly) NSString * buttonText;                                   //@synthesize buttonText=_buttonText - In the implementation block
@property (nonatomic,readonly) unsigned long long messageContentType;                        //@synthesize messageContentType=_messageContentType - In the implementation block
@property (nonatomic,copy,readonly) NSString * montagePhotoOrVideoUpsellOption;              //@synthesize montagePhotoOrVideoUpsellOption=_montagePhotoOrVideoUpsellOption - In the implementation block
-(MNPhotoViewModel *)photoViewModel;
-(FBMMessageKey *)messageKey;
-(unsigned long long)messageContentType;
-(id)initWithMessageKey:(id)arg1 photoViewModel:(id)arg2 titleText:(id)arg3 detailText:(id)arg4 buttonText:(id)arg5 messageContentType:(unsigned long long)arg6 montagePhotoOrVideoUpsellOption:(id)arg7 ;
-(NSString *)montagePhotoOrVideoUpsellOption;
-(NSString *)titleText;
-(NSString *)buttonText;
-(NSString *)detailText;
@end

