/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface IosNotificationsReadUiExperimentContext : FBExperimentContext {

	BOOL _enable_gray_text_to_mark_as_read;
	BOOL _render_abbreviated_timestamp;
	BOOL _render_icon_over_picture;

}

@property (assign,nonatomic) BOOL enable_gray_text_to_mark_as_read;              //@synthesize enable_gray_text_to_mark_as_read=_enable_gray_text_to_mark_as_read - In the implementation block
@property (assign,nonatomic) BOOL render_abbreviated_timestamp;                  //@synthesize render_abbreviated_timestamp=_render_abbreviated_timestamp - In the implementation block
@property (assign,nonatomic) BOOL render_icon_over_picture;                      //@synthesize render_icon_over_picture=_render_icon_over_picture - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)enable_gray_text_to_mark_as_read;
-(BOOL)render_abbreviated_timestamp;
-(BOOL)render_icon_over_picture;
-(void)setEnable_gray_text_to_mark_as_read:(BOOL)arg1 ;
-(void)setRender_abbreviated_timestamp:(BOOL)arg1 ;
-(void)setRender_icon_over_picture:(BOOL)arg1 ;
@end

