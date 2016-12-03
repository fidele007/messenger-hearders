/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNThreadCustomizationPromptNicknamePickerItemSupplementaryInfo : FBValueObject <NSCopying> {

	BOOL _isWriteYourOwn;
	NSString* _participantId;

}

@property (nonatomic,copy,readonly) NSString * participantId;              //@synthesize participantId=_participantId - In the implementation block
@property (nonatomic,readonly) BOOL isWriteYourOwn;                        //@synthesize isWriteYourOwn=_isWriteYourOwn - In the implementation block
-(BOOL)isWriteYourOwn;
-(id)initWithParticipantId:(id)arg1 isWriteYourOwn:(BOOL)arg2 ;
-(NSString *)participantId;
@end
