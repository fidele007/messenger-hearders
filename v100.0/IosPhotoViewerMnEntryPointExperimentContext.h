/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface IosPhotoViewerMnEntryPointExperimentContext : FBExperimentContext {

	BOOL _mn_entry_point_should_show_send_label;
	BOOL _mn_entry_point_enabled;
	BOOL _mn_entry_point_should_show_share_action_menu;
	BOOL _mn_entry_point_should_show_message_label;
	BOOL _mn_entry_point_should_show_messenger_icon;

}

@property (assign,nonatomic) BOOL mn_entry_point_should_show_send_label;                     //@synthesize mn_entry_point_should_show_send_label=_mn_entry_point_should_show_send_label - In the implementation block
@property (assign,nonatomic) BOOL mn_entry_point_enabled;                                    //@synthesize mn_entry_point_enabled=_mn_entry_point_enabled - In the implementation block
@property (assign,nonatomic) BOOL mn_entry_point_should_show_share_action_menu;              //@synthesize mn_entry_point_should_show_share_action_menu=_mn_entry_point_should_show_share_action_menu - In the implementation block
@property (assign,nonatomic) BOOL mn_entry_point_should_show_message_label;                  //@synthesize mn_entry_point_should_show_message_label=_mn_entry_point_should_show_message_label - In the implementation block
@property (assign,nonatomic) BOOL mn_entry_point_should_show_messenger_icon;                 //@synthesize mn_entry_point_should_show_messenger_icon=_mn_entry_point_should_show_messenger_icon - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)mn_entry_point_enabled;
-(BOOL)mn_entry_point_should_show_message_label;
-(BOOL)mn_entry_point_should_show_messenger_icon;
-(BOOL)mn_entry_point_should_show_send_label;
-(BOOL)mn_entry_point_should_show_share_action_menu;
-(void)setMn_entry_point_should_show_send_label:(BOOL)arg1 ;
-(void)setMn_entry_point_enabled:(BOOL)arg1 ;
-(void)setMn_entry_point_should_show_share_action_menu:(BOOL)arg1 ;
-(void)setMn_entry_point_should_show_message_label:(BOOL)arg1 ;
-(void)setMn_entry_point_should_show_messenger_icon:(BOOL)arg1 ;
@end

