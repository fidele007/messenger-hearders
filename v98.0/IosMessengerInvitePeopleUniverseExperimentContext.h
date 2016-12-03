/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface IosMessengerInvitePeopleUniverseExperimentContext : FBExperimentContext {

	BOOL _invite_people_should_use_action_button_based_invites;
	BOOL _invite_people_should_show_people_tab_invite_action_button_borders;
	BOOL _invite_people_should_show_multipicker_invite_action_button_borders;
	BOOL _invite_people_should_use_invite_priority;
	BOOL _invite_people_should_show_invite_button_in_search;
	BOOL _invite_people_should_auto_invite_pre_picked_invitees;

}

@property (assign,nonatomic) BOOL invite_people_should_use_action_button_based_invites;                            //@synthesize invite_people_should_use_action_button_based_invites=_invite_people_should_use_action_button_based_invites - In the implementation block
@property (assign,nonatomic) BOOL invite_people_should_show_people_tab_invite_action_button_borders;               //@synthesize invite_people_should_show_people_tab_invite_action_button_borders=_invite_people_should_show_people_tab_invite_action_button_borders - In the implementation block
@property (assign,nonatomic) BOOL invite_people_should_show_multipicker_invite_action_button_borders;              //@synthesize invite_people_should_show_multipicker_invite_action_button_borders=_invite_people_should_show_multipicker_invite_action_button_borders - In the implementation block
@property (assign,nonatomic) BOOL invite_people_should_use_invite_priority;                                        //@synthesize invite_people_should_use_invite_priority=_invite_people_should_use_invite_priority - In the implementation block
@property (assign,nonatomic) BOOL invite_people_should_show_invite_button_in_search;                               //@synthesize invite_people_should_show_invite_button_in_search=_invite_people_should_show_invite_button_in_search - In the implementation block
@property (assign,nonatomic) BOOL invite_people_should_auto_invite_pre_picked_invitees;                            //@synthesize invite_people_should_auto_invite_pre_picked_invitees=_invite_people_should_auto_invite_pre_picked_invitees - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)invite_people_should_auto_invite_pre_picked_invitees;
-(BOOL)invite_people_should_show_invite_button_in_search;
-(BOOL)invite_people_should_show_multipicker_invite_action_button_borders;
-(BOOL)invite_people_should_show_people_tab_invite_action_button_borders;
-(BOOL)invite_people_should_use_action_button_based_invites;
-(BOOL)invite_people_should_use_invite_priority;
-(void)setInvite_people_should_use_action_button_based_invites:(BOOL)arg1 ;
-(void)setInvite_people_should_show_people_tab_invite_action_button_borders:(BOOL)arg1 ;
-(void)setInvite_people_should_show_multipicker_invite_action_button_borders:(BOOL)arg1 ;
-(void)setInvite_people_should_use_invite_priority:(BOOL)arg1 ;
-(void)setInvite_people_should_show_invite_button_in_search:(BOOL)arg1 ;
-(void)setInvite_people_should_auto_invite_pre_picked_invitees:(BOOL)arg1 ;
@end
