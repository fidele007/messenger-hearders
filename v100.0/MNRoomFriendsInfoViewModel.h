/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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
-(NSString *)moreFriendParticipantsTitle;
-(id)initWithTitle:(id)arg1 membersTitle:(id)arg2 friendParticipants:(id)arg3 moreFriendParticipantsTitle:(id)arg4 ;
-(NSString *)title;
@end

