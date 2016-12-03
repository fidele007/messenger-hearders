/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface MNRoomFriendsInfoViewModel : FBValueObject <NSCopying> {

	NSString* _title;
	NSString* _membersTitle;
	NSArray* _friendParticipants;
	NSString* _moreFriendParticipantsTitle;

}

@property (nonatomic,copy,readonly) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * membersTitle;                             //@synthesize membersTitle=_membersTitle - In the implementation block
@property (nonatomic,copy,readonly) NSArray * friendParticipants;                        //@synthesize friendParticipants=_friendParticipants - In the implementation block
@property (nonatomic,copy,readonly) NSString * moreFriendParticipantsTitle;              //@synthesize moreFriendParticipantsTitle=_moreFriendParticipantsTitle - In the implementation block
-(NSString *)membersTitle;
-(NSArray *)friendParticipants;
-(id)initWithTitle:(id)arg1 membersTitle:(id)arg2 friendParticipants:(id)arg3 moreFriendParticipantsTitle:(id)arg4 ;
-(NSString *)moreFriendParticipantsTitle;
-(NSString *)title;
@end
